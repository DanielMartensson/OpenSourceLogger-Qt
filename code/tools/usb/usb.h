#ifndef USB_H
#define USB_H

#include <QStringList>
#include <QSerialPort>

class USB : public QObject
{
    Q_OBJECT
public:
    USB();
    QStringList availablePorts();
    void close();
    bool open(QString portName, QSerialPort::BaudRate baudrate, QSerialPort::DataBits dataBits, QSerialPort::Parity parity, QSerialPort::StopBits stopBits, QSerialPort::FlowControl flowControl);
    bool isOpen();
signals:
    void signalReadUSBData(uint8_t data[], uint32_t length);
public slots:
    int slotTransmitUSBData(QByteArray usbDataRaw);

private:
    /* Other objects */
    QSerialPort qSerialPort;

private slots:
    void slotReadUSBData();
};

#endif // USB_H
