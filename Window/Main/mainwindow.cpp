#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow){
    ui->setupUi(this);

    /* Important handler */
    ui_handling = new UI_handling(this, ui);

    looping_terminal_model = ui_handling->create_looping_terminal_model_for_table_view();
    ui_handling->set_field_validators();
    ui_handling->fill_usb_combo_boxes();
    ui_handling->fill_CAN_request_combo_box();
    ui_handling->load_datase_fields();
    ui_handling->load_USB_fields();
    ui_handling->create_thread_for_looping_terminal();

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_connect_sql_pushButton_clicked(){
    if(ui_handling->connect_to_database()){
        ui_handling->save_database_fields_if_checkbox_is_checked();
        ui_handling->display_database_connection_status("SQL status: Connected to server", "Connected", "You are now connected to MySQL", true);
    }else{
        ui_handling->display_database_connection_status("SQL status: Failed to connect server", "Fail", "You could not connect to MySQL", false);
    }
}

void MainWindow::on_disconnect_sql_pushButton_clicked(){
    ui_handling->disconnect_from_database();
    ui_handling->display_database_connection_status("SQL status: Disconnected from server", "Disconnected", "You are disconnected from MySQL", false);
}

void MainWindow::on_scan_usb_ports_pushButton_clicked(){
    ui_handling->get_USB_port_names_for_combo_box();
}

void MainWindow::on_connect_usb_pushButton_clicked(){
    ui_handling->connect_to_usb();
}

void MainWindow::on_disconnect_usb_pushButton_clicked(){
    ui_handling->disconnect_from_usb();
    ui_handling->display_usb_connection_status("USB status: Disconnected from USB", "Disconnected", "You are disconnected from USB", false);
}


void MainWindow::on_send_commanded_address_pushButton_clicked(){
    /* Open new window with commanded address control panel */
}


void MainWindow::on_send_general_purpose_valve_command_pushButton_clicked(){
    /* Open new window with general purpose valve command control panel */
}


void MainWindow::on_send_auxiliary_valve_command_pushButton_clicked(){
    /* Open new window with auxiliary valve command control panel */
}

void MainWindow::update_looping_teriminal(uint32_t ID, uint8_t data[]){

}

void MainWindow::on_send_predefined_request_pushButton_clicked(){
    ui_handling->send_predefined_j1939_request();
}

void MainWindow::on_start_listen_CAN_pushButton_clicked(){
    ui_handling->start_listen_j1939();
    disable_all_tabs_except_index(2);
}


void MainWindow::on_stop_listen_CAN_pushButton_clicked(){
    ui_handling->stop_listen_j1939();
    enable_all_tabs_except_index(2);
}

void MainWindow::disable_all_tabs_except_index(uint8_t index){
    for(uint8_t i = 0; i < 6; i++)
        if(i != index)
            this->ui->tabWidget->setTabEnabled(i, false);
}

void MainWindow::enable_all_tabs_except_index(uint8_t index){
    for(uint8_t i = 0; i < 6; i++)
        if(i != index)
            this->ui->tabWidget->setTabEnabled(i, true);
}
