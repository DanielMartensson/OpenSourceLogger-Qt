#include "connectionwindow.h"
#include "ui_connectionwindow.h"
#include <QMessageBox>
#include <QFile>
#include "../../../tools/json/json.h"

ConnectionWindow::ConnectionWindow(QWidget *parent, Database *database, USB *usb, J1939 *j1939, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::ConnectionWindow),
    database(database),
    usb(usb),
    j1939(j1939),
    messageServiceThread(messageServiceThread)
{
    ui->setupUi(this);

    /* Load database drivers combo box */
    ui->databaseDriverComboBox->addItems({QMYSQL, MARIADB, QODBC});

    /* Load the settings */
    Json json;
    QJsonObject object = json.loadObject("ConnectionWindow.json");
    if(!object.isEmpty()){
        ui->databaseDriverComboBox->setCurrentText(object["databaseDriverComboBox"].toString());
        ui->hostnameLineEdit->setText(object["hostnameLineEdit"].toString());
        ui->databaseNameLineEdit->setText(object["databaseNameLineEdit"].toString());
        ui->usernameLineEdit->setText(object["usernameLineEdit"].toString());
        ui->passwordLineEdit->setText(object["passwordLineEdit"].toString());
        ui->portSpinBox->setValue(object["portSpinBox"].toInt());
        ui->selectedUSBportComboBox->setCurrentText(object["selectedUSBportComboBox"].toString());
    }

    /* These enables or disables depending if we are connected or not */
    enableDatabaseConnectionComponents(!database->isConnectedToDatabase());
    enableUSBConnectionComponents(!usb->isOpen());

    /* Connect connection window to message service thread */
    connect(this, &ConnectionWindow::signalSetThreadActive, messageServiceThread, &MessageServiceThread::slotSetThreadActive);

}

ConnectionWindow::~ConnectionWindow()
{
    delete ui;
}

void ConnectionWindow::showEvent(QShowEvent *event){
    Q_UNUSED(event)
    /* Load the USB ports */
    if(!usb->isOpen()){
        ui->selectedUSBportComboBox->clear();
        ui->selectedUSBportComboBox->addItems(usb->availablePorts());
    }
}

void ConnectionWindow::on_usbConnectPushButton_clicked()
{
    bool result = usb->open(ui->selectedUSBportComboBox->currentText(),
              QSerialPort::Baud115200,
              QSerialPort::Data8,
              QSerialPort::NoParity,
              QSerialPort::OneStop,
              QSerialPort::NoFlowControl);

    if(result){
        /* Enable and send out message */
        enableUSBConnectionComponents(false);
        QMessageBox::information(this, "Connected", "You are connected to the USB!", QMessageBox::Ok);

        /* Save to JSON */
        saveAllToJSON();

        /* Load the J1939 as well */
        Open_SAE_J1939_Startup_ECU(j1939);

        /* Start message service thread */
        emit signalSetThreadActive(true);

    }else{
        enableUSBConnectionComponents(true);
        QMessageBox::critical(this, "Not connected", "Could not connect to the USB! Available USB ports: " + usb->availablePorts().join(","), QMessageBox::Ok);
    }

}


void ConnectionWindow::on_usbDisconnectPushButton_clicked()
{
    /* Close message service thread */
    emit signalSetThreadActive(false);

    /* Close */
    usb->close();

    /* Load new */
    ui->selectedUSBportComboBox->clear();
    ui->selectedUSBportComboBox->addItems(usb->availablePorts());

    /* Enable */
    enableUSBConnectionComponents(true);
    QMessageBox::information(this, "Disconnected", "You are disconnected from the USB!", QMessageBox::Ok);
}


