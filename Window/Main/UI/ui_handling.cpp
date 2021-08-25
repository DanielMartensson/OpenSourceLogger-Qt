/* Projet includes */
#include "ui_handling.h"

/* QT includes */
#include <QMessageBox>

/* Private includes */
#include "UI_tools/File_handling/Json/json_handling.h"
#include "../mainwindow.h"
#include "UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Layer.h"

UI_handling::UI_handling(QMainWindow* mainWindow, Ui::MainWindow* ui) : mainWindow(mainWindow), ui(ui){
    database_handling = new Database_handling("QMYSQL");
    usb_handling = new USB_handling(&j1939);

    /* Create the J1939 struct - This is important because else, we cannot use ECU address 0x0. 0xFF is broadcast address */
    for(uint8_t i = 0; i < 255; i++)
        this->j1939.other_ECU_address[i] = 0xFF;

}

QStandardItemModel* UI_handling::create_looping_terminal_model_for_table_view(){
    QStandardItemModel* looping_terminal_model = new QStandardItemModel(4, 2);
    looping_terminal_model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    looping_terminal_model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATA"));
    ui->looping_terminal_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->looping_terminal_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->looping_terminal_tableView->setModel(looping_terminal_model);
    return looping_terminal_model;
}

void UI_handling::set_field_validators(){
    ui->sql_port_lineEdit->setValidator(new QIntValidator(0, 9999, mainWindow)); /* integer 0 to 9999 for port text field */
    ui->ecu_destination_address_lineEdit->setValidator(new QIntValidator(0, 255, mainWindow));
    ui->ecu_source_address_lineEdit->setValidator(new QIntValidator(0, 255, mainWindow));
}

void UI_handling::fill_usb_combo_boxes(){
    ui->usb_baudrate_comboBox->addItems({"1200", "2400", "4800", "9600", "19200", "38400", "57600", "115200"});
    ui->usb_data_bits_comboBox->addItems({"5", "6", "7", "8"});
    ui->usb_parity_comboBox->addItems({"NoParity", "EvenParity", "OddParity", "SpaceParity", "MarkParity"});
    ui->usb_stop_bits_comboBox->addItems({"OneStop", "OneAndHalfStop", "TwoStop"});
    ui->usb_flow_control_comboBox->addItems({"NoFlowControl", "HardwareControl", "SoftwareControl"});
}

void UI_handling::fill_CAN_request_combo_box(){
    ui->predefined_request_comboBox->addItems({"Address claimed",
                                               "DM1",
                                               "DM2",
                                               "DM3",
                                               "Software identification",
                                               "ECU identification",
                                               "Component identification",
                                               "General purpose valve estimated flow",
                                               "Auxiliary valve estimated flow 0",
                                               "Auxiliary valve estimated flow 1",
                                               "Auxiliary valve estimated flow 2",
                                               "Auxiliary valve estimated flow 3",
                                               "Auxiliary valve estimated flow 4",
                                               "Auxiliary valve estimated flow 5",
                                               "Auxiliary valve estimated flow 6",
                                               "Auxiliary valve estimated flow 7",
                                               "Auxiliary valve estimated flow 8",
                                               "Auxiliary valve estimated flow 9",
                                               "Auxiliary valve estimated flow 10",
                                               "Auxiliary valve estimated flow 11",
                                               "Auxiliary valve estimated flow 12",
                                               "Auxiliary valve estimated flow 13",
                                               "Auxiliary valve estimated flow 14",
                                               "Auxiliary valve estimated flow 15",
                                               "Auxiliary valve measured position 0",
                                               "Auxiliary valve measured position 1",
                                               "Auxiliary valve measured position 2",
                                               "Auxiliary valve measured position 3",
                                               "Auxiliary valve measured position 4",
                                               "Auxiliary valve measured position 5",
                                               "Auxiliary valve measured position 6",
                                               "Auxiliary valve measured position 7",
                                               "Auxiliary valve measured position 8",
                                               "Auxiliary valve measured position 9",
                                               "Auxiliary valve measured position 10",
                                               "Auxiliary valve measured position 11",
                                               "Auxiliary valve measured position 12",
                                               "Auxiliary valve measured position 13",
                                               "Auxiliary valve measured position 14",
                                               "Auxiliary valve measured position 15"});
}

void UI_handling::load_datase_fields(){
    Json_handling json_handling;
    QJsonObject object = json_handling.load_object("database_settings.json");
    if(object["remember"].toBool()){
        ui->sql_hostname_lineEdit->setText(object["hostname"].toString());
        ui->sql_port_lineEdit->setText(QString::number(object["port"].toDouble()));
        ui->sql_schema_name_lineEdit->setText(object["schema_name"].toString());
        ui->sql_table_name_lineEdit->setText(object["table_name"].toString());
        ui->sql_username_lineEdit->setText(object["username"].toString());
        ui->sql_password_lineEdit->setText(object["password"].toString());
        ui->remember_database_settings_checkBox->setChecked(object["remember"].toBool());
    }
}

