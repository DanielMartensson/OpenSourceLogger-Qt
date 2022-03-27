#ifndef SAEJ1939NAMEWINDOW_H
#define SAEJ1939NAMEWINDOW_H

#include <QWidget>
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class SaeJ1939NameWindow;
}

class SaeJ1939NameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SaeJ1939NameWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~SaeJ1939NameWindow();

signals:
    void signalSendCanBusMessageToSTM32PLC();

private slots:
    void on_sendRequestPushButton_clicked();

    void on_readResponsePushButton_clicked();

    void on_sendChangePushButton_clicked();

private:
    Ui::SaeJ1939NameWindow *ui;

    /* Other structs */
    J1939 *j1939;
};

#endif // SAEJ1939NAMEWINDOW_H
