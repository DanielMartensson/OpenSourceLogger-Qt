#ifndef USB_MESSAGE_AVAILABLE_THREAD_H
#define USB_MESSAGE_AVAILABLE_THREAD_H

#include <QThread>
#include <QSerialPort>

#include "Window/Main/UI/UI_tools/Communication/J1939/Open_SAE_J1939/Open_SAE_J1939.h"


class USB_message_available_thread : public QThread {
public:
    USB_message_available_thread(QSerialPort* serial_port, J1939* j1939, uint8_t* length_of_usb_message, bool* start_usb_check_thread);
private:
    QSerialPort* serial_port;
    J1939* j1939;
    uint8_t* length_of_usb_message;
    bool* start_USB_message_available_thread;
    void run();
};

#endif // USB_MESSAGE_AVAILABLE_THREAD_H
