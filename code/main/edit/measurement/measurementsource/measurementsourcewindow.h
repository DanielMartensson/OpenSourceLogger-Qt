#ifndef MEASUREMENTSOURCEWINDOW_H
#define MEASUREMENTSOURCEWINDOW_H

#include <QWidget>
#include <QListWidgetItem>
#include "code/tools/threads/messageservicethread/messageservicethread.h"

namespace Ui {
class MeasurementSourceWindow;
}

class MeasurementSourceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MeasurementSourceWindow(QWidget *parent = nullptr, QListWidgetItem *measurementListName = nullptr, MessageServiceThread *messageServiceThread = nullptr, QString measurementSourceType = nullptr, float minRawValue = 0.0f, float maxRawValue = 0.0f, float minMeasurement = 0.0f, float maxMeasurement = 0.0f, QString measurementName = "");
    ~MeasurementSourceWindow();
    bool getMeasurementNameAndValue(QString &measurementName, float &measurementValue);
    QString getMeasurementSourceType();
    QString getMeasurementName();
    float getMinRawValue();
    float getMaxRawValue();
    float getMinMeasurement();
    float getMaxMeasurement();

private slots:
    void on_measurementNameLineEdit_textChanged(const QString &arg1);

private:
    Ui::MeasurementSourceWindow *ui;

    /* Other functions */
    void closeEvent(QCloseEvent *event);

    /* Other objects */
    QListWidgetItem *measurementListName;
    MessageServiceThread *messageServiceThread;
    QString measurementSourceType;

};

#endif // MEASUREMENTSOURCEWINDOW_H
