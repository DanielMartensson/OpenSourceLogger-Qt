#include "ecuidentificationwindow.h"
#include "ui_ecuidentificationwindow.h"

ECUidentificationWindow::ECUidentificationWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::ECUidentificationWindow),
    j1939(j1939)
{
    ui->setupUi(this);

    /* Send signals from this window to message service thread */
    connect(this, &ECUidentificationWindow::signalSendCanBusMessageToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSendCanBusMessageToSTM32PLC);
}

ECUidentificationWindow::~ECUidentificationWindow()
{
    delete ui;
}

void ECUidentificationWindow::on_sendRequestPushButton_clicked()
{
    /* Get the destination address */
    uint8_t DA = ui->destinationEcuAddressSpinBox->value();

    /* Send the request */
    SAE_J1939_Send_Request_ECU_Identification(j1939, DA);

    /* Send event signal for transmitting the message via USB to STM32 PLC */
    emit signalSendCanBusMessageToSTM32PLC();
}

void ECUidentificationWindow::on_readResponsePushButton_clicked()
{
    ui->serialNumberLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.ecu_identification.ecu_serial_number));
    ui->locationLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.ecu_identification.ecu_location));
    ui->partNumberLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.ecu_identification.ecu_part_number));
    ui->typeLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.ecu_identification.ecu_type));
    ui->fromEcuAddressSpinBox->setValue(j1939->from_other_ecu_identifications.software_identification.from_ecu_address);
}

