#ifndef CONTROLWINDOW_H
#define CONTROLWINDOW_H

#include <QWidget>

/* Threads */
#include "code/tools/threads/messageservicethread/messageservicethread.h"
#include "code/tools/threads/loggingthread/loggingthread.h"
#include "code/tools/threads/callperiodthread/callperiodthread.h"

/* SAE J1939 */
#include "canfunctionswindows/saeJ1939/componentidentificationwindow/componentidentificationwindow.h"
#include "canfunctionswindows/saeJ1939/ecuidentificationwindow/ecuidentificationwindow.h"
#include "canfunctionswindows/saeJ1939/softwareidentificationwindow/softwareidentificationwindow.h"
#include "canfunctionswindows/saeJ1939/saeJ1939namewindow/saej1939namewindow.h"
#include "canfunctionswindows/saeJ1939/auxiliaryvalvecommandwindow/auxiliaryvalvecommandwindow.h"
#include "canfunctionswindows/saeJ1939/generalvalvecommandwindow/generalvalvecommandwindow.h"
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#define SAE_J1939_FUNCTION "SAE J1939"
#define SAE_J1939_COMPONENT_IDENTIFICATION "Component identification"
#define SAE_J1939_SOFTWARE_IDENTIFICATION "Software identification"
#define SAE_J1939_ECU_IDENTIFICATION "ECU identification"
#define SAE_J1939_NAME "SAE J1939 NAME"
#define SAE_J1939_AUXILIARY_VALVE_COMMAND "Auxiliary valve command"
#define SAE_J1939_GERNAL_VALVE_COMMAND "General valve command"

/* SAE J1939 */
#define CAN_FUNCTION "CAN"
#define CAN_TERMINAL "CAN terminal"
#include "canfunctionswindows/can/canterminalwindow/canterminalwindow.h"

/* CANopen */
#define CANOPEN_FUNCTION "CANopen"

namespace Ui {
class ControlWindow;
}

class ControlWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ControlWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr, LoggingThread *loggingThread = nullptr, CallPeriodThread *callPeriodThread = nullptr);
    ~ControlWindow();

signals:
    void signalSetThreadActive(bool active, int sampleTime, int showSamples);
    void signalSetAutoScaleAndYAxisLimits(bool autoScale, float minYAxis, float maxYAxis);
    void signalSetPWMSignal(int index, int value);
    void signalSetAnalogSingleOutputSignal(int index, int value);

private slots:
    void on_stopLoggingDataPushButton_clicked();

    void on_startLoggingDataPushButton_clicked();

    void on_functionComboBox_currentTextChanged(const QString &arg1);

    void on_pwm0VerticalSlider_valueChanged(int value);

    void on_pwm1VerticalSlider_valueChanged(int value);

    void on_pwm2VerticalSlider_valueChanged(int value);

    void on_pwm3VerticalSlider_valueChanged(int value);

    void on_pwm4VerticalSlider_valueChanged(int value);

    void on_pwm5VerticalSlider_valueChanged(int value);

    void on_pwm6VerticalSlider_valueChanged(int value);

    void on_pwm7VerticalSlider_valueChanged(int value);

    void on_analogOutput0VerticalSlider_valueChanged(int value);

    void on_analogOutput1VerticalSlider_valueChanged(int value);

    void on_analogOutput2VerticalSlider_valueChanged(int value);

    void on_canProtocolComboBox_currentTextChanged(const QString &arg1);

    void on_autoYAxisScaleCheckBox_stateChanged(int arg1);

private:
    /* UI */
    Ui::ControlWindow *ui;

    /* Constructor fields */
    MessageServiceThread *messageServiceThread;
    LoggingThread *loggingThread;

    /* SAE J1939 windows */
    ComponentIdentificationWindow *componentIdentificationWindow;
    ECUidentificationWindow *eCUidentificationWindow;
    SoftwareIdentificationWindow *softwareIdentificationWindow;
    SaeJ1939NameWindow *saeJ1939NameWindow;
    AuxiliaryValveCommandWindow *auxiliaryValveCommandWindow;
    GeneralValveCommandWindow *generalValveCommandWindow;

    /* General CAN windows */
    CANTerminalWindow *canTerminalWindow;

    /* CAN combo box functions */
    void setSAEJ1939FunctionNames();
    void setCANFunctionNames();

    /* Internal functions */
    void resizeEvent(QResizeEvent *event);
};

#endif // CONTROLWINDOW_H
