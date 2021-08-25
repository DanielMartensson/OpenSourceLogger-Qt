#ifndef USB_HANDLING_H
#define USB_HANDLING_H

#include <QSerialPort>
#include <QSerialPortInfo>
#include "../../USB/Check_if_usb_message_available/usb_message_available_thread.h"
#include "../../J1939/Open_SAE_J1939/Structs.h"

class USB_handling {
public:
    USB_handling(J1939* j1939);
    QStringList get_port_names();
    bool connect_to_usb(const QString& port_name, const qint32 baudrate, QSerialPort::DataBits data_bits, QSerialPort::Parity parity, QSerialPort::StopBits stop_bits, QSerialPort::FlowControl flow_control);
    void disconnect_from_usb();
    uint8_t length_of_usb_message;
    bool start_USB_message_available_thread;

private:
    /* USB */
    QSerialPortInfo* serial_port_info;
    QSerialPort* serial_port;
    USB_message_available_thread* usb_message_available_thread;
};

#endif // USB_HANDLING_H
