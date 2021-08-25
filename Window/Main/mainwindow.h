#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "ui_mainwindow.h"
#include "UI/ui_handling.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void update_looping_teriminal(uint32_t ID, uint8_t data[]);
private slots:

    void on_connect_sql_pushButton_clicked();

    void on_disconnect_sql_pushButton_clicked();

    void on_scan_usb_ports_pushButton_clicked();

    void on_connect_usb_pushButton_clicked();

    void on_disconnect_usb_pushButton_clicked();

    void on_send_commanded_address_pushButton_clicked();

    void on_send_general_purpose_valve_command_pushButton_clicked();

    void on_send_auxiliary_valve_command_pushButton_clicked();

    void on_send_predefined_request_pushButton_clicked();

    void on_start_listen_CAN_pushButton_clicked();

    void on_stop_listen_CAN_pushButton_clicked();

private:
    /* QT view components */
    Ui::MainWindow *ui;
    QStandardItemModel* looping_terminal_model;

    /* Handlers */
    UI_handling* ui_handling;

    /* Internal functions */
    void disable_all_tabs_except_index(uint8_t index);
    void enable_all_tabs_except_index(uint8_t index);

};
#endif // MAINWINDOW_H
