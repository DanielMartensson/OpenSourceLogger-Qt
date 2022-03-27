#ifndef GENERALVALVECOMMANDWINDOW_H
#define GENERALVALVECOMMANDWINDOW_H

#include <QWidget>

/* Tools */
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/Application_Layer.h"

/* Threads */
#include "code/tools/threads/messageservicethread/messageservicethread.h"
#include "code/tools/threads/callperiodthread/callperiodthread.h"

namespace Ui {
class GeneralValveCommandWindow;
}

class GeneralValveCommandWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GeneralValveCommandWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr, CallPeriodThread *callPeriodThread = nullptr);
    ~GeneralValveCommandWindow();

signals:
    void signalSetGeneralValveCommandExtendedFlow(uint16_t generalValveCommandExtendedFlow[]);
    void signalSendCanBusMessageToSTM32PLC();
    void signalSetCallPeriodThreadActive(bool active, int periodTime);

private slots:
    void slotSendValveCommandInSlowPeriods();
    void on_extendedFlowDial_valueChanged(int value);

private:
    Ui::GeneralValveCommandWindow *ui;

    /* Other structs */
    J1939 *j1939;

    /* Other objects */
    CallPeriodThread *callPeriodThread;

    /* Internal functions */
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);
    void shapeGeneralValueCommandExtendedFlowMessage(int value);
};

#endif // GENERALVALVECOMMANDWINDOW_H
