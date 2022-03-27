#ifndef COMPONENTIDENTIFICATIONWINDOW_H
#define COMPONENTIDENTIFICATIONWINDOW_H

#include <QWidget>
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class ComponentIdentificationWindow;
}

class ComponentIdentificationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ComponentIdentificationWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~ComponentIdentificationWindow();

signals:
    void signalSendCanBusMessageToSTM32PLC();

private slots:
    void on_sendRequestPushButton_clicked();

    void on_readResponsePushButton_clicked();

private:
    Ui::ComponentIdentificationWindow *ui;

    /* Other structs */
    J1939 *j1939;

};

#endif // COMPONENTIDENTIFICATIONWINDOW_H
