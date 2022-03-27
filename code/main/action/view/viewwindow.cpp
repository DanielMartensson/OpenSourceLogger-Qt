#include "viewwindow.h"
#include "ui_viewwindow.h"
#include <QMessageBox>
#include "code/tools/database/database.h"
#include <QFileDialog>
#include <QProgressDialog>

ViewWindow::ViewWindow(QWidget *parent, Database *database) :
    QWidget(parent),
    ui(new Ui::ViewWindow),
    database(database)
{
    ui->setupUi(this);
}

ViewWindow::~ViewWindow()
{
    delete ui;
}

void ViewWindow::showEvent(QShowEvent *event){
    Q_UNUSED(event)

    /* Check if we are connected to the database */
    if(!database->isConnectedToDatabase()){
        QMessageBox::critical(this, "Not connected", "Not connected to the database!");
        return;
    }

    /* Yes - Find all the measurement ID's and add them to the combobox */
    QList<QVariant> measurementIDs = database->listItemsInsideAColumnButAvoidDuplicates(MEASUREMENT_ID);
    ui->measurementIDComboBox->clear();
    foreach(QVariant measurementID, measurementIDs)
        ui->measurementIDComboBox->addItem(measurementID.toString());

}

void ViewWindow::on_plotDataPushButton_clicked()
{
    /* Check if got rows */
    if(ui->measurementTableWidget->rowCount() <= 0)
        return;

    /* Get selected */
    QModelIndexList selectedColumns = ui->measurementTableWidget->selectionModel()->selectedColumns();
    if(selectedColumns.length() == 0)
        return;

    /* From and to row */
    int fromRow = ui->fromRowSpinBox->value();
    int toRow = ui->toRowSpinBox->value() + 1;
    int jumpRow = ui->jumpRowSpinBox->value();

    /* Show samples */
    int showSamples = (toRow - fromRow)/jumpRow;

    /* Columns */
    QStringList measurementNameList;
    foreach(QModelIndex indexColumn, selectedColumns){
        /* Get the correct columns */
        QString measurementName = ui->measurementTableWidget->horizontalHeaderItem(indexColumn.column())->text();
        if(avoidTheseMeasurementNames(measurementName))
            continue;
        measurementNameList.append(measurementName);
    }

    /* Create the plot */
    int howManyMeasurements = measurementNameList.length();
    if(howManyMeasurements > 0)
        emit signalCreatePlot(howManyMeasurements, showSamples);
    else
        return; /* Nope - No columns was selected */

    /* Rows */
    fromRow--;
    toRow--;

    /* Create progress bar */
    QProgressDialog progress("Inserting measurements to plot...", "Abort plot", fromRow, toRow, this);
    progress.setWindowModality(Qt::WindowModality::ApplicationModal);

    /* Fill the plot */
    for(int i = fromRow; i < toRow; i += jumpRow){
        QList<float> measurementValues;
        foreach(QModelIndex indexColumn, selectedColumns){
            /* You need to select the corret column */
            int index = indexColumn.column();
            QString measurementName = ui->measurementTableWidget->horizontalHeaderItem(index)->text();
            if(avoidTheseMeasurementNames(measurementName))
                continue;
            measurementValues.append(ui->measurementTableWidget->item(i, index)->text().toFloat());
        }

        /* Break the process */
        if (progress.wasCanceled())
            break;
        else
            progress.setValue(i);

        emit signalUpdateChartWithMeasurements(measurementValues, measurementNameList);
    }

    /* Close the progress bar */
    progress.setValue(toRow);
}


