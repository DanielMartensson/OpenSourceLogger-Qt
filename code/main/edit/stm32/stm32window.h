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

signals:
    int signalSetAnalogInputGainToSTM32PLC(uint8_t sdadc, uint8_t configurationIndex, uint8_t gain);
    int signalSetPWMPrescalerToSTM32PLC(uint8_t pwmPeripheral, uint16_t prescaler);
    int signalAskPWMPrescalersFromSTM32PLC();
    int signalAskAnalogInputGainsFromSTM32(uint8_t sdadc);

private:
    Ui::STM32Window *ui;

    /* Thread service */
    MessageServiceThread *messageServiceThread;

    /* Function */
    QString translateBinaryGainToTextGain(uint8_t binaryGain);
};

#endif // STM32WINDOW_H
