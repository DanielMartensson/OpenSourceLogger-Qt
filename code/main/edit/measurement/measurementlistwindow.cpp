#include "measurementlistwindow.h"
#include "ui_measurementlistwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include "code/tools/json/json.h"

MeasurementListWindow::MeasurementListWindow(QWidget *parent, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::MeasurementListWindow),
    messageServiceThread(messageServiceThread)
{
    ui->setupUi(this);

    /* Set the items for the measurement source combo box */
    for(int i = 0; i < MAX_ADC; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_ADC + QString::number(i));
    for(int i = 0; i < MAX_DADC; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_DADC + QString::number(i));
    for(int i = 0; i < MAX_ENCODER; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_ENCODER + QString::number(i));
    for(int i = 0; i < MAX_INPUT_CAPTURE; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_INPUT_CAPTURE + QString::number(i));
    for(int i = 0; i < MAX_DIGITAL_INPUT; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_DIGITAL_INPUT + QString::number(i));
    for(int i = 0; i < MAX_PWM; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_PWM + QString::number(i));
    for(int i = 0; i < MAX_DAC; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_DAC + QString::number(i));
    for(int i = 0; i < MAX_AUXILIARY_VALVE_COMMAND_STANDARD_FLOW; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_AUXILIARY_VALVE + QString::number(i));
    for(int i = 0; i < MAX_GENERAL_PURPOSE_VALVE_COMMAND; i++)
        measurementSourcesTypes.append(MEASUREMENT_SOURCE_GENERAL_VALVE + QString::number(i));
    /* Add more here */

    /* Load the previous settings */
    Json json;
    QJsonObject object = json.loadObject("MeasurementListWindow.json");
    if(!object.isEmpty()){
        /* Set the line edits */
        ui->measurementCommentLineEdit->setText(object["measurementCommentLineEdit"].toString());
        ui->csvSaveFileLocationLineEdit->setText(object["csvSaveFileLocationLineEdit"].toString());

        /* Set the list */
        QJsonArray measurementSourceTypeList = object["measurementSourceTypeList"].toArray();
        QJsonArray measurementNameList = object["measurementNameList"].toArray();
        QJsonArray minRawValueList = object["minRawValueList"].toArray();
        QJsonArray maxRawValueList = object["maxRawValueList"].toArray();
        QJsonArray minMeasurementList = object["minMeasurementList"].toArray();
        QJsonArray maxMeasurementList = object["maxMeasurementList"].toArray();
        int length = measurementSourceTypeList.size();
        for(int i = 0; i < length; i++){
            QString measurementSourceType = measurementSourceTypeList.at(i).toString();
            QString measurementName = measurementNameList.at(i).toString();
            float minRawValue = minRawValueList.at(i).toDouble();
            float maxRawValue = maxRawValueList.at(i).toDouble();
            float minMeasurement = minMeasurementList.at(i).toDouble();
            float maxMeasurement = maxMeasurementList.at(i).toDouble();
            addMeasurementToList(measurementSourceType, minRawValue, maxRawValue, minMeasurement, maxMeasurement, measurementName);
        }
    }
}


MeasurementListWindow::~MeasurementListWindow()
{
    delete ui;
}

void MeasurementListWindow::closeEvent(QCloseEvent *event){
    Q_UNUSED(event)
    if(ui->csvSaveFileLocationLineEdit->text().length() == 0)
        QMessageBox::warning(this, "Missing logging file", "Don't forget to add a measurement file for measurement");

    /* Save */
    Json json;
    QJsonObject object;
    object["measurementCommentLineEdit"] = ui->measurementCommentLineEdit->text();
    object["csvSaveFileLocationLineEdit"] = ui->csvSaveFileLocationLineEdit->text();

    /* Create arrays */
    QJsonArray measurementSourceTypeList;
    QJsonArray measurementNameList;
    QJsonArray minRawValueList;
    QJsonArray maxRawValueList;
    QJsonArray minMeasurementList;
    QJsonArray maxMeasurementList;
    for(int i = 0; i < measurementList.length(); i++){
        measurementSourceTypeList.append(measurementList.at(i)->getMeasurementSourceType());
        measurementNameList.append(measurementList.at(i)->getMeasurementName());
        minRawValueList.append(measurementList.at(i)->getMinRawValue());
        maxRawValueList.append(measurementList.at(i)->getMaxRawValue());
        minMeasurementList.append(measurementList.at(i)->getMinMeasurement());
        maxMeasurementList.append(measurementList.at(i)->getMaxMeasurement());
    }
    object["measurementSourceTypeList"] = measurementSourceTypeList;
    object["measurementNameList"] = measurementNameList;
    object["minRawValueList"] = minRawValueList;
    object["maxRawValueList"] = maxRawValueList;
    object["minMeasurementList"] = minMeasurementList;
    object["maxMeasurementList"] = maxMeasurementList;

    /* Save the object */
    json.saveObject(object, "MeasurementListWindow.json");
}

