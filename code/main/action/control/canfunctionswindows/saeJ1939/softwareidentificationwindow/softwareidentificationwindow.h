#ifndef SOFTWAREIDENTIFICATIONWINDOW_H
#define SOFTWAREIDENTIFICATIONWINDOW_H

#include <QWidget>
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class SoftwareIdentificationWindow;
}

class SoftwareIdentificationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SoftwareIdentificationWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~SoftwareIdentificationWindow();

signals:
    void signalSendCanBusMessageToSTM32PLC();

private slots:
    void on_sendRequestPushButton_clicked();

    void on_readResponsePushButton_clicked();

private:
    Ui::SoftwareIdentificationWindow *ui;

    /* Other structs */
    J1939 *j1939;
};

#endif // SOFTWAREIDENTIFICATIONWINDOW_H