void ViewWindow::on_downloadDataPushButton_clicked()
{
    /* Check if got rows */
    if(ui->measurementTableWidget->rowCount() <= 0)
        return;

    /* Get selected columns */
    QModelIndexList selectedColumns = ui->measurementTableWidget->selectionModel()->selectedColumns();
    if(selectedColumns.length() == 0)
        return;

    /* Open up save file dialog */
    QString csvFileSavePathLocation;
    if(oldPath.length() > 0)
        csvFileSavePathLocation = QFileDialog::getSaveFileName(nullptr, "Save the CSV file", oldPath, tr("Image Files (*.csv)"));
    else
        csvFileSavePathLocation = QFileDialog::getSaveFileName(nullptr, "Save the CSV file", "", tr("CSV Files (*.csv)"));

    /* Check if we can read the file */
    if(csvFileSavePathLocation.length() > 0 && csvFileSavePathLocation.endsWith(".csv")){
        /* Save the path */
        oldPath = QFileInfo(csvFileSavePathLocation).path();

        /* From and to row */
        int fromRow = ui->fromRowSpinBox->value() - 1;
        int toRow = ui->toRowSpinBox->value();
        int jumpRow = ui->jumpRowSpinBox->value();

        /* Open file */
        QFile csvFile(csvFileSavePathLocation);
        if(!csvFile.open(QFile::WriteOnly)){
            QMessageBox::critical(this, "No rights", "You have no rights to open file there!");
            return;
        }

        /* Headers */
        for(int i = 0; i < selectedColumns.length(); i++){
            QString columnName = ui->measurementTableWidget->horizontalHeaderItem(selectedColumns.at(i).column())->text() + ",";
            csvFile.write(columnName.toUtf8());
        }
        csvFile.write("\n");

        /* Create progress bar */
        QProgressDialog progress("Writing measurements to file...", "Abort writing", fromRow, toRow, this);
        progress.setWindowModality(Qt::WindowModality::ApplicationModal);

        /* Write rows */
        for(int i = fromRow; i < toRow; i += jumpRow){
            for(int j = 0; j < selectedColumns.length(); j++){
                QString measurementValues = ui->measurementTableWidget->item(i, selectedColumns.at(j).column())->text() + ",";
                csvFile.write(measurementValues.toUtf8());
            }
            csvFile.write("\n");

            /* Break the process */
            if (progress.wasCanceled())
                break;
            else
                progress.setValue(i);
        }

        /* Close */
        csvFile.close();

        /* Close the progress bar */
        progress.setValue(toRow);
    }
}


void ViewWindow::on_deleteDataPushButton_clicked()
{
    /* Check if got rows */
    if(ui->measurementTableWidget->rowCount() <= 0)
        return;

    /* From and to row */
    int fromRow = ui->fromRowSpinBox->value() - 1;
    int toRow = ui->toRowSpinBox->value() - 1;
    int jumpRow = ui->jumpRowSpinBox->value();

    /* Question what to do */
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Range or sequential");
    msgBox.setIcon(QMessageBox::Icon::Question);
    msgBox.setText("Do you want to delete in range or in sequential? Jump row does not affect range deleting, only sequential deleting.");
    QPushButton *rangeButton = msgBox.addButton("Range", QMessageBox::ActionRole);
    QPushButton *sequentialButton = msgBox.addButton("Sequential", QMessageBox::ActionRole);
    msgBox.addButton(QMessageBox::Cancel);
    msgBox.exec();
    if(msgBox.clickedButton() == rangeButton){
        /* Delete in database */
        long fromID = ui->measurementTableWidget->item(fromRow, 0)->text().toLong();
        long toID = ui->measurementTableWidget->item(toRow, 0)->text().toLong();
        if(database->deleteRowsBetweenID(fromID, toID))
            ui->measurementTableWidget->model()->removeRows(fromRow, toRow - fromRow + 1);
    }else if(msgBox.clickedButton() == sequentialButton){
        /* Create progress bar */
        QProgressDialog progress("Delete measurements from database...", "Abort delete", toRow, fromRow, this);
        progress.setWindowModality(Qt::WindowModality::ApplicationModal);
        for(int i = toRow; i >= fromRow; i -= jumpRow){
            /* Delete from database */
            long ID = ui->measurementTableWidget->item(i, 0)->text().toLong();
            if(database->deleteRowByID(ID)){
                /* Delete from table */
                ui->measurementTableWidget->removeRow(i);

                /* Break the process */
                if (progress.wasCanceled())
                    break;
                else
                    progress.setValue(i);
            }else{
                QMessageBox::critical(this, "Fail", "Could not delete rows");
                break;
            }
        }

        /* Close the progress bar */
        progress.setValue(fromRow);

    }else{
        return;
    }

    /* Change the maxium value */
    int rowCount = ui->measurementTableWidget->rowCount();
    ui->fromRowSpinBox->setMaximum(rowCount);
    ui->toRowSpinBox->setMaximum(rowCount);

    /* If we have not rows left - Delete current index and clear the table */
    if(rowCount == 0)
        ui->measurementIDComboBox->removeItem(ui->measurementIDComboBox->currentIndex());
}


