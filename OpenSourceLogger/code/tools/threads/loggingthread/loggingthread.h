#ifndef LOGGINGTHREAD_H
#define LOGGINGTHREAD_H

#include <QObject>
#include <QThread>
#include "code/main/edit/measurement/measurementlistwindow.h"

class LoggingThread : public QThread
{
    Q_OBJECT
public:
    LoggingThread(MeasurementListWindow *measurementListWindow = nullptr);

signals:
    void signalUpdateChartWithMeasurements(QList<float> &measurementValueList, QStringList &measurementNameList);
    void signalCreatePlot(int howManyMeasurements, int showSamples);

public slots:
    void slotSetLoggingThreadActive(bool active, int sampleTime, int showSamples);

private:
    /* Constructor fields */
    MeasurementListWindow *measurementListWindow;

    /* Other fields */
    bool loggingThreadActive;
    int sampleTime;
    int showSamples;

    /* Other functions */
    void run();
};

#endif // LOGGINGTHREAD_H
