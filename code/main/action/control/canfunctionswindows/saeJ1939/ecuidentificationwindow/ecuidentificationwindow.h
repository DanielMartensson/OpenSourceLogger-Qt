#ifndef ECUIDENTIFICATIONWINDOW_H
#define ECUIDENTIFICATIONWINDOW_H

#include <QWidget>
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class ECUidentificationWindow;
}

class ECUidentificationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ECUidentificationWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~ECUidentificationWindow();

signals:
    void signalSendCanBusMessageToSTM32PLC();

private slots:
    void on_sendRequestPushButton_clicked();

    void on_readResponsePushButton_clicked();

private:
    Ui::ECUidentificationWindow *ui;

    /* Other structs */
    J1939 *j1939;

};

#endif // ECUIDENTIFICATIONWINDOW_H