void ViewWindow::on_measurementIDComboBox_currentTextChanged(const QString &arg1)
{
    /* Get the column names */
    QStringList columnNames = database->getColumnNames();

    /* Get the measurement values */
    QList<QList<QVariant>> measurementRows = database->getMeasurementRowsByMeasurementID(arg1);

    /* Max row */
    int maxRow = measurementRows.length();

    /* Clear */
    ui->measurementTableWidget->clear();

    /* Clear the colum count */
    ui->measurementTableWidget->setColumnCount(columnNames.length());
    ui->measurementTableWidget->setHorizontalHeaderLabels(columnNames);

    /* Set the rows values */
    int rowCount = 0;
    for(int i = 0; i < maxRow; i++){
        ui->measurementTableWidget->setRowCount(++rowCount);
        for(int j = 0; j < measurementRows.at(i).length(); j++)
            ui->measurementTableWidget->setItem(i, j, new QTableWidgetItem(measurementRows.at(i).at(j).toString()));
    }

    /* Set max limit */
    ui->toRowSpinBox->setMaximum(rowCount);
    ui->fromRowSpinBox->setMaximum(rowCount);

    /* Set min limit */
    ui->toRowSpinBox->setMinimum(1);
    ui->fromRowSpinBox->setMinimum(1);

    /* If rowCount was above 0 - Set to 1 because we don't want to call the functions with from(0) if we have from larger than 0*/
    if(rowCount > 0)
        ui->fromRowSpinBox->setValue(1);
}


void ViewWindow::on_fromRowSpinBox_valueChanged(int arg1)
{
    /* Spinbox from cannot be larger than spinbox to */
    if(ui->toRowSpinBox->value() < arg1)
       ui->toRowSpinBox->setValue(arg1);
}


void ViewWindow::on_toRowSpinBox_valueChanged(int arg1)
{
    /* Spinbox to cannot be smaller than spinbox from */
    if(ui->fromRowSpinBox->value() > arg1)
       ui->fromRowSpinBox->setValue(arg1);
}

void ViewWindow::on_jumpRowSpinBox_valueChanged(int arg1)
{
    /* Jump row cannot be larger than to row */
    if(ui->toRowSpinBox->value() < arg1)
        ui->jumpRowSpinBox->setValue(ui->toRowSpinBox->value());
}


bool ViewWindow::avoidTheseMeasurementNames(QString measurementName){
    if(measurementName == MEASUREMENT_COMMENT || measurementName == MEASUREMENT_DATE_TIME || measurementName == MEASUREMENT_ID || measurementName == DATABASE_ID)
        return true;
    else
        return false;
}

void ViewWindow::on_deleteColumnsPushButton_clicked()
{
    /* Check if we have pressed any columns */
    if(ui->measurementTableWidget->selectionModel()->selectedColumns().length() == 0)
        return;

    /* You cannot delete these columns */
    QModelIndexList selectedColumns = ui->measurementTableWidget->selectionModel()->selectedColumns();
    foreach(QModelIndex indexColumn, selectedColumns){
        QString measurementName = ui->measurementTableWidget->horizontalHeaderItem(indexColumn.column())->text();
        if(avoidTheseMeasurementNames(measurementName)){
            QMessageBox::warning(this, "Delete", "You cannot delete the following column: " + measurementName);
            return;
        }
    }

    /* OK - Ask if the user want to delete */
    QStringList columNamesList;
    foreach(QModelIndex indexColumn, selectedColumns)
        columNamesList.append(ui->measurementTableWidget->horizontalHeaderItem(indexColumn.column())->text());

    /* Ask the user if he/she want to delete these columns */
    int ret = QMessageBox::question(this, "Delete", "You you want to delete the following columns? " + columNamesList.join(","));
    if(ret == QMessageBox::No)
        return;

    /* Delete rows in database */
    if(database->deleteColumns(columNamesList)){
        /* Remove columns as well */
        for(int i = selectedColumns.length() - 1 ; i >= 0; i--)
            ui->measurementTableWidget->removeColumn(selectedColumns.at(i).column());
    }else{
        QMessageBox::critical(this, "Delete", "You cannot delete the column: " + columNamesList.join(","));
        return;
    }
}


