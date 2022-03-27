#include "usb.h"
#include <QSerialPortInfo>

USB::USB()
{
    /* This is a listener for incomming data */
    connect(&qSerialPort, &QSerialPort::readyRead, this, &USB::slotReadUSBData);
}

void USB::close(){
    qSerialPort.close();
}

QStringList USB::availablePorts(){
    QStringList ports;
    foreach(QSerialPortInfo serial_port_info, QSerialPortInfo::availablePorts())
        ports.append(serial_port_info.portName());
    return ports;
}

bool USB::open(QString portName, QSerialPort::BaudRate baudrate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QSerialPort::FlowControl flowControl){
    /* Set USB connection settings */
    qSerialPort.setPortName(portName);
    qSerialPort.setBaudRate(baudrate);
    qSerialPort.setDataBits(dataBits);
    qSerialPort.setParity(parity);
    qSerialPort.setStopBits(stopBits);
    qSerialPort.setFlowControl(flowControl);
    return qSerialPort.open(QIODevice::ReadWrite);
}

bool USB::isOpen(){
    return qSerialPort.isOpen();
}

int USB::slotTransmitUSBData(QByteArray usbDataRaw){
    if(!isOpen())
        return -1;
    return qSerialPort.write(usbDataRaw);
}

void USB::slotReadUSBData(){
    /* This function will be automatically called */
    QByteArray usbDataRaw = qSerialPort.readAll();
    uint32_t length = usbDataRaw.length();
    uint8_t *data = (uint8_t*)usbDataRaw.data();
    emit signalReadUSBData(data, length);
}
