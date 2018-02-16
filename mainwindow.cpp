#include "mainwindow.h"
#include "ui_mainwindow.h"

// QT includes
#include <QLabel>
#include <QLayout>
#include <QDebug>
#include <QSettings>
#include <QDir>
#include <QFileDialog>
#include <QSignalMapper>

// INCLUDE USER THREAD
#include "userthread.h"

// STL includes
#include <vector>

// this enables us to 'talk' kilobot
#include "ohc/packet.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->find_details_frame->setVisible(false);

    //show default settings on the GUI
    ui->kbMax_slider->setValue(kbtracker.kbMaxSize);
    ui->kbMin_slider->setValue(kbtracker.kbMinSize);
    ui->houghAcc_slider->setValue(kbtracker.houghAcc);
    ui->cannyThresh_slider->setValue(kbtracker.cannyThresh);
    ui->maxIDtoTry_input->setText(QString::number(kbtracker.maxIDtoCheck));

    // thread for usercode
    this->thread = new UserThread(&kbtracker, &ohc);

    // make sure that the tracker can ping the experiment
    KilobotExperiment * expt = this->thread->getExperimentPointer();
    if (expt == NULL) {qDebug() << "Something has gone REALLY wrong"; QApplication::exit(-1);}//panic
    kbtracker.expt = expt;

    // SIGNAL / SLOT CONNECTIONS ////////////////////////////////////////////////////////////////////
    // //////////////////////////////////////////////////////////////////////////////////////////////

    // to TRACKER
    connect(ui->load_calib, SIGNAL(clicked(bool)), &this->kbtracker, SLOT(SETUPloadCalibration()));
    connect(ui->cam_radio, SIGNAL(toggled(bool)), &this->kbtracker, SLOT(setSourceType(bool)));
    connect(ui->find_kb, SIGNAL(clicked(bool)), &this->kbtracker, SLOT(SETUPfindKilobots()));
    connect(ui->lineEdit, SIGNAL(editingFinished()), &this->kbtracker, SLOT(SETUPsetCamOrder()));
    connect(ui->refresh, SIGNAL(clicked(bool)), &this->kbtracker,SLOT(RefreshDisplayedImage()));

    connect(ui->houghAcc_slider, SIGNAL(valueChanged(int)), &this->kbtracker, SLOT(setHoughAcc(int)));
    connect(ui->cannyThresh_slider, SIGNAL(valueChanged(int)), &this->kbtracker, SLOT(setCannyThresh(int)));
    connect(ui->kbMax_slider, SIGNAL(valueChanged(int)), &this->kbtracker, SLOT(setKbMax(int)));
    connect(ui->kbMin_slider, SIGNAL(valueChanged(int)), &this->kbtracker, SLOT(setKbMin(int)));
    connect(ui->arena_height_x_slider, SIGNAL(valueChanged(int)), &this->kbtracker, SLOT(setHeightXSlider(int)));
    connect(ui->arena_height_y_slider, SIGNAL(valueChanged(int)), &this->kbtracker, SLOT(setHeightYSlider(int)));

    if (ui->show_ids->isChecked()) this->kbtracker.showIds(true);
    connect(ui->show_ids, SIGNAL(toggled(bool)), &this->kbtracker, SLOT(showIds(bool)));

    connect(ui->maxIDtoTry_input, SIGNAL(textChanged(QString)), &this->kbtracker, SLOT(maxIDtoTry(QString)));


    QSignalMapper *mapper = new QSignalMapper(this);
    mapper->setMapping(ui->run, TRACK);
    mapper->setMapping(ui->identify, IDENTIFY);
    connect(ui->run, SIGNAL(clicked(bool)), this, SLOT(runExpt()));
    connect(ui->identify, SIGNAL(clicked(bool)), mapper, SLOT(map()));
    connect(mapper, SIGNAL(mapped(int)), &this->kbtracker, SLOT(LOOPstartstop(int)));

    // from TRACKER
    connect(&this->kbtracker,SIGNAL(errorMessage(QString)), ui->error_label, SLOT(setText(QString)));
    connect(&this->kbtracker, SIGNAL(setStitchedImage(QPixmap)),ui->result_final,SLOT(setPixmap(QPixmap)));

    connect(ui->sel_video, SIGNAL(clicked(bool)), this, SLOT(setVideoSource()));

    // to OHC
    connect(ui->ohc_connect, SIGNAL(clicked(bool)), &this->ohc, SLOT(toggleConnection()));
    connect(ui->ohc_reset, SIGNAL(toggled(bool)), &this->ohc, SLOT(resetKilobots()));
    connect(ui->ohc_sleep, SIGNAL(toggled(bool)), &this->ohc, SLOT(sleepKilobots()));
    connect(ui->ohc_run, SIGNAL(toggled(bool)), &this->ohc, SLOT(runKilobots()));
    connect(ui->ohc_stop, SIGNAL(toggled(bool)), &this->ohc, SLOT(stopSending()));
    connect(ui->ohc_volt, SIGNAL(toggled(bool)), &this->ohc, SLOT(checkVoltage()));
    connect(ui->ohc_set_prog, SIGNAL(clicked(bool)), &this->ohc, SLOT(chooseProgramFile()));
    connect(ui->ohc_upload_prog, SIGNAL(clicked(bool)), &this->ohc, SLOT(uploadProgram()));

    // from OHC
    connect(&this->ohc,SIGNAL(setStopButton(bool)),ui->ohc_stop,SLOT(setChecked(bool)));
    connect(&this->ohc,SIGNAL(errorMessage(QString)), ui->error_label, SLOT(setText(QString)));

    // TRACKER -> OHC
    connect(&this->kbtracker,SIGNAL(identifyKilo(uint8_t)), &this->ohc, SLOT(identifyKilobot(uint8_t)));
    connect(&this->kbtracker,SIGNAL(broadcastMessage(kilobot_broadcast)), &this->ohc, SLOT(broadcastMessage(kilobot_broadcast)));

    // USERTHREAD -> UI
    connect(this->thread, SIGNAL(setLibName(QString)), ui->expt_msg, SLOT(setText(QString)));
    connect(this->thread, SIGNAL(setGUILayout(QWidget*)), this, SLOT(setGUILayout(QWidget*)));

    // UI -> this
    connect(ui->load_expt, SIGNAL(clicked(bool)), this, SLOT(getExperiment()));
    connect(ui->assignIDs, SIGNAL(clicked(bool)), this, SLOT(assignIDs()));
    connect(ui->calibrate, SIGNAL(clicked(bool)), this, SLOT(calibrate()));
    connect(ui->identify , SIGNAL(clicked(bool)), this, SLOT(identify()));
    connect(ui->rotate_pos , SIGNAL(clicked(bool)), this, SLOT(rotate_pos()));
    connect(ui->rotate_neg , SIGNAL(clicked(bool)), this, SLOT(rotate_neg()));


    // TESTING
    connect(ui->left, SIGNAL(clicked(bool)), this, SLOT(left()));
    connect(ui->right, SIGNAL(clicked(bool)), this, SLOT(right()));
    connect(ui->straight, SIGNAL(clicked(bool)), this, SLOT(straight()));
    connect(ui->test, SIGNAL(clicked(bool)), this, SLOT(test_id()));

    // some nicety
    QSettings settings;
    this->userExpt = settings.value("lastLib", "").toString();
    if (!this->userExpt.isEmpty()) {
        // load previous expt
        this->thread->loadLibrary(userExpt);
    }
    QString lastDir = settings.value("videoLastDir", QDir::homePath()).toString();
    if (!lastDir.isEmpty()) {
        // load previous dir
        this->kbtracker.setVideoDir(lastDir);
        ui->vid_path->setText(lastDir);
        ui->vid_path->setToolTip(lastDir);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setVideoSource()
{

    QSettings settings;
    QString lastDir = settings.value("videoLastDir", QDir::homePath()).toString();
    QString dirName = QFileDialog::getExistingDirectory(this, tr("Set the video source"), lastDir);

    if (dirName.isEmpty()) {
        ui->error_label->setText("No path selected");
    }

    // set dir
    this->kbtracker.setVideoDir(dirName);
    ui->vid_path->setText(dirName);
    ui->vid_path->setToolTip(dirName);
    settings.setValue ("videoLastDir", dirName);
}

void MainWindow::getExperiment()
{

    QSettings settings;
    QString lastDir = settings.value("exptLastDir", QDir::homePath()).toString();
#ifdef Q_OS_WIN
    QString fileName = QFileDialog::getOpenFileName(this, tr("Load experiment"), lastDir, tr("LIB files (*.dll);; All files (*)"));
#else
    QString fileName = QFileDialog::getOpenFileName(this, tr("Load experiment"), lastDir, tr("LIB files (*.so);; All files (*)"));
#endif
    if (fileName.isEmpty()) {
        ui->error_label->setText("No file selected");
    }

    // load
    this->thread->loadLibrary(fileName);

    this->userExpt = fileName;
    settings.setValue ("lastLib", fileName);

    QDir lastDirectory (fileName);
    lastDirectory.cdUp();
    settings.setValue ("exptLastDir", lastDirectory.absolutePath());
}

void MainWindow::assignIDs() {
    if(ui->assignIDs->text() == "Start IDs Assignment"){
        ui->assignIDs->setText("Stop IDs Assignment");}
    else {
    if(ui->assignIDs->text() == "Stop IDs Assignment")
        ui->assignIDs->setText("Start IDs Assignment");
    }

    if(ui->binary_radio->isChecked()) this->thread->chooseInternalExperiments(0);
    else this->thread->chooseInternalExperiments(1);
    this->kbtracker.LOOPstartstop(TRACK);
}

void MainWindow::calibrate() {
    if(ui->calibrate->text() == "Start Motors Calibration"){
        ui->calibrate->setText("Stop Motors Calibration");}
    else {
    if(ui->calibrate->text() == "Stop Motors Calibration")
        ui->calibrate->setText("Start Motors Calibration");
    }
    this->thread->chooseInternalExperiments(2);
    this->kbtracker.LOOPstartstop(TRACK);
}



void MainWindow::identify() {
    if(this->ui->identify->text() == "Start Identify Kilobots"){
        ui->identify->setText("Stop Identify Kilobots");}
    else {
    if(ui->identify->text() == "Stop Identify Kilobots")
        ui->identify->setText("Start Identify Kilobots");
    }
}

void MainWindow::rotate_pos() {
    this->kbtracker.setFlipangle(90);
    this->kbtracker.RefreshDisplayedImage();
}

void MainWindow::rotate_neg() {
    this->kbtracker.setFlipangle(-90);
    this->kbtracker.RefreshDisplayedImage();
}

void MainWindow::runExpt() {
    if (!this->userExpt.isEmpty()) {
        if (ui->run->text()=="Run") {
            if (this->thread->exptLoaded()) {
                this->kbtracker.LOOPstartstop(TRACK);
                ui->run->setText("Stop");
            }
        } else {
            //this->thread->loadLibrary(userExpt);  // resetting all value of the exp lib (by reloading it)
            this->kbtracker.LOOPstartstop(TRACK);
            ui->run->setText("Run");
        }
    }
}

void MainWindow::setGUILayout(QWidget * lay) {

    ui->userGUI->setWidget(lay);

}

void MainWindow::left()
{

    robcomm[ui->test_id->text().toInt()] = 1;


    kilobot_broadcast msg;
    msg.type = 2;
    ohc.broadcastMessage(msg);

}

void MainWindow::right()
{
    robcomm[ui->test_id->text().toInt()] = 2;

    kilobot_broadcast msg;
    msg.type = 3;
    ohc.broadcastMessage(msg);

}

void MainWindow::straight()
{
    robcomm[ui->test_id->text().toInt()] = 0;


    kilobot_broadcast msg;
    msg.type = 1;
    ohc.broadcastMessage(msg);
}

void MainWindow::test_id()
{
    robcomm[ui->test_id->text().toInt()] = 3;

    kilobot_broadcast msg;
    msg.type = 4;
    ohc.broadcastMessage(msg);
}

