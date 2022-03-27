#include "canterminalwindow.h"
#include "ui_canterminalwindow.h"

CANTerminalWindow::CANTerminalWindow(QWidget *parent, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::CANTerminalWindow)
{
    ui->setupUi(this);

    /* Receive signals from message service thread every time send or receive CAN signals */
    connect(messageServiceThread, &MessageServiceThread::signalUpdateCANTerminalWindowWithCANData, this, &CANTerminalWindow::slotUpdateCANTerminalWindowWithCANData);

    /* Create horizontal labels */
    QStringList columnNames = {"ID Type", "ID", "DLC", "D0", "D1", "D2", "D3", "D4", "D5", "D6", "D7"};
    ui->terminalTableWidget->setColumnCount(columnNames.length());
    ui->terminalTableWidget->setHorizontalHeaderLabels(columnNames);

}

CANTerminalWindow::~CANTerminalWindow()
{
    delete ui;
}


void CANTerminalWindow::slotUpdateCANTerminalWindowWithCANData(uint8_t CAN_DATA[]){
    /* Create row list */
    QStringList rowList;

    /* IDE type */
    QString IDE = CAN_DATA[0] == CAN_ID_STD ? "Standard ID" : "Extended ID";
    rowList.append(IDE);

    /* ID */
    char text[20];
    sprintf(text, "0x%X", (CAN_DATA[1] << 24) | (CAN_DATA[2] << 16) | (CAN_DATA[3] << 8) | CAN_DATA[4]);
    QString ID = QString(text);
    rowList.append(ID);

    /* DLC */
    sprintf(text, "0x%X", CAN_DATA[5]);
    QString DLC = QString(text);
    rowList.append(DLC);

    /* Data */
    for(int i = 0; i < 8; i++){
        if(i < CAN_DATA[5]){
            sprintf(text, "0x%X", CAN_DATA[6+i]);
            rowList.append(QString(text));
        }else{
            rowList.append("");
        }
    }

    /* Check for duplicates */
    int rowCount = ui->terminalTableWidget->rowCount();
    int columnCount = ui->terminalTableWidget->columnCount();
    bool isExist = false;
    for(int i = 0; i < rowCount; i++){
        /* If we got full points, that means that the row is duplicated */
        int points = 0;
        for(int j = 0; j < columnCount; j++){
            QString cellText = ui->terminalTableWidget->item(i, j)->text();
            if(cellText == rowList.at(j))
                points++;
        }
        if(points == columnCount){
            isExist = true;
            break;
        }
    }

    /* Add new row */
    if(!isExist){

        /* Delete the first row if the rows are too large */
        if(ui->terminalTableWidget->rowCount() > 30){
            ui->terminalTableWidget->removeRow(0);
        }

        /* Set the row count */
        rowCount = ui->terminalTableWidget->rowCount() + 1;
        ui->terminalTableWidget->setRowCount(rowCount);

        /* Set each column at the same row */
        for(int j = 0; j < columnCount; j++)
            ui->terminalTableWidget->setItem(rowCount - 1, j, new QTableWidgetItem(rowList.at(j)));

    }

}