void UI_handling::load_USB_fields(){
    Json_handling json_handling;
    QJsonObject object = json_handling.load_object("usb_settings.json");
    if(object["remember"].toBool()){
        ui->usb_baudrate_comboBox->setCurrentText(object["baudrate"].toString());
        ui->usb_data_bits_comboBox->setCurrentText(object["data_bits"].toString());
        ui->usb_parity_comboBox->setCurrentText(object["parity"].toString());
        ui->usb_stop_bits_comboBox->setCurrentText(object["stop_bits"].toString());
        ui->usb_flow_control_comboBox->setCurrentText(object["flow_control"].toString());
        ui->remember_usb_settings_checkBox->setChecked(object["remember"].toBool());
    }
}

void UI_handling::create_thread_for_looping_terminal(){
    loop_terminal_thread = new Loop_terminal_thread(mainWindow, &j1939);
    loop_terminal_thread->start();
    mainWindow->connect(loop_terminal_thread, &Loop_terminal_thread::send_ID_and_data_to_looping_terminal, mainWindow, &MainWindow::update_looping_teriminal);
}

void UI_handling::save_database_fields_if_checkbox_is_checked(){
    Json_handling json_handling;
    if(ui->remember_database_settings_checkBox->isChecked()){
        QJsonObject object;
        object["hostname"] = ui->sql_hostname_lineEdit->text();
        object["port"] = ui->sql_port_lineEdit->text().toInt();
        object["schema_name"] = ui->sql_schema_name_lineEdit->text();
        object["table_name"] = ui->sql_table_name_lineEdit->text();
        object["username"] = ui->sql_username_lineEdit->text();
        object["password"] = ui->sql_password_lineEdit->text();
        object["remember"] = ui->remember_database_settings_checkBox->isChecked();
        json_handling.save_object(object, "database_settings.json");
    }else{
        json_handling.delete_json("database_settings.json");
    }
}


void UI_handling::display_database_connection_status(const QString& SQL_status_label, const QString& message_box_header, const QString& message_box_content, bool connected){
    ui->sql_status_label->setText(SQL_status_label);
    QMessageBox::information(mainWindow, message_box_header, message_box_content, QMessageBox::Ok);
    if(connected){
        ui->connect_sql_pushButton->setEnabled(false);
        ui->disconnect_sql_pushButton->setEnabled(true);
    }else{
        ui->connect_sql_pushButton->setEnabled(true);
        ui->disconnect_sql_pushButton->setEnabled(true);
    }
}

void UI_handling::get_USB_port_names_for_combo_box(){
    ui->usb_ports_comboBox->clear();
    QStringList portNames = usb_handling->get_port_names();
    ui->usb_ports_comboBox->addItems(portNames);
}

bool UI_handling::connect_to_database(){
    return database_handling->connect_SQL(ui->sql_hostname_lineEdit->text(),
                                         ui->sql_port_lineEdit->text().toInt(),
                                         ui->sql_schema_name_lineEdit->text(),
                                         ui->sql_table_name_lineEdit->text(),
                                         ui->sql_username_lineEdit->text(),
                                         ui->sql_password_lineEdit->text());
}

void UI_handling::disconnect_from_database(){
    return database_handling->disconnect_SQL();
}

