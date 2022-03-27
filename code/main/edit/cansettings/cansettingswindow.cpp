#include "cansettingswindow.h"
#include "ui_cansettingswindow.h"
#include <QMessageBox>

CANsettingsWindow::CANsettingsWindow(QWidget *parent, J1939 *j1939) :
    QWidget(parent),
    ui(new Ui::CANsettingsWindow),
    j1939(j1939)
{
    ui->setupUi(this);

    /* Load the J1939 struct - If not, reset */
    if(!Open_SAE_J1939_Startup_ECU(j1939))
        memset(j1939, 0, sizeof(J1939));
}

CANsettingsWindow::~CANsettingsWindow()
{
    delete ui;
}

void CANsettingsWindow::showEvent(QShowEvent *event){
    Q_UNUSED(event)

    /* Set the ui components from J1939 struct */
    ui->ecuSourceAddressSpinBox->setValue(j1939->information_this_ECU.this_ECU_address);
    ui->identityNumberSpinBox->setValue(j1939->information_this_ECU.this_name.identity_number);
    ui->manufacturerCodeSpinBox->setValue(j1939->information_this_ECU.this_name.manufacturer_code);
    ui->functionInstanceSpinBox->setValue(j1939->information_this_ECU.this_name.function_instance);
    ui->ecuInstanceSpinBox->setValue(j1939->information_this_ECU.this_name.ECU_instance);
    ui->functionSpinBox->setValue(j1939->information_this_ECU.this_name.function);
    ui->vehicleSystemSpinBox->setValue(j1939->information_this_ECU.this_name.vehicle_system);
    ui->arbitraryAddressCapableSpinBox->setValue(j1939->information_this_ECU.this_name.arbitrary_address_capable);
    ui->industryGroupSpinBox->setValue(j1939->information_this_ECU.this_name.industry_group);
    ui->vehicleSystemInstanceSpinBox->setValue(j1939->information_this_ECU.this_name.vehicle_system_instance);
    ui->componentProductDateLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.component_identification.component_product_date));
    ui->componentModelNameLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.component_identification.component_model_name));
    ui->componentSerialNumberLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.component_identification.component_serial_number));
    ui->componentUnitNameLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.component_identification.component_unit_name));
    ui->ecuLocationLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.ecu_identification.ecu_location));
    ui->ecuPartNumberLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.ecu_identification.ecu_part_number));
    ui->ecuSerialNumberLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.ecu_identification.ecu_serial_number));
    ui->ecuTypeLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.ecu_identification.ecu_type));
    ui->softwareIdentificationLineEdit->setText(QString((char*)j1939->information_this_ECU.this_identifications.software_identification.identifications));

}

void CANsettingsWindow::closeEvent(QCloseEvent *event){
    Q_UNUSED(event)

    /* Set the variables for Open SAE J1939 */
    j1939->information_this_ECU.this_ECU_address = ui->ecuSourceAddressSpinBox->value();
    j1939->information_this_ECU.this_name.identity_number = ui->identityNumberSpinBox->value();
    j1939->information_this_ECU.this_name.manufacturer_code = ui->manufacturerCodeSpinBox->value();
    j1939->information_this_ECU.this_name.function_instance = ui->functionInstanceSpinBox->value();
    j1939->information_this_ECU.this_name.ECU_instance = ui->ecuInstanceSpinBox->value();
    j1939->information_this_ECU.this_name.function = ui->functionSpinBox->value();
    j1939->information_this_ECU.this_name.vehicle_system = ui->vehicleSystemSpinBox->value();
    j1939->information_this_ECU.this_name.arbitrary_address_capable = ui->arbitraryAddressCapableSpinBox->value();
    j1939->information_this_ECU.this_name.industry_group = ui->industryGroupSpinBox->value();
    j1939->information_this_ECU.this_name.vehicle_system_instance = ui->vehicleSystemInstanceSpinBox->value();

    /* Component identification */
    for(int i = 0; i < ui->componentProductDateLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.component_identification.component_product_date[i] = (uint8_t)ui->componentProductDateLineEdit->text().at(i).toLatin1();
    for(int i = 0; i < ui->componentSerialNumberLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.component_identification.component_serial_number[i] = (uint8_t)ui->componentSerialNumberLineEdit->text().at(i).toLatin1();
    for(int i = 0; i < ui->componentModelNameLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.component_identification.component_model_name[i] = (uint8_t)ui->componentModelNameLineEdit->text().at(i).toLatin1();
    for(int i = 0; i < ui->componentUnitNameLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.component_identification.component_unit_name[i] = (uint8_t)ui->componentUnitNameLineEdit->text().at(i).toLatin1();

    /* ECU identification */
    for(int i = 0; i < ui->ecuLocationLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.ecu_identification.ecu_location[i] = (uint8_t)ui->ecuLocationLineEdit->text().at(i).toLatin1();
    for(int i = 0; i < ui->ecuPartNumberLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.ecu_identification.ecu_part_number[i] = (uint8_t)ui->ecuPartNumberLineEdit->text().at(i).toLatin1();
    for(int i = 0; i < ui->ecuSerialNumberLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.ecu_identification.ecu_serial_number[i] = (uint8_t)ui->ecuSerialNumberLineEdit->text().at(i).toLatin1();
    for(int i = 0; i < ui->ecuTypeLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.ecu_identification.ecu_type[i] = (uint8_t)ui->ecuTypeLineEdit->text().at(i).toLatin1();

    /* Software identification */
    j1939->information_this_ECU.this_identifications.software_identification.number_of_fields = ui->softwareIdentificationLineEdit->text().length();
    for(int i = 0; i < ui->softwareIdentificationLineEdit->text().length(); i++)
        j1939->information_this_ECU.this_identifications.software_identification.identifications[i] = (uint8_t)ui->softwareIdentificationLineEdit->text().at(i).toLatin1();

    /* Save the J1939 struct to a binary file */
    uint32_t ECU_information_length = sizeof(Information_this_ECU);
    uint8_t ECU_information_data[ECU_information_length];
    memcpy(ECU_information_data, (uint8_t*)&j1939->information_this_ECU, ECU_information_length);
    if(!Save_Struct(ECU_information_data, ECU_information_length, (char*)INFORMATION_THIS_ECU))
        QMessageBox::warning(this, "ECU parameters", "Could not save the SAE J1939 ECU parameters. Write access not granted.", QMessageBox::Ok);

}
