#include "softwareidentificationwindow.h"
#include "ui_softwareidentificationwindow.h"

SoftwareIdentificationWindow::SoftwareIdentificationWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::SoftwareIdentificationWindow),
    j1939(j1939)
{
    ui->setupUi(this);

    /* Send signals from this window to message service thread */
    connect(this, &SoftwareIdentificationWindow::signalSendCanBusMessageToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSendCanBusMessageToSTM32PLC);
}

SoftwareIdentificationWindow::~SoftwareIdentificationWindow()
{
    delete ui;
}

void SoftwareIdentificationWindow::on_sendRequestPushButton_clicked()
{
    /* Get the destination address */
    uint8_t DA = ui->destinationEcuAddressSpinBox->value();

    /* Send the request */
    SAE_J1939_Send_Request_Software_Identification(j1939, DA);

    /* Send event signal for transmitting the message via USB to STM32 PLC */
    emit signalSendCanBusMessageToSTM32PLC();
}


void SoftwareIdentificationWindow::on_readResponsePushButton_clicked()
{
    ui->identificationLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.software_identification.identifications));
    ui->fromEcuAddressSpinBox->setValue(j1939->from_other_ecu_identifications.software_identification.from_ecu_address);
}

