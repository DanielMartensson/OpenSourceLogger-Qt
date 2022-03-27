#ifndef CANTERMINALWINDOW_H
#define CANTERMINALWINDOW_H

#include <QWidget>
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class CANTerminalWindow;
}

class CANTerminalWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CANTerminalWindow(QWidget *parent = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~CANTerminalWindow();

private:
    Ui::CANTerminalWindow *ui;

private slots:
    /* Other functions */
    void slotUpdateCANTerminalWindowWithCANData(uint8_t CAN_TX[]);
};

#endif // CANTERMINALWINDOW_H
