#ifndef CANSETTINGSWINDOW_H
#define CANSETTINGSWINDOW_H

#include <QWidget>
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"

namespace Ui {
class CANsettingsWindow;
}

class CANsettingsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CANsettingsWindow(QWidget *parent = nullptr, J1939 *j1939 = nullptr);
    ~CANsettingsWindow();

private:
    Ui::CANsettingsWindow *ui;

    /* Other functions */
    void closeEvent(QCloseEvent *event);
    void showEvent(QShowEvent *event);

    /* Other structs */
    J1939 *j1939;

signals:
    void signalSendCanBusMessageToSTM32PLC();
};

#endif // CANSETTINGSWINDOW_H
