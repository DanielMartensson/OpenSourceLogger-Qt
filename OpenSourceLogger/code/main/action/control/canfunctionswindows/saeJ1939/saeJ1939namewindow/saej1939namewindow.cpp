#include "saej1939namewindow.h"
#include "ui_saej1939namewindow.h"
#include <QMessageBox>

SaeJ1939NameWindow::SaeJ1939NameWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::SaeJ1939NameWindow),
    j1939(j1939)
{
    ui->setupUi(this);

    /* Send signals from this window to message service thread */
    connect(this, &SaeJ1939NameWindow::signalSendCanBusMessageToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSendCanBusMessageToSTM32PLC);
}

SaeJ1939NameWindow::~SaeJ1939NameWindow()
{
    delete ui;
}

void SaeJ1939NameWindow::on_sendRequestPushButton_clicked()
{
    /* Get the destination address */
    uint8_t DA = ui->destinationEcuAddressSpinBox->value();

    /* Send the request */
    SAE_J1939_Send_Request_Address_Claimed(j1939, DA);

    /* Send event signal for transmitting the message via USB to STM32 PLC */
    emit signalSendCanBusMessageToSTM32PLC();
}


void SaeJ1939NameWindow::on_readResponsePushButton_clicked()
{
    /* Set the NAME fields and also some more addresses fields */
    ui->identityNumberSpinBox->setValue(j1939->from_other_ecu_name.identity_number);
    ui->manufacturerCodeSpinBox->setValue(j1939->from_other_ecu_name.manufacturer_code);
    ui->functionSpinBox->setValue(j1939->from_other_ecu_name.function);
    ui->functionInstanceSpinBox->setValue(j1939->from_other_ecu_name.function_instance);
    ui->vehicleSystemSpinBox->setValue(j1939->from_other_ecu_name.vehicle_system);
    ui->vehicleSystemInstanceSpinBox->setValue(j1939->from_other_ecu_name.vehicle_system_instance);
    ui->industryGroupSpinBox->setValue(j1939->from_other_ecu_name.industry_group);
    ui->ecuInstanceSpinBox->setValue(j1939->from_other_ecu_name.ECU_instance);
    ui->arbitraryAddressCapableSpinBox->setValue(j1939->from_other_ecu_name.arbitrary_address_capable);
    ui->fromEcuAddressSpinBox->setValue(j1939->from_other_ecu_name.from_ecu_address);
    ui->claimedAddressesComboBox->clear();
    for(int i = 0; i < j1939->number_of_other_ECU; i++)
        ui->claimedAddressesComboBox->addItem(QString::number(j1939->other_ECU_address[i]));
    ui->numberOfNotClaimedAddressSpinBox->setValue(j1939->number_of_cannot_claim_address);
}

void SaeJ1939NameWindow::on_sendChangePushButton_clicked()
{

    uint8_t DA = ui->destinationEcuAddressSpinBox->value();
    uint8_t new_ECU_address = ui->newDestinationEcuAddressSpinBox->value();
    uint32_t identity_number = ui->identityNumberSpinBox->value();
    uint16_t manufacturer_code = ui->manufacturerCodeSpinBox->value();
    uint8_t function_instance = ui->functionInstanceSpinBox->value();
    uint8_t ECU_instance = ui->ecuInstanceSpinBox->value();
    uint8_t function = ui->functionSpinBox->value();
    uint8_t vehicle_system = ui->vehicleSystemSpinBox->value();
    uint8_t arbitrary_address_capable = ui->arbitraryAddressCapableSpinBox->value();
    uint8_t industry_group = ui->industryGroupSpinBox->value();
    uint8_t vehicle_system_instance = ui->vehicleSystemInstanceSpinBox->value();
    int res = QMessageBox::question(this, "Commanded address", "Do you want to change the NAME of ECU address " + QString::number(DA) + " to address " + QString::number(new_ECU_address) + " and the other fields too?");
    if(res == QMessageBox::No)
        return;
    SAE_J1939_Send_Commanded_Address(j1939, DA, new_ECU_address, identity_number, manufacturer_code, function_instance, ECU_instance, function, vehicle_system, arbitrary_address_capable, industry_group, vehicle_system_instance);
}
