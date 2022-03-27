#ifndef AUXILIARYVALVECOMMANDWINDOW_H
#define AUXILIARYVALVECOMMANDWINDOW_H

#include <QWidget>

/* Tools */
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/Application_Layer.h"

/* Threads */
#include "code/tools/threads/messageservicethread/messageservicethread.h"
#include "code/tools/threads/callperiodthread/callperiodthread.h"


namespace Ui {
class AuxiliaryValveCommandWindow;
}

class AuxiliaryValveCommandWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AuxiliaryValveCommandWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr, CallPeriodThread *callPeriodThread = nullptr);
    ~AuxiliaryValveCommandWindow();

signals:
    void signalSetAuxiliaryValveCommandStandardFlow(uint8_t auxiliaryValveCommandStandardFlow[]);
    void signalSendCanBusMessageToSTM32PLC();
    void signalSetCallPeriodThreadActive(bool active, int periodTime);

private slots:
    void slotSendValveCommandInSlowPeriods();

    void on_valve0VerticalSlider_valueChanged(int value);

    void on_valve1VerticalSlider_valueChanged(int value);

    void on_valve2VerticalSlider_valueChanged(int value);

    void on_valve3VerticalSlider_valueChanged(int value);

    void on_valve4VerticalSlider_valueChanged(int value);

    void on_valve5VerticalSlider_valueChanged(int value);

    void on_valve6VerticalSlider_valueChanged(int value);

    void on_valve7VerticalSlider_valueChanged(int value);

    void on_valve8VerticalSlider_valueChanged(int value);

    void on_valve9VerticalSlider_valueChanged(int value);

    void on_valve10VerticalSlider_valueChanged(int value);

    void on_valve11VerticalSlider_valueChanged(int value);

    void on_valve12VerticalSlider_valueChanged(int value);

    void on_valve13VerticalSlider_valueChanged(int value);

    void on_valve14VerticalSlider_valueChanged(int value);

    void on_valve15VerticalSlider_valueChanged(int value);

private:
    Ui::AuxiliaryValveCommandWindow *ui;

    /* Other structs */
    J1939 *j1939;

    /* Calling period thread */
    CallPeriodThread *callPeriodThread;

    /* Other functions */
    void shapeAuxiliaryValveCommandStandardFlowMessage(int value, int valveNumber);
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);

    /* Other fiedls */
    int index = 0;
    uint8_t auxiliaryValveCommandStandardFlow[MAX_AUXILIARY_VALVE_COMMAND_STANDARD_FLOW] = {0};

};

#endif // AUXILIARYVALVECOMMANDWINDOW_H
