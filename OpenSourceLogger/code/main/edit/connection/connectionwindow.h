#ifndef CONNECTIONWINDOW_H
#define CONNECTIONWINDOW_H

#include <QWidget>
#include "code/tools/threads/messageservicethread/messageservicethread.h"
#include "../../../tools/database/database.h"
#include "../../../tools/usb/usb.h"
#include "../../../tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"

namespace Ui {
class ConnectionWindow;
}

class ConnectionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectionWindow(QWidget *parent = nullptr, Database *database = nullptr, USB *usb = nullptr, J1939 *j1939 = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~ConnectionWindow();

private slots:
    void on_usbConnectPushButton_clicked();

    void on_usbDisconnectPushButton_clicked();

    void on_databaseConnectPushButton_clicked();

    void on_databaseDisconnectPushButton_clicked();

private:
    Ui::ConnectionWindow *ui;

    /* Other objects */
    Database *database;
    USB *usb;
    J1939 *j1939;
    MessageServiceThread *messageServiceThread;


    /* Internal functions */
    void showEvent(QShowEvent *event);
    void saveAllToJSON();
    void enableDatabaseConnectionComponents(bool enable);
    void enableUSBConnectionComponents(bool enable);

signals:
    void signalSetThreadActive(bool active);

};

#endif // CONNECTIONWINDOW_H
