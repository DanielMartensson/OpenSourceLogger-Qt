#include "componentidentificationwindow.h"
#include "ui_componentidentificationwindow.h"

ComponentIdentificationWindow::ComponentIdentificationWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::ComponentIdentificationWindow),
    j1939(j1939)
{
    ui->setupUi(this);

    /* Send signals from this window to message service thread */
    connect(this, &ComponentIdentificationWindow::signalSendCanBusMessageToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSendCanBusMessageToSTM32PLC);
}

ComponentIdentificationWindow::~ComponentIdentificationWindow()
{
    delete ui;
}

void ComponentIdentificationWindow::on_sendRequestPushButton_clicked()
{
    /* Get the destination address */
    uint8_t DA = ui->destinationEcuAddressSpinBox->value();

    /* Send the request */
    SAE_J1939_Send_Request_Component_Identification(j1939, DA);

    /* Send event signal for transmitting the message via USB to STM32 PLC */
    emit signalSendCanBusMessageToSTM32PLC();
}


void ComponentIdentificationWindow::on_readResponsePushButton_clicked()
{
    ui->modelNameLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.component_identification.component_model_name));
    ui->productDateLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.component_identification.component_product_date));
    ui->serialNumberLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.component_identification.component_serial_number));
    ui->unitNameLineEdit->setText(QString((char*)j1939->from_other_ecu_identifications.component_identification.component_unit_name));
    ui->fromEcuAddressSpinBox->setValue(j1939->from_other_ecu_identifications.software_identification.from_ecu_address);
}

