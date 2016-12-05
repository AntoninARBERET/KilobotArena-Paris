#ifndef KILOBOTEXPERIMENT_H
#define KILOBOTEXPERIMENT_H

#include <QObject>
#include <QDebug>
#include <QLayout>
#include <kilobotenvironment.h>
#include <kilobot.h>

class KilobotExperiment : public QObject
{
    Q_OBJECT
public:
    KilobotExperiment() {}
    virtual ~KilobotExperiment()
    {
    }

    int serviceInterval = 100; // ms
    QVector <KilobotEnvironment *> environments;

    virtual QWidget * createGUI() {return NULL;}

signals:
    void updateKilobotStates();
    void getInitialKilobotStates();
    void experimentComplete();
    void saveImage(QString);
    void signalKilobot(kilobot_message);
    void broadcastMessage(kilobot_broadcast);
    void setTrackingType(int);

    // drawing
   // void drawCircle(QPointF pos, float r, QColor col);

public slots:
    virtual void initialise(bool) = 0;
    virtual void run() {}


    /*!
     * \brief updateStateRequiredCode
     * \param kilobot
     * \param kilobotCopy
     *
     * Slot that makes sure that some code is run BEFORE the derived function
     */
    void updateStateRequiredCode(Kilobot* kilobot, Kilobot kilobotCopy)
    {
        //qDebug() << "pre set state 2";
        // store pointer for connecting
        this->currKilobot = kilobot;
        updateKilobotState(kilobotCopy);
    }

    /*!
     * \brief setupInitialStateRequiredCode
     * \param kilobot
     * \param kilobotCopy
     *
     * Slot that makes sure that some code is run BEFORE the derived function
     */
    void setupInitialStateRequiredCode(Kilobot* kilobot, Kilobot kilobotCopy)
    {
        //qDebug() << "pre set state";
        // store pointer for connecting
        this->currKilobot = kilobot;
        // switch the signal from setup to standard
        kilobot->disconnect(SIGNAL(sendUpdateToExperiment(Kilobot*,Kilobot)));
        connect(kilobot,SIGNAL(sendUpdateToExperiment(Kilobot*,Kilobot)), this, SLOT(updateStateRequiredCode(Kilobot*,Kilobot)));
        setupInitialKilobotState(kilobotCopy);
    }

    void signalKilobotExpt(kilobot_message msg)
    {
        emit signalKilobot(msg);
    }

protected:
    double time;


    void setCurrentKilobotEnvironment(KilobotEnvironment * environment) {
        if (currKilobot != NULL && environment != NULL) {
            QObject::disconnect(currKilobot,SIGNAL(sendUpdateToHardware(Kilobot)), 0, 0);
            QObject::connect(currKilobot,SIGNAL(sendUpdateToHardware(Kilobot)), environment, SLOT(updateVirtualSensor(Kilobot)));
        }
    }

    virtual void updateKilobotState(Kilobot kilobotCopy) {} // provided in derived class to implement experiment logic for Kilobot state updates
    virtual void setupInitialKilobotState(Kilobot kilobotCopy) {}

private:
    Kilobot * currKilobot = NULL;


};



#endif // KILOBOTEXPERIMENT_H