void MeasurementListWindow::on_addMeasurementPushButton_clicked()
{
    /* Check if we have too much */
    int maxMeasurementList = MAX_ADC + MAX_DADC + MAX_DIGITAL_INPUT + MAX_ENCODER + MAX_INPUT_CAPTURE + MAX_DAC + MAX_PWM + MAX_AUXILIARY_VALVE_COMMAND_STANDARD_FLOW + MAX_GENERAL_PURPOSE_VALVE_COMMAND;
    if(ui->measurementListWidget->count() >= maxMeasurementList)
        return;

    /* Open up a dialog and ask for measurement source */
    bool ok;
    QString measurementSourceType = QInputDialog::getItem(this, "Measurement source", "Select source:", measurementSourcesTypes, 0, false, &ok);
    if(!ok)
        return;

    /* Add to list */
    addMeasurementToList(measurementSourceType, 0.0f, 0.0f, 0.0f, 0.0f, measurementSourceType);
}

void MeasurementListWindow::addMeasurementToList(QString measurementSourceType, float minRawValue, float maxRawValue, float minMeasurement, float maxMeasurement, QString measurementName){
    /* Remove from the combo box so you cannot select it twice */
    for(int i = 0; i < measurementSourcesTypes.length(); i++)
        if(measurementSourceType == measurementSourcesTypes.at(i))
            measurementSourcesTypes.remove(i);

    /* Create a button for the cell - We set the measurement source type as measurement list name - Then the user can edit later */
    QListWidgetItem *measurementListName = new QListWidgetItem(measurementSourceType);

    /* Add to the measurement list */
    measurementList.append(new MeasurementSourceWindow(nullptr, measurementListName, messageServiceThread, measurementSourceType, minRawValue, maxRawValue, minMeasurement, maxMeasurement, measurementName));

    /* Add to the table widget */
    ui->measurementListWidget->addItem(measurementListName);
}

void MeasurementListWindow::on_deleteMeasurementPushButton_clicked()
{
    foreach(QModelIndex index, ui->measurementListWidget->selectionModel()->selectedRows()){
        /* Get the index row */
        int indexOfSelectedRow = index.row();

        /* Get measurement source type and add it back */
        QString measurementSourcesType = measurementList.at(indexOfSelectedRow)->getMeasurementSourceType();
        measurementSourcesTypes.append(measurementSourcesType);

        /* Delete the measurement item */
        measurementList.removeAt(indexOfSelectedRow);

        /* Delete selcted item widget */
        ui->measurementListWidget->model()->removeRow(indexOfSelectedRow);
    }
}


int MeasurementListWindow::getMeasurementLengthList(){
    return measurementList.size();
}


QString MeasurementListWindow::getMeasurementComment(){
    return ui->measurementCommentLineEdit->text();
}


bool MeasurementListWindow::getMeasurementNameAndValue(int row, QString &measurementName, float &measurementValue){
    return measurementList.at(row)->getMeasurementNameAndValue(measurementName, measurementValue);
}


QString MeasurementListWindow::getCsvFileSavePathLocation(){
    return ui->csvSaveFileLocationLineEdit->text();
}

void MeasurementListWindow::on_measurementListWidget_doubleClicked(const QModelIndex &index)
{
    measurementList.at(index.row())->show();
}


void MeasurementListWindow::on_csvFileSaveLocationPushButton_clicked()
{
    /* Give the user a CSV file save location */
    QString filePath;
    if(oldPath.length() > 0)
        filePath = QFileDialog::getSaveFileName(nullptr, "Save the CSV file", oldPath, tr("Image Files (*.csv)"));
    else
        filePath = QFileDialog::getSaveFileName(nullptr, "Save the CSV file", "", tr("CSV Files (*.csv)"));
    if(filePath.length() > 0 && filePath.endsWith(".csv")){
        oldPath = QFileInfo(filePath).path();
        ui->csvSaveFileLocationLineEdit->setText(filePath);

        /* Check writing rights if we have right to create a file here */
        QFile csvFile(filePath);
        if(!csvFile.open(QFile::WriteOnly))
            QMessageBox::critical(this, "Fail", "CSV file location not saved");
        csvFile.close();
    }
}

