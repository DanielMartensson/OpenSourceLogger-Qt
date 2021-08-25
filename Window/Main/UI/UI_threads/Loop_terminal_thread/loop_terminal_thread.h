#ifndef LOOP_TERMINAL_THREAD_H
#define LOOP_TERMINAL_THREAD_H

#include <QThread>
#include <QObject>

#include "Window/Main/UI/UI_tools/Communication/J1939/Open_SAE_J1939/Structs.h"

class Loop_terminal_thread : public QThread {
    Q_OBJECT
public:
    Loop_terminal_thread(QObject *parent = nullptr, J1939* j1939 = nullptr);
signals:
    void send_ID_and_data_to_looping_terminal(uint32_t ID, uint8_t data[]);
private:
    J1939* j1939;
    bool* start_loop_terminal_thread;
    void run();
};

#endif // LOOP_TERMINAL_THREAD_H
