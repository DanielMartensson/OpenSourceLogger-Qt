#ifndef MEASUREMENTLISTWINDOW_H
#define MEASUREMENTLISTWINDOW_H

#include <QWidget>
#include <QInputDialog>
#include "measurementsource/measurementsourcewindow.h"
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class MeasurementListWindow;
}

class MeasurementListWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MeasurementListWindow(QWidget *parent = nullptr, MessageServiceThread *messageServiceThread = nullptr);
    ~MeasurementListWindow();
    int getMeasurementListLength();
    QString getMeasurementComment();
    void getColumnNameMeasurementNameAndValue(int row, QString &columName, QString &measurementName, float &measurementValue);
    QString getMeasurementCsvFileSavePathLocation();

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