void ConnectionWindow::on_databaseConnectPushButton_clicked()
{
    bool result = database->connectToDatabase(ui->databaseDriverComboBox->currentText(),
                                ui->hostnameLineEdit->text(),
                                ui->databaseNameLineEdit->text(),
                                ui->usernameLineEdit->text(),
                                ui->passwordLineEdit->text(),
                                ui->portSpinBox->value());

    if(result){
        /* Enable and send out message */
        enableDatabaseConnectionComponents(false);

        /* Create columns for measurement - Need to have the same size as column names table */
        QList<QPair<QString, QString>> tableColumns;
        tableColumns.append(QPair<QString, QString>(TABLE_ID, SQL_DATATYPE_LONG));
        tableColumns.append(QPair<QString, QString>(MEASUREMENT_ID, SQL_DATATYPE_LONG));
        tableColumns.append(QPair<QString, QString>(MEASUREMENT_COMMENT, SQL_DATATYPE_STRING));
        if(ui->databaseDriverComboBox->currentText() == QMYSQL)
            tableColumns.append(QPair<QString, QString>(MEASUREMENT_DATE_TIME, SQL_DATETYPE_DATETIME_MYSQL));
        else if(ui->databaseDriverComboBox->currentText() == MARIADB)
            tableColumns.append(QPair<QString, QString>(MEASUREMENT_DATE_TIME, SQL_DATETYPE_DATETIME_MARIADB));
        else if(ui->databaseDriverComboBox->currentText() == QODBC)
            tableColumns.append(QPair<QString, QString>(MEASUREMENT_DATE_TIME, SQL_DATATYPE_DATETIME_QODBC));
        for(int i = 0; i < ADC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(ADC + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < DADC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(DADC + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < DAC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(DAC + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < PWM_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(PWM + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < DI_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(DI + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < IC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(IC + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < ENCODER_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(ENCODER + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < AUXILIARY_VALVE_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(AUXILIARY_VALVE + QString::number(i), SQL_DATATYPE_FLOAT));
        for(int i = 0; i < GENERAL_VALVE_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(GENERAL_VALVE + QString::number(i), SQL_DATATYPE_FLOAT));
        /* Add more here */

        /* Create table */
        database->createTable(MEASUREMENT_TABLE, tableColumns);

        /* Create columns for column names - Need to have the same size as measurement table */
        tableColumns.clear();
        tableColumns.append(QPair<QString, QString>(TABLE_ID, SQL_DATATYPE_LONG));
        tableColumns.append(QPair<QString, QString>(MEASUREMENT_ID, SQL_DATATYPE_LONG));
        tableColumns.append(QPair<QString, QString>(MEASUREMENT_COMMENT, SQL_DATATYPE_STRING));
        tableColumns.append(QPair<QString, QString>(MEASUREMENT_DATE_TIME, SQL_DATATYPE_STRING));
        for(int i = 0; i < ADC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(ADC + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < DADC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(DADC + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < DAC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(DAC + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < PWM_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(PWM + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < DI_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(DI + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < IC_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(IC + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < ENCODER_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(ENCODER + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < AUXILIARY_VALVE_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(AUXILIARY_VALVE + QString::number(i), SQL_DATATYPE_STRING));
        for(int i = 0; i < GENERAL_VALVE_LENGTH; i++)
            tableColumns.append(QPair<QString, QString>(GENERAL_VALVE + QString::number(i), SQL_DATATYPE_STRING));
        /* Add more here */

        /* Create table */
        database->createTable(COLUMN_NAMES_TABLE, tableColumns);

        QMessageBox::information(this, "Connected", "You are connected to the database!", QMessageBox::Ok);

        /* Save to JSON */
        saveAllToJSON();

    }else{
        enableDatabaseConnectionComponents(true);
        QMessageBox::critical(this, "Not connected", "Could not connect to the database! Available drivers: " + QSqlDatabase::drivers().join(","), QMessageBox::Ok);
    }
}


void ConnectionWindow::on_databaseDisconnectPushButton_clicked()
{
    database->disconnectFromDatabase();
    enableDatabaseConnectionComponents(true);
    QMessageBox::information(this, "Disconnected", "You are disconnected from the database!", QMessageBox::Ok);
}

void ConnectionWindow::enableDatabaseConnectionComponents(bool enable){
    ui->databaseDriverComboBox->setEnabled(enable);
    ui->databaseNameLineEdit->setEnabled(enable);
    ui->hostnameLineEdit->setEnabled(enable);
    ui->usernameLineEdit->setEnabled(enable);
    ui->passwordLineEdit->setEnabled(enable);
    ui->portSpinBox->setEnabled(enable);
    ui->databaseConnectPushButton->setEnabled(enable);
    ui->databaseDisconnectPushButton->setEnabled(!enable); /* Reversed */
}

void ConnectionWindow::enableUSBConnectionComponents(bool enable){
    ui->selectedUSBportComboBox->setEnabled(enable);
    ui->usbConnectPushButton->setEnabled(enable);
    ui->usbDisconnectPushButton->setEnabled(!enable); /* Reversed */
}

void ConnectionWindow::saveAllToJSON(){
    Json json;
    QJsonObject object;
    object["databaseDriverComboBox"] = ui->databaseDriverComboBox->currentText();
    object["hostnameLineEdit"] = ui->hostnameLineEdit->text();
    object["databaseNameLineEdit"] = ui->databaseNameLineEdit->text();
    object["usernameLineEdit"] = ui->usernameLineEdit->text();
    object["passwordLineEdit"] = ui->passwordLineEdit->text();
    object["portSpinBox"] = ui->portSpinBox->value();
    object["selectedUSBportComboBox"] = ui->selectedUSBportComboBox->currentText();
    json.saveObject(object, "ConnectionWindow.json");
}