void UI_handling::connect_to_usb(){
    QString port_name = ui->usb_ports_comboBox->currentText();
    qint32 baudrate = ui->usb_baudrate_comboBox->currentText().toUInt();
    QSerialPort::DataBits data_bits = QSerialPort::Data8;
    switch(ui->usb_data_bits_comboBox->currentIndex()){
    case 0:
        data_bits = QSerialPort::Data5;
        break;
    case 1:
        data_bits = QSerialPort::Data6;
        break;
    case 2:
        data_bits = QSerialPort::Data7;
        break;
    case 3:
        data_bits = QSerialPort::Data8;
        break;
    }
    QSerialPort::Parity parity = QSerialPort::NoParity;
    switch(ui->usb_parity_comboBox->currentIndex()){
    case 0:
        parity = QSerialPort::NoParity;
        break;
    case 1:
        parity = QSerialPort::EvenParity;
        break;
    case 2:
        parity = QSerialPort::OddParity;
        break;
    case 3:
        parity = QSerialPort::SpaceParity;
        break;
    case 4:
        parity = QSerialPort::MarkParity;
        break;
    }
    QSerialPort::StopBits stop_bits = QSerialPort::OneStop;
    switch(ui->usb_stop_bits_comboBox->currentIndex()){
    case 0:
        stop_bits = QSerialPort::OneStop;
        break;
    case 1:
        stop_bits = QSerialPort::OneAndHalfStop;
        break;
    case 2:
        stop_bits = QSerialPort::TwoStop;
        break;
    }
    QSerialPort::FlowControl flow_control = QSerialPort::NoFlowControl;
    switch(ui->usb_flow_control_comboBox->currentIndex()){
    case 0:
        flow_control = QSerialPort::NoFlowControl;
        break;
    case 1:
        flow_control = QSerialPort::HardwareControl;
        break;
    case 2:
        flow_control = QSerialPort::SoftwareControl;
        break;
    }
    if(usb_handling->connect_to_usb(port_name, baudrate, data_bits, parity, stop_bits, flow_control)){
        Json_handling json_handling;
        if(ui->remember_usb_settings_checkBox->isChecked()){
            QJsonObject object;
            object["baudrate"] = ui->usb_baudrate_comboBox->currentText();
            object["data_bits"] = ui->usb_data_bits_comboBox->currentText();
            object["parity"] = ui->usb_parity_comboBox->currentText();
            object["stop_bits"] = ui->usb_stop_bits_comboBox->currentText();
            object["flow_control"] = ui->usb_flow_control_comboBox->currentText();
            object["remember"] = ui->remember_usb_settings_checkBox->isChecked();
            json_handling.save_object(object, "usb_settings.json");
        }else{
            json_handling.delete_json("usb_settings.json");
        }

        /* Display success */
        display_usb_connection_status("USB status: Connected to USB", "Connected", "You are now connected to USB", true);
    }else{
        /* Display failure */
        display_usb_connection_status("USB status: Failed to connect USB", "Fail", "You could not connect to USB", false);
    }

}

void UI_handling::disconnect_from_usb(){
    usb_handling->disconnect_from_usb();
}

void UI_handling::display_usb_connection_status(const QString& usb_status_label, const QString& message_box_header, const QString& message_box_content, bool connected){
    ui->usb_status_lineEdit->setText(usb_status_label);
    QMessageBox::information(mainWindow, message_box_header, message_box_content, QMessageBox::Ok);
    if(connected){
        ui->connect_usb_pushButton->setEnabled(false);
        ui->disconnect_usb_pushButton->setEnabled(true);
    }else{
        ui->connect_usb_pushButton->setEnabled(true);
        ui->disconnect_usb_pushButton->setEnabled(true);
    }
}

void UI_handling::send_predefined_j1939_request(){
    uint8_t DA = ui->ecu_destination_address_lineEdit->text().toUInt();
    j1939.this_ECU_address = ui->ecu_source_address_lineEdit->text().toUInt();
    uint32_t PGN = 0;
    int index = ui->predefined_request_comboBox->currentIndex();
    if(index == 0){
        PGN = PGN_ADDRESS_CLAIMED;
    }else if(index == 1){
        PGN = PGN_DM1;
    }else if(index == 2){
        PGN = PGN_DM2;
    }else if(index == 3){
        PGN = PGN_DM3;
    }else if(index == 4){
        PGN = PGN_SOFTWARE_IDENTIFICATION;
    }else if(index == 5){
        PGN = PGN_ECU_IDENTIFICATION;
    }else if(index == 6){
        PGN = PGN_COMPONENT_IDENTIFICATION;
    }else if(index == 7){
        PGN = PGN_GENERAL_PURPOSE_VALVE_ESTIMATED_FLOW;
    }else if(index >= 8 && index <= 23){
        PGN = PGN_AUXILIARY_VALVE_ESTIMATED_FLOW_0 + index-8; /* From ESTIMATED_FLOW_0 to ESTIMATED_FLOW_15 */
    }else if(index >= 24 && index <= 39){
        PGN = PGN_AUXILIARY_VALVE_MEASURED_POSITION_0 + index-24; /* From MEASURED_POSITION_0 to MEASURED_POSITION_15 */
    }
    SAE_J1939_Send_Request(&j1939, DA, PGN);
}

void UI_handling::start_listen_j1939(){
    usb_handling->length_of_usb_message = 15;
    ui->CAN_status_label->setText("CAN status: Listener is started");
    ui->start_listen_CAN_pushButton->setEnabled(false);
    ui->stop_listen_CAN_pushButton->setEnabled(true);
}

void UI_handling::stop_listen_j1939(){
    usb_handling->length_of_usb_message = 0;
    this->ui->CAN_status_label->setText("CAN status: Listener is stopped");
    this->ui->start_listen_CAN_pushButton->setEnabled(true);
    this->ui->stop_listen_CAN_pushButton->setEnabled(false);
}
