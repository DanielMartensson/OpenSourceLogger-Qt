#ifndef MEASUREMENTLISTWINDOW_H
#define MEASUREMENTLISTWINDOW_H

#include <QWidget>
#include <QInputDialog>
#include "measurementsource/measurementsourcewindow.h"
#include "code/tools/threads/messageservicethread/messageservicethread.h"

#define MEASUREMENT_SOURCE_ADC "ADC"
#define MEASUREMENT_SOURCE_DADC "DADC"
#define MEASUREMENT_SOURCE_ENCODER "Encoder"
#define MEASUREMENT_SOURCE_INPUT_CAPTURE "IC"
#define MEASUREMENT_SOURCE_DIGITAL_INPUT "DI"
#define MEASUREMENT_SOURCE_PWM "PWM"
#define MEASUREMENT_SOURCE_DAC "AO"
#define MEASUREMENT_SOURCE_AUXILIARY_VALVE "Auxiliary_valve"
#define MEASUREMENT_SOURCE_GENERAL_VALVE "General_valve"

namespace Ui {
class MeasurementListWindow;
}

class MeasurementListWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MeasurementListWindow(QWidget *parent = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~MeasurementListWindow();
    int getMeasurementLengthList();
    QString getMeasurementComment();
    bool getMeasurementNameAndValue(int row, QString &measurementName, float &measurementValue);
    QString getCsvFileSavePathLocation();

private slots:
    void on_measurementListWidget_doubleClicked(const QModelIndex &index);

    void on_addMeasurementPushButton_clicked();

    void on_deleteMeasurementPushButton_clicked();

    void on_csvFileSaveLocationPushButton_clicked();

private:
    /* UI */
    Ui::MeasurementListWindow *ui;

    /* Constructor fields */
    MessageServiceThread *messageServiceThread;

    /* Mesaurement list item holders */
    QList<MeasurementSourceWindow*> measurementList;
    QStringList measurementSourcesTypes;
    QInputDialog inputDialogComboBox;

    /* CSV path location */
    QString oldPath;

    /* Other functions */
    void closeEvent(QCloseEvent *event);
    void addMeasurementToList(QString measurementSourceType, float minRawValue, float maxRawValue, float minMeasurement, float maxMeasurement, QString measurementName);


};

#endif // MEASUREMENTLISTWINDOW_H
