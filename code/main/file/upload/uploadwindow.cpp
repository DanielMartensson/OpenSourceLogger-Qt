#include "uploadwindow.h"
#include "ui_uploadwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QProgressDialog>

#define MAX_SQL_ROW_INSERT 1000

UploadWindow::UploadWindow(QWidget *parent, Database *database) :
    QWidget(parent),
    ui(new Ui::UploadWindow),
    database(database)
{
    ui->setupUi(this);
}

UploadWindow::~UploadWindow()
{
    delete ui;
}

void UploadWindow::on_uploadMeasurementPushButton_clicked()
{
    /* Check if we are connected to the database */
    if(!database->isConnectedToDatabase()){
        QMessageBox::critical(this, "No connection", "You are not connected to the database");
        return;
    }

    /* Fill the data */
    if(ui->csvFileOpenPathLineEdit->text().length() > 0 && ui->csvFileOpenPathLineEdit->text().endsWith(".csv")){
        /* Get the measurement ID */
        long measurementID = database->getLastValueAtColumnName(MEASUREMENT_ID, COLUMN_NAMES_TABLE).toLongLong() + 1;

        /* Count rows */
        int rowCount = ui->measurementTableWidget->rowCount();

        /* How many packages should we sent that contains 1000 rows of data ? */
        int packages = rowCount / MAX_SQL_ROW_INSERT;

        /* How many rows are left? */
        int rowsLeft = rowCount % MAX_SQL_ROW_INSERT;

        /* Create progress bar */
        QProgressDialog progress("Inserting into database with measurement ID: " + QString::number(measurementID), "Abort upload", 0, packages, this);
        progress.setWindowModality(Qt::WindowModality::ApplicationModal);

        /* Insert values into database */
        QList<QStringList> measurementValueList;
        QStringList measurementValues;
        for(int i = 0; i < packages; i++){
            /* Load a row */
            measurementValueList.clear();
            for(int j = 0; j < MAX_SQL_ROW_INSERT; j++){
                measurementValues.clear();
                for(int k = 0; k < ui->measurementTableWidget->columnCount(); k++)
                    measurementValues.append(ui->measurementTableWidget->item(j + MAX_SQL_ROW_INSERT*i, k)->text());
                measurementValueList.append(measurementValues);
            }

            /* Break the process */
            if (progress.wasCanceled())
                break;
            else
                progress.setValue(i);

            if(!database->insertRow(MEASUREMENT_TABLE, measurementID, measurementValueList, columnNames)){
                QMessageBox::critical(this, "Data", "Could not insert data into table for the measurement");
                return;
            }
        }

        /* Insert the rest of the values */
        if(rowsLeft > 0){
            /* The rest of the values */
            measurementValueList.clear();
            for(int j = 0; j < rowsLeft; j++){
                measurementValues.clear();
                for(int k = 0; k < ui->measurementTableWidget->columnCount(); k++)
                    measurementValues.append(ui->measurementTableWidget->item(j + MAX_SQL_ROW_INSERT*packages, k)->text());
                measurementValueList.append(measurementValues);
            }

            /* Insert the last */
            if(!database->insertRow(MEASUREMENT_TABLE, measurementID, measurementValueList, columnNames)){
                QMessageBox::critical(this, "Data", "Could not insert data into table for the measurement");
                return;
            }
        }

        /* Add the column names */
        QList<QStringList> measurementNamesList;
        measurementNamesList.append(measurementNames);
        if(!database->insertRow(COLUMN_NAMES_TABLE, measurementID, measurementNamesList, columnNames)){
            QMessageBox::critical(this, "Data", "Could not insert data into table for the column names");
            return;
        }

        /* This closes the progress bar */
        progress.close();

        /* Message box for OK */
        QMessageBox::information(this, "Data", "Inserted into the database with measurement ID: " + QString::number(measurementID));

    }else{
        QMessageBox::information(this, "Not selected", "No CSV file was selected");
    }
}


void UploadWindow::on_loadCsvFilePushButton_clicked()
{
    /* Open up load file dialog */
    QString csvFileOpenPathLocation;
    if(oldPath.length() > 0)
        csvFileOpenPathLocation = QFileDialog::getOpenFileName(nullptr, "Open the CSV file", oldPath, tr("Image Files (*.csv)"));
    else
        csvFileOpenPathLocation = QFileDialog::getOpenFileName(nullptr, "Open the CSV file", "", tr("CSV Files (*.csv)"));

    /* Check if we can read the file */
    if(csvFileOpenPathLocation.length() > 0 && csvFileOpenPathLocation.endsWith(".csv")){
        /* Save the path */
        oldPath = QFileInfo(csvFileOpenPathLocation).path();

        /* Set the text field */
        ui->csvFileOpenPathLineEdit->setText(csvFileOpenPathLocation);

        /* Show the file columns in the table view*/
        QFile csvFileMeasurement(csvFileOpenPathLocation);
        if(csvFileMeasurement.open(QFile::ReadOnly)){
            /* Clear the table view */
            ui->measurementTableWidget->clear();

            /* Fill every line, begin with the headers */
            bool hasMeasurementColumnNamesBeenCreated = false;
            bool hasHeadersBeenCreated = false;
            int rows = 0;
            QTextStream in(&csvFileMeasurement);
            while (!in.atEnd()){
                /* Read one line */
                QStringList line = in.readLine().split(",");

                /* Set the column size */
                ui->measurementTableWidget->setColumnCount(line.length());

                /* Fill the rows now */
                if(hasHeadersBeenCreated){
                    /* Set the row size */
                    ui->measurementTableWidget->setRowCount(++rows);
                    for(int i = 0; i < line.length(); i++)
                        ui->measurementTableWidget->setItem(rows-1, i, new QTableWidgetItem(line.at(i)));

                }else{
                    if(hasMeasurementColumnNamesBeenCreated){
                        /* Second line in the csv file */
                        measurementNames = line;
                        ui->measurementTableWidget->setHorizontalHeaderLabels(line);
                        hasHeadersBeenCreated = true;
                    }else{
                        /* First line in the csv file */
                        columnNames = line;
                        hasMeasurementColumnNamesBeenCreated = true;
                    }
                }
            }

            /* Close file */
            csvFileMeasurement.close();
        }
    }
}

