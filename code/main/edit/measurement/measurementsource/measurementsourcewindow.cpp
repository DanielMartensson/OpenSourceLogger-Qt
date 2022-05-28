#include "measurementsourcewindow.h"
#include "ui_measurementsourcewindow.h"
#include "../measurementlistwindow.h"
#include <QRegularExpressionValidator>
#include "code/tools/database/database.h"

MeasurementSourceWindow::MeasurementSourceWindow(QWidget *parent, QListWidgetItem *measurementListName, MessageServiceThread *messageServiceThread, QString measurementSourceType, float minRawValue, float maxRawValue, float minMeasurement, float maxMeasurement, QString measurementName) :
    QWidget(parent),
    ui(new Ui::MeasurementSourceWindow),
    measurementListName(measurementListName),
    messageServiceThread(messageServiceThread),
    measurementSourceType(measurementSourceType)
{
    ui->setupUi(this);

    /* Set the text to the item */
    ui->measurementNameLineEdit->setText(measurementListName->text());
    this->setWindowTitle(measurementSourceType);

    /* Regex */
    QRegularExpression rx("^[A-Za-z0-9_]+$");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    ui->measurementNameLineEdit->setValidator(validator);

    /* Default values */
    ui->minMeasurementDoubleSpinBox->setValue(minMeasurement);
    ui->maxMeasurementDoubleSpinBox->setValue(maxMeasurement);
    ui->minRawValueDoubleSpinBox->setValue(minRawValue);
    ui->maxRawValueDoubleSpinBox->setValue(maxRawValue);
    ui->measurementNameLineEdit->setText(measurementName);
    measurementListName->setText(measurementName);
}

MeasurementSourceWindow::~MeasurementSourceWindow()
{
    delete ui;
}

void MeasurementSourceWindow::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event)

    /* Save the name */
    measurementListName->setText(ui->measurementNameLineEdit->text());
}


void MeasurementSourceWindow::getColumnNameMeasurementNameAndValue(QString &columName, QString &measurementName, float &measurementValue)
{
    /* Do first calibration */
    float minRawValue = ui->minRawValueDoubleSpinBox->value();
    float maxRawValue = ui->maxRawValueDoubleSpinBox->value();
    float minMeasurement = ui->minMeasurementDoubleSpinBox->value();
    float maxMeasurement = ui->maxMeasurementDoubleSpinBox->value();
    float div = maxRawValue - minRawValue != 0.0f ? maxRawValue - minRawValue : 1.0f;
    float slope = (maxMeasurement - minMeasurement)/div;
    float bias = maxMeasurement - slope*maxRawValue;
    columName = this->windowTitle(); /* This is the database name in the CSV files */

    /* Get the raw value */
    float rawValue = 0;
    for(int i = 0; i < ADC_LENGTH; i++){
        QString sourceType = ADC + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getAnalogSingleInput(i);
    }
    for(int i = 0; i < DADC_LENGTH; i++){
        QString sourceType = DADC + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getAnalogDifferentialInput(i);
    }
    for(int i = 0; i < ENCODER_LENGTH; i++){
        QString sourceType = ENCODER + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getEncoderInput(i);
    }
    for(int i = 0; i < IC_LENGTH; i++){
        QString sourceType = IC + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getInputCapture(i);
    }
    for(int i = 0; i < DI_LENGTH; i++){
        QString sourceType = DI + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getDigitalInput(i);
    }
    for(int i = 0; i < PWM_LENGTH; i++){
        QString sourceType = PWM+ QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getPWMControl(i);
    }
    for(int i = 0; i < DAC_LENGTH; i++){
        QString sourceType = DAC + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getAnalogSingleOutput(i);
    }
    for(int i = 0; i < AUXILIARY_VALVE_LENGTH; i++){
        QString sourceType = AUXILIARY_VALVE + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getAuxiliaryValveCommand(i);
    }
    for(int i = 0; i < GENERAL_VALVE_LENGTH; i++){
        QString sourceType = GENERAL_VALVE + QString::number(i);
        if(measurementSourceType == sourceType)
            rawValue = messageServiceThread->getGeneralPurposeValveCommand(i);
    }
    /* Add more here */

    /* Set the value y = k*x + m */
    measurementValue = slope*rawValue + bias;
    measurementName = ui->measurementNameLineEdit->text();
}

QString MeasurementSourceWindow::getMeasurementSourceType(){
    return measurementSourceType;
}

QString MeasurementSourceWindow::getMeasurementName(){
    return ui->measurementNameLineEdit->text();
}

float MeasurementSourceWindow::getMinRawValue(){
    return ui->minRawValueDoubleSpinBox->value();
}

float MeasurementSourceWindow::getMaxRawValue(){
    return ui->maxRawValueDoubleSpinBox->value();
}

float MeasurementSourceWindow::getMaxMeasurement(){
    return ui->maxMeasurementDoubleSpinBox->value();
}

float MeasurementSourceWindow::getMinMeasurement(){
    return ui->minMeasurementDoubleSpinBox->value();
}

void MeasurementSourceWindow::on_measurementNameLineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1)
    if(ui->measurementNameLineEdit->text().length() > 0){
        if(ui->measurementNameLineEdit->text().at(0).isDigit())
            ui->measurementNameLineEdit->setText("No_digits_first");
    }else{
        ui->measurementNameLineEdit->setText("You_need_to_have_a_name");
    }
}

