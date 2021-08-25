#include "usb_handling.h"

/* Private includes */
#include "../../J1939/Hardware/CAN_Network/CAN_to_USB/can_to_usb.h"


USB_handling::USB_handling(J1939* j1939) {

    /* Create serial port */
    serial_port = new QSerialPort();
    serial_port_info = new QSerialPortInfo();

    /* Save serial port pointer to CAN source file */
    QT_USB_set_serial_handler(serial_port);

    /* Start the USB thread and store the pointer */
    usb_message_available_thread = new USB_message_available_thread(serial_port, j1939, &length_of_usb_message, &start_USB_message_available_thread);
    usb_message_available_thread->start();
}

QStringList USB_handling::get_port_names(){
    QStringList port_names;
    QList<QSerialPortInfo> port_info = serial_port_info->availablePorts();
    for (int i = 0; i < port_info.length(); i++)
        if (port_info.at(i).isBusy() == false)
            port_names.append(port_info.at(i).portName());
    return port_names;
}

bool USB_handling::connect_to_usb(const QString& port_name, const qint32 baudrate, QSerialPort::DataBits data_bits, QSerialPort::Parity parity, QSerialPort::StopBits stop_bits, QSerialPort::FlowControl flow_control){
    this->serial_port->setPortName(port_name);
    this->serial_port->setBaudRate(baudrate);
    this->serial_port->setDataBits(data_bits);
    this->serial_port->setParity(parity);
    this->serial_port->setStopBits(stop_bits);
    this->serial_port->setFlowControl(flow_control);
    if(this->serial_port->open(QIODevice::ReadWrite)){
        length_of_usb_message = 0;
        start_USB_message_available_thread = true;
        return true;
    }else{
        return false;
    }
}

void USB_handling::disconnect_from_usb(){
    this->start_USB_message_available_thread = false;
    this->serial_port->close();
}
