#ifndef STM32WINDOW_H
#define STM32WINDOW_H

#include <QWidget>
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class STM32Window;
}

class STM32Window : public QWidget
{
    Q_OBJECT

public:
    explicit STM32Window(QWidget *parent = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~STM32Window();

private slots:
    void on_sendPrescalerPushButton_clicked();

    void on_receivePrescalersPushButton_clicked();

    void on_sendInputGainPushButton_clicked();

    void on_receiveInputGainsPushButton_clicked();

    void slotSendAnalogGains(uint8_t analogGain[]);

    void slotSendPWMPrescalers(uint16_t pwmPrescaler[]);

    void slotSendDateTime(uint8_t year, uint8_t month, uint8_t date, uint8_t weekDay, uint8_t hour, uint8_t minute);

    void slotSendAlarmA(uint8_t date, uint8_t hour, uint8_t minute, uint8_t enabled, uint8_t activated);

    void slotSendAlarmB(uint8_t weekDay, uint8_t hour, uint8_t minute, uint8_t enabled, uint8_t activated);

    void on_receiveDateTimePushButton_clicked();

    void on_sendDateTimePushButton_clicked();

    void on_receiveAlarmAPushButton_clicked();

    void on_sendAlarmAPushButton_clicked();

    void on_receiveAlarmBPushButton_clicked();

    void on_sendAlarmBPushButton_clicked();

signals:
    int signalSetAnalogInputGainToSTM32PLC(uint8_t sdadc, uint8_t configurationIndex, uint8_t gain);
    int signalSetPWMPrescalerToSTM32PLC(uint8_t pwmPeripheral, uint16_t prescaler);
    int signalAskPWMPrescalersFromSTM32PLC();
    int signalAskDateTimeFromSTM32PLC();
    int signalAskAlarmAFromSTM32PLC();
    int signalAskAlarmBFromSTM32PLC();
    int signalAskAnalogInputGainsFromSTM32(uint8_t sdadc);
    int signalSetDateTimeToSTM32PLC(uint8_t year, uint8_t month, uint8_t date, uint8_t weekDay, uint8_t hour, uint8_t minute);
    int signalSetAlarmAToSTM32PLC(uint8_t date, uint8_t hour, uint8_t minute, uint8_t enable);
    int signalSetAlarmBToSTM32PLC(uint8_t weekDay, uint8_t hour, uint8_t minute, uint8_t enable);

private:
    Ui::STM32Window *ui;

    /* Thread service */
    MessageServiceThread *messageServiceThread;

    /* Function */
    QString translateBinaryGainToTextGain(uint8_t binaryGain);
};

#endif // STM32WINDOW_H
