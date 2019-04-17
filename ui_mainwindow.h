/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clicksignalqlabel.h"
#include "dragzoomqlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *error_label;
    QFrame *line_4;
    dragZoomQLabel *result_final;
    QPushButton *left;
    QPushButton *straight;
    QPushButton *right;
    QPushButton *test;
    QLineEdit *test_id;
    QToolBox *toolBox;
    QWidget *page_src;
    QFrame *frame;
    QPushButton *load_calib;
    QGroupBox *src_group;
    QRadioButton *vid_radio;
    QRadioButton *cam_radio;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *vid_path;
    QPushButton *sel_video;
    QWidget *page_setup;
    QFrame *find_details_frame;
    QLabel *label_6;
    QSlider *kbMin_slider;
    QLabel *kbMax_label;
    QLabel *label_3;
    QSlider *cannyThresh_slider;
    QLabel *cannyThresh_label;
    QLabel *houghAcc_label;
    QLabel *label_5;
    QSlider *kbMax_slider;
    QSlider *houghAcc_slider;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *kbMin_label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_7;
    QSlider *arena_height_x_slider;
    QLabel *arena_height_y_label;
    QSlider *arena_height_y_slider;
    QLabel *label_13;
    QLabel *arena_height_x_label_2;
    QFrame *line_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *ManualIDenable;
    QLineEdit *manualIDinput;
    QCheckBox *runtime_ids_ckbx;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *red_checkBox;
    QCheckBox *green_checkBox;
    QCheckBox *blue_checkBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *find_kb;
    QPushButton *identify;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *maxIDtoTry_input;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *binary_radio;
    QRadioButton *basethree_radio;
    QPushButton *assignIDs;
    QPushButton *calibrate;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *show_ids;
    QCheckBox *find_details;
    QWidget *page_expt;
    QPushButton *load_expt;
    QLabel *expt_msg;
    QPushButton *run;
    QScrollArea *userGUI;
    QWidget *scrollAreaWidgetContents;
    QLabel *expt_msg_2;
    QWidget *page_ohc;
    QGroupBox *groupBox;
    QRadioButton *ohc_run;
    QRadioButton *ohc_reset;
    QRadioButton *ohc_sleep;
    QRadioButton *ohc_volt;
    QRadioButton *ohc_stop;
    QPushButton *ohc_set_prog;
    QPushButton *ohc_upload_prog;
    QPushButton *ohc_connect;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *rotate_pos;
    QPushButton *refresh;
    QPushButton *rotate_neg;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    clickSignalQLabel *clicksignallabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(972, 748);
        MainWindow->setMinimumSize(QSize(885, 0));
        MainWindow->setMaximumSize(QSize(1024, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        error_label = new QLabel(centralWidget);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setGeometry(QRect(20, 650, 591, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        error_label->setFont(font);
        error_label->setTextFormat(Qt::PlainText);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(610, 40, 16, 571));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        result_final = new dragZoomQLabel(centralWidget);
        result_final->setObjectName(QStringLiteral("result_final"));
        result_final->setGeometry(QRect(10, 40, 600, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        result_final->setPalette(palette);
        result_final->setAutoFillBackground(true);
        left = new QPushButton(centralWidget);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(880, 680, 21, 22));
        straight = new QPushButton(centralWidget);
        straight->setObjectName(QStringLiteral("straight"));
        straight->setGeometry(QRect(910, 680, 21, 22));
        right = new QPushButton(centralWidget);
        right->setObjectName(QStringLiteral("right"));
        right->setGeometry(QRect(940, 680, 21, 22));
        test = new QPushButton(centralWidget);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(780, 710, 80, 22));
        test_id = new QLineEdit(centralWidget);
        test_id->setObjectName(QStringLiteral("test_id"));
        test_id->setGeometry(QRect(880, 710, 81, 22));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(630, 50, 321, 621));
        page_src = new QWidget();
        page_src->setObjectName(QStringLiteral("page_src"));
        page_src->setGeometry(QRect(0, 0, 321, 497));
        frame = new QFrame(page_src);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 311, 191));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        load_calib = new QPushButton(frame);
        load_calib->setObjectName(QStringLiteral("load_calib"));
        load_calib->setGeometry(QRect(10, 10, 291, 32));
        src_group = new QGroupBox(frame);
        src_group->setObjectName(QStringLiteral("src_group"));
        src_group->setGeometry(QRect(10, 50, 291, 131));
        vid_radio = new QRadioButton(src_group);
        vid_radio->setObjectName(QStringLiteral("vid_radio"));
        vid_radio->setEnabled(true);
        vid_radio->setGeometry(QRect(20, 30, 71, 20));
        vid_radio->setCheckable(true);
        vid_radio->setChecked(false);
        cam_radio = new QRadioButton(src_group);
        cam_radio->setObjectName(QStringLiteral("cam_radio"));
        cam_radio->setGeometry(QRect(20, 80, 81, 20));
        cam_radio->setChecked(true);
        lineEdit = new QLineEdit(src_group);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 100, 61, 22));
        label = new QLabel(src_group);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 91, 20));
        vid_path = new QLabel(src_group);
        vid_path->setObjectName(QStringLiteral("vid_path"));
        vid_path->setGeometry(QRect(20, 50, 281, 30));
        sel_video = new QPushButton(frame);
        sel_video->setObjectName(QStringLiteral("sel_video"));
        sel_video->setGeometry(QRect(190, 80, 91, 22));
        toolBox->addItem(page_src, QStringLiteral("Source"));
        page_setup = new QWidget();
        page_setup->setObjectName(QStringLiteral("page_setup"));
        page_setup->setGeometry(QRect(0, 0, 321, 497));
        find_details_frame = new QFrame(page_setup);
        find_details_frame->setObjectName(QStringLiteral("find_details_frame"));
        find_details_frame->setEnabled(true);
        find_details_frame->setGeometry(QRect(0, 230, 301, 271));
        find_details_frame->setMinimumSize(QSize(0, 170));
        find_details_frame->setMaximumSize(QSize(16777215, 340));
        find_details_frame->setFrameShape(QFrame::NoFrame);
        find_details_frame->setFrameShadow(QFrame::Raised);
        find_details_frame->setLineWidth(0);
        label_6 = new QLabel(find_details_frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 90, 61, 20));
        kbMin_slider = new QSlider(find_details_frame);
        kbMin_slider->setObjectName(QStringLiteral("kbMin_slider"));
        kbMin_slider->setGeometry(QRect(60, 70, 201, 20));
        kbMin_slider->setMinimum(2);
        kbMin_slider->setMaximum(25);
        kbMin_slider->setValue(14);
        kbMin_slider->setOrientation(Qt::Horizontal);
        kbMax_label = new QLabel(find_details_frame);
        kbMax_label->setObjectName(QStringLiteral("kbMax_label"));
        kbMax_label->setGeometry(QRect(270, 90, 31, 16));
        label_3 = new QLabel(find_details_frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 30, 61, 20));
        cannyThresh_slider = new QSlider(find_details_frame);
        cannyThresh_slider->setObjectName(QStringLiteral("cannyThresh_slider"));
        cannyThresh_slider->setGeometry(QRect(60, 30, 201, 20));
        cannyThresh_slider->setMinimum(5);
        cannyThresh_slider->setMaximum(200);
        cannyThresh_slider->setValue(50);
        cannyThresh_slider->setOrientation(Qt::Horizontal);
        cannyThresh_label = new QLabel(find_details_frame);
        cannyThresh_label->setObjectName(QStringLiteral("cannyThresh_label"));
        cannyThresh_label->setGeometry(QRect(270, 30, 31, 16));
        houghAcc_label = new QLabel(find_details_frame);
        houghAcc_label->setObjectName(QStringLiteral("houghAcc_label"));
        houghAcc_label->setGeometry(QRect(270, 50, 31, 16));
        label_5 = new QLabel(find_details_frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 70, 61, 20));
        kbMax_slider = new QSlider(find_details_frame);
        kbMax_slider->setObjectName(QStringLiteral("kbMax_slider"));
        kbMax_slider->setGeometry(QRect(60, 90, 201, 20));
        kbMax_slider->setMinimum(3);
        kbMax_slider->setMaximum(40);
        kbMax_slider->setValue(26);
        kbMax_slider->setOrientation(Qt::Horizontal);
        houghAcc_slider = new QSlider(find_details_frame);
        houghAcc_slider->setObjectName(QStringLiteral("houghAcc_slider"));
        houghAcc_slider->setGeometry(QRect(60, 50, 201, 20));
        houghAcc_slider->setMinimum(1);
        houghAcc_slider->setMaximum(100);
        houghAcc_slider->setValue(19);
        houghAcc_slider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(find_details_frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 211, 20));
        label_4 = new QLabel(find_details_frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 50, 61, 20));
        kbMin_label = new QLabel(find_details_frame);
        kbMin_label->setObjectName(QStringLiteral("kbMin_label"));
        kbMin_label->setGeometry(QRect(270, 70, 31, 16));
        line = new QFrame(find_details_frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 0, 301, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(find_details_frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 110, 301, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(find_details_frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 120, 91, 20));
        arena_height_x_slider = new QSlider(find_details_frame);
        arena_height_x_slider->setObjectName(QStringLiteral("arena_height_x_slider"));
        arena_height_x_slider->setGeometry(QRect(90, 120, 171, 20));
        arena_height_x_slider->setMinimum(0);
        arena_height_x_slider->setMaximum(20);
        arena_height_x_slider->setValue(10);
        arena_height_x_slider->setOrientation(Qt::Horizontal);
        arena_height_y_label = new QLabel(find_details_frame);
        arena_height_y_label->setObjectName(QStringLiteral("arena_height_y_label"));
        arena_height_y_label->setGeometry(QRect(270, 120, 31, 16));
        arena_height_y_slider = new QSlider(find_details_frame);
        arena_height_y_slider->setObjectName(QStringLiteral("arena_height_y_slider"));
        arena_height_y_slider->setGeometry(QRect(90, 140, 171, 20));
        arena_height_y_slider->setMinimum(0);
        arena_height_y_slider->setMaximum(20);
        arena_height_y_slider->setValue(10);
        arena_height_y_slider->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(find_details_frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 140, 91, 20));
        arena_height_x_label_2 = new QLabel(find_details_frame);
        arena_height_x_label_2->setObjectName(QStringLiteral("arena_height_x_label_2"));
        arena_height_x_label_2->setGeometry(QRect(270, 140, 31, 16));
        line_8 = new QFrame(find_details_frame);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(0, 155, 301, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(find_details_frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 200, 251, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ManualIDenable = new QCheckBox(layoutWidget);
        ManualIDenable->setObjectName(QStringLiteral("ManualIDenable"));

        horizontalLayout_5->addWidget(ManualIDenable);

        manualIDinput = new QLineEdit(layoutWidget);
        manualIDinput->setObjectName(QStringLiteral("manualIDinput"));

        horizontalLayout_5->addWidget(manualIDinput);

        runtime_ids_ckbx = new QCheckBox(find_details_frame);
        runtime_ids_ckbx->setObjectName(QStringLiteral("runtime_ids_ckbx"));
        runtime_ids_ckbx->setGeometry(QRect(20, 230, 231, 22));
        runtime_ids_ckbx->setChecked(true);
        layoutWidget1 = new QWidget(find_details_frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 170, 254, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        red_checkBox = new QCheckBox(layoutWidget1);
        red_checkBox->setObjectName(QStringLiteral("red_checkBox"));
        red_checkBox->setChecked(true);

        horizontalLayout_4->addWidget(red_checkBox);

        green_checkBox = new QCheckBox(layoutWidget1);
        green_checkBox->setObjectName(QStringLiteral("green_checkBox"));

        horizontalLayout_4->addWidget(green_checkBox);

        blue_checkBox = new QCheckBox(layoutWidget1);
        blue_checkBox->setObjectName(QStringLiteral("blue_checkBox"));
        blue_checkBox->setChecked(true);

        horizontalLayout_4->addWidget(blue_checkBox);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        layoutWidget->raise();
        houghAcc_slider->raise();
        label_6->raise();
        kbMin_slider->raise();
        kbMax_label->raise();
        label_3->raise();
        cannyThresh_slider->raise();
        cannyThresh_label->raise();
        houghAcc_label->raise();
        label_5->raise();
        kbMax_slider->raise();
        label_2->raise();
        label_4->raise();
        kbMin_label->raise();
        line->raise();
        line_2->raise();
        label_7->raise();
        arena_height_x_slider->raise();
        arena_height_y_label->raise();
        arena_height_y_slider->raise();
        label_13->raise();
        arena_height_x_label_2->raise();
        layoutWidget->raise();
        line_8->raise();
        runtime_ids_ckbx->raise();
        layoutWidget2 = new QWidget(page_setup);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 0, 291, 223));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        find_kb = new QPushButton(layoutWidget2);
        find_kb->setObjectName(QStringLiteral("find_kb"));

        verticalLayout_3->addWidget(find_kb);

        identify = new QPushButton(layoutWidget2);
        identify->setObjectName(QStringLiteral("identify"));
        identify->setEnabled(false);

        verticalLayout_3->addWidget(identify);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_8);

        maxIDtoTry_input = new QLineEdit(layoutWidget2);
        maxIDtoTry_input->setObjectName(QStringLiteral("maxIDtoTry_input"));
        maxIDtoTry_input->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(maxIDtoTry_input->sizePolicy().hasHeightForWidth());
        maxIDtoTry_input->setSizePolicy(sizePolicy1);
        maxIDtoTry_input->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(maxIDtoTry_input);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        binary_radio = new QRadioButton(layoutWidget2);
        binary_radio->setObjectName(QStringLiteral("binary_radio"));
        binary_radio->setEnabled(false);
        binary_radio->setChecked(true);

        horizontalLayout_3->addWidget(binary_radio);

        basethree_radio = new QRadioButton(layoutWidget2);
        basethree_radio->setObjectName(QStringLiteral("basethree_radio"));
        basethree_radio->setEnabled(false);
        basethree_radio->setChecked(false);

        horizontalLayout_3->addWidget(basethree_radio);


        verticalLayout_3->addLayout(horizontalLayout_3);

        assignIDs = new QPushButton(layoutWidget2);
        assignIDs->setObjectName(QStringLiteral("assignIDs"));
        assignIDs->setEnabled(false);

        verticalLayout_3->addWidget(assignIDs);

        calibrate = new QPushButton(layoutWidget2);
        calibrate->setObjectName(QStringLiteral("calibrate"));
        calibrate->setEnabled(false);

        verticalLayout_3->addWidget(calibrate);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        show_ids = new QCheckBox(layoutWidget2);
        show_ids->setObjectName(QStringLiteral("show_ids"));
        show_ids->setChecked(true);

        horizontalLayout_6->addWidget(show_ids);

        find_details = new QCheckBox(layoutWidget2);
        find_details->setObjectName(QStringLiteral("find_details"));

        horizontalLayout_6->addWidget(find_details);


        verticalLayout_3->addLayout(horizontalLayout_6);

        toolBox->addItem(page_setup, QStringLiteral("Setup"));
        page_expt = new QWidget();
        page_expt->setObjectName(QStringLiteral("page_expt"));
        page_expt->setGeometry(QRect(0, 0, 321, 497));
        load_expt = new QPushButton(page_expt);
        load_expt->setObjectName(QStringLiteral("load_expt"));
        load_expt->setGeometry(QRect(10, 0, 291, 22));
        expt_msg = new QLabel(page_expt);
        expt_msg->setObjectName(QStringLiteral("expt_msg"));
        expt_msg->setGeometry(QRect(10, 30, 311, 16));
        expt_msg->setAlignment(Qt::AlignCenter);
        run = new QPushButton(page_expt);
        run->setObjectName(QStringLiteral("run"));
        run->setEnabled(true);
        run->setGeometry(QRect(20, 410, 271, 32));
        userGUI = new QScrollArea(page_expt);
        userGUI->setObjectName(QStringLiteral("userGUI"));
        userGUI->setGeometry(QRect(10, 70, 291, 331));
        userGUI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        userGUI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        userGUI->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        userGUI->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 276, 316));
        userGUI->setWidget(scrollAreaWidgetContents);
        expt_msg_2 = new QLabel(page_expt);
        expt_msg_2->setObjectName(QStringLiteral("expt_msg_2"));
        expt_msg_2->setGeometry(QRect(10, 50, 231, 16));
        expt_msg_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        toolBox->addItem(page_expt, QStringLiteral("Experiment"));
        page_ohc = new QWidget();
        page_ohc->setObjectName(QStringLiteral("page_ohc"));
        page_ohc->setGeometry(QRect(0, 0, 98, 28));
        groupBox = new QGroupBox(page_ohc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 121, 121));
        ohc_run = new QRadioButton(groupBox);
        ohc_run->setObjectName(QStringLiteral("ohc_run"));
        ohc_run->setGeometry(QRect(10, 20, 100, 20));
        ohc_reset = new QRadioButton(groupBox);
        ohc_reset->setObjectName(QStringLiteral("ohc_reset"));
        ohc_reset->setGeometry(QRect(10, 40, 100, 20));
        ohc_sleep = new QRadioButton(groupBox);
        ohc_sleep->setObjectName(QStringLiteral("ohc_sleep"));
        ohc_sleep->setGeometry(QRect(10, 60, 100, 20));
        ohc_volt = new QRadioButton(groupBox);
        ohc_volt->setObjectName(QStringLiteral("ohc_volt"));
        ohc_volt->setGeometry(QRect(10, 80, 100, 20));
        ohc_volt->setChecked(false);
        ohc_stop = new QRadioButton(groupBox);
        ohc_stop->setObjectName(QStringLiteral("ohc_stop"));
        ohc_stop->setGeometry(QRect(10, 100, 100, 20));
        ohc_stop->setChecked(true);
        ohc_set_prog = new QPushButton(page_ohc);
        ohc_set_prog->setObjectName(QStringLiteral("ohc_set_prog"));
        ohc_set_prog->setGeometry(QRect(160, 50, 141, 22));
        ohc_upload_prog = new QPushButton(page_ohc);
        ohc_upload_prog->setObjectName(QStringLiteral("ohc_upload_prog"));
        ohc_upload_prog->setGeometry(QRect(160, 80, 141, 22));
        ohc_connect = new QPushButton(page_ohc);
        ohc_connect->setObjectName(QStringLiteral("ohc_connect"));
        ohc_connect->setGeometry(QRect(10, 0, 291, 22));
        toolBox->addItem(page_ohc, QStringLiteral("Kilobot Controller"));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rotate_pos = new QPushButton(centralWidget);
        rotate_pos->setObjectName(QStringLiteral("rotate_pos"));
        rotate_pos->setGeometry(QRect(20, 9, 31, 27));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/rotate_left.png"), QSize(), QIcon::Normal, QIcon::On);
        rotate_pos->setIcon(icon);
        refresh = new QPushButton(centralWidget);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(60, 9, 31, 27));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/refresh.png"), QSize(), QIcon::Normal, QIcon::On);
        refresh->setIcon(icon1);
        rotate_neg = new QPushButton(centralWidget);
        rotate_neg->setObjectName(QStringLiteral("rotate_neg"));
        rotate_neg->setGeometry(QRect(100, 9, 31, 27));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/rotate_right.png"), QSize(), QIcon::Normal, QIcon::On);
        rotate_neg->setIcon(icon2);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 30, 941, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 0, 941, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(130, 7, 20, 30));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(0, 7, 20, 30));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        clicksignallabel = new clickSignalQLabel(centralWidget);
        clicksignallabel->setObjectName(QStringLiteral("clicksignallabel"));
        clicksignallabel->setGeometry(QRect(10, 40, 600, 600));
        MainWindow->setCentralWidget(centralWidget);
        toolBox->raise();
        error_label->raise();
        line_4->raise();
        result_final->raise();
        left->raise();
        straight->raise();
        right->raise();
        test->raise();
        test_id->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        rotate_pos->raise();
        refresh->raise();
        rotate_neg->raise();
        line_3->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        clicksignallabel->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 972, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(kbMin_slider, SIGNAL(valueChanged(int)), kbMin_label, SLOT(setNum(int)));
        QObject::connect(cannyThresh_slider, SIGNAL(valueChanged(int)), cannyThresh_label, SLOT(setNum(int)));
        QObject::connect(houghAcc_slider, SIGNAL(valueChanged(int)), houghAcc_label, SLOT(setNum(int)));
        QObject::connect(find_details, SIGNAL(toggled(bool)), find_details_frame, SLOT(setVisible(bool)));
        QObject::connect(arena_height_x_slider, SIGNAL(valueChanged(int)), arena_height_y_label, SLOT(setNum(int)));
        QObject::connect(kbMax_slider, SIGNAL(valueChanged(int)), kbMax_label, SLOT(setNum(int)));
        QObject::connect(arena_height_y_slider, SIGNAL(valueChanged(int)), arena_height_x_label_2, SLOT(setNum(int)));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Kilobot Smart Arena", 0));
        error_label->setText(QString());
        result_final->setText(QString());
        left->setText(QApplication::translate("MainWindow", "l", 0));
        straight->setText(QApplication::translate("MainWindow", "s", 0));
        right->setText(QApplication::translate("MainWindow", "r", 0));
        test->setText(QApplication::translate("MainWindow", "PushButton", 0));
        load_calib->setText(QApplication::translate("MainWindow", "Load calibration", 0));
        src_group->setTitle(QApplication::translate("MainWindow", "Source", 0));
        vid_radio->setText(QApplication::translate("MainWindow", "Video", 0));
        cam_radio->setText(QApplication::translate("MainWindow", "Camera  ", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "0,1,2,3", 0));
        label->setText(QApplication::translate("MainWindow", "Source order:", 0));
        vid_path->setText(QApplication::translate("MainWindow", "<select video source>", 0));
        sel_video->setText(QApplication::translate("MainWindow", "Select", 0));
        toolBox->setItemText(toolBox->indexOf(page_src), QApplication::translate("MainWindow", "Source", 0));
        label_6->setText(QApplication::translate("MainWindow", "Max sz:", 0));
        kbMax_label->setText(QApplication::translate("MainWindow", "26", 0));
        label_3->setText(QApplication::translate("MainWindow", "Edge det:", 0));
        cannyThresh_label->setText(QApplication::translate("MainWindow", "50", 0));
        houghAcc_label->setText(QApplication::translate("MainWindow", "19", 0));
        label_5->setText(QApplication::translate("MainWindow", "Min sz:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Circle detection parameters:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Circ det:", 0));
        kbMin_label->setText(QApplication::translate("MainWindow", "14", 0));
        label_7->setText(QApplication::translate("MainWindow", "Height adj x:", 0));
        arena_height_y_label->setText(QApplication::translate("MainWindow", "10", 0));
        label_13->setText(QApplication::translate("MainWindow", "Height adj y:", 0));
        arena_height_x_label_2->setText(QApplication::translate("MainWindow", "10", 0));
        ManualIDenable->setText(QApplication::translate("MainWindow", "Set ID manually:", 0));
        runtime_ids_ckbx->setText(QApplication::translate("MainWindow", "Enable runtime identification", 0));
        label_9->setText(QApplication::translate("MainWindow", "Color detection:", 0));
        red_checkBox->setText(QApplication::translate("MainWindow", "R", 0));
        green_checkBox->setText(QApplication::translate("MainWindow", "G", 0));
        blue_checkBox->setText(QApplication::translate("MainWindow", "B", 0));
        find_kb->setText(QApplication::translate("MainWindow", "Find Kilobots", 0));
        identify->setText(QApplication::translate("MainWindow", "Start Identify Kilobots", 0));
        label_8->setText(QApplication::translate("MainWindow", "Max ID to try:", 0));
        maxIDtoTry_input->setText(QApplication::translate("MainWindow", "100", 0));
        binary_radio->setText(QApplication::translate("MainWindow", "Binary", 0));
        basethree_radio->setText(QApplication::translate("MainWindow", "Base three", 0));
        assignIDs->setText(QApplication::translate("MainWindow", "Start IDs Assignment", 0));
        calibrate->setText(QApplication::translate("MainWindow", "Start Motors Calibration", 0));
        show_ids->setText(QApplication::translate("MainWindow", "show IDs", 0));
        find_details->setText(QApplication::translate("MainWindow", "details", 0));
        toolBox->setItemText(toolBox->indexOf(page_setup), QApplication::translate("MainWindow", "Setup", 0));
        load_expt->setText(QApplication::translate("MainWindow", "Load experiment", 0));
        expt_msg->setText(QApplication::translate("MainWindow", "<no expt loaded>", 0));
        run->setText(QApplication::translate("MainWindow", "Run", 0));
        expt_msg_2->setText(QApplication::translate("MainWindow", "Configure experiment:", 0));
        toolBox->setItemText(toolBox->indexOf(page_expt), QApplication::translate("MainWindow", "Experiment", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Command", 0));
        ohc_run->setText(QApplication::translate("MainWindow", "Run", 0));
        ohc_reset->setText(QApplication::translate("MainWindow", "Reset", 0));
        ohc_sleep->setText(QApplication::translate("MainWindow", "Sleep", 0));
        ohc_volt->setText(QApplication::translate("MainWindow", "Voltage", 0));
        ohc_stop->setText(QApplication::translate("MainWindow", "None", 0));
        ohc_set_prog->setText(QApplication::translate("MainWindow", "[select file]", 0));
        ohc_upload_prog->setText(QApplication::translate("MainWindow", "Upload", 0));
        ohc_connect->setText(QApplication::translate("MainWindow", "Connect OHC", 0));
        toolBox->setItemText(toolBox->indexOf(page_ohc), QApplication::translate("MainWindow", "Kilobot Controller", 0));
        rotate_pos->setText(QString());
        refresh->setText(QString());
        rotate_neg->setText(QString());
        clicksignallabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
