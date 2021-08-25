#ifndef UI_HANDLING_H
#define UI_HANDLING_H

/* QT includes */
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QIntValidator>
#include <QMainWindow>

/* Project includes */
#include "UI_threads/Loop_terminal_thread/loop_terminal_thread.h"
#include "UI_tools/Communication/USB/usb_handling/usb_handling.h"
#include "UI_tools/Communication/Database/Database_handling/database_handling.h"
#include "UI_tools/Communication/J1939/Open_SAE_J1939/Structs.h"

class UI_handling{
public:
    UI_handling(QMainWindow* mainWindow, Ui::MainWindow* ui);
    QStandardItemModel* create_looping_terminal_model_for_table_view();
    void set_field_validators();
    void fill_usb_combo_boxes();
    void fill_CAN_request_combo_box();
    void load_datase_fields();
    void load_USB_fields();
    void create_thread_for_looping_terminal();
    void save_database_fields_if_checkbox_is_checked();
    void display_database_connection_status(const QString& SQL_status_label, const QString& message_box_header, const QString& message_box_content, bool connected);
    void get_USB_port_names_for_combo_box();
    bool connect_to_database();
    void disconnect_from_database();
    void connect_to_usb();
    void disconnect_from_usb();
    void display_usb_connection_status(const QString& usb_status_label, const QString& message_box_header, const QString& message_box_content, bool connected);
    void send_predefined_j1939_request();
    void start_listen_j1939();
    void stop_listen_j1939();


    /* Thread for the looping terminal */
    Loop_terminal_thread* loop_terminal_thread;

private:
    QMainWindow* mainWindow;
    Ui::MainWindow* ui;

    /* Handlers */
    USB_handling* usb_handling;
    Database_handling* database_handling;
    J1939 j1939;

};

#endif // UI_HANDLING_H
