#include "loop_terminal_thread.h"

Loop_terminal_thread::Loop_terminal_thread(QObject *parent, J1939* j1939) : QThread(parent), j1939(j1939)  {

}

void Loop_terminal_thread::run(){
    while(1){
        if(j1939->ID_and_data_is_updated){
            emit send_ID_and_data_to_looping_terminal(j1939->ID, j1939->data);
            j1939->ID_and_data_is_updated = false;
        }
        msleep(1);
    }
}
