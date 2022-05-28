#include "loggingthread.h"
#include <QMap>
#include <QDateTime>
#include <QFile>
#include "code/tools/database/database.h"

LoggingThread::LoggingThread(MeasurementListWindow *measurementListWindow) :
    measurementListWindow(measurementListWindow)
{

}

void LoggingThread::run(){
    while(true){

        /* A wait statement */
        while(!loggingThreadActive){
            msleep(1000);
        }

        /* Create the lists */
        QVector<float> measurementValueList;
        QStringList measurementNameList;
        QStringList measurementColumnList;

        /* Create flags */
        bool hasPlotBeenCreated = false;
        bool hasCSVHeaderBeenCreated = false;

        /* Create file for measurement */
        QString measurementCsvFileSavePathLocation = measurementListWindow->getMeasurementCsvFileSavePathLocation();
        QFile csvFileMeasurement(measurementCsvFileSavePathLocation);
        csvFileMeasurement.open(QFile::WriteOnly);

        /* Fill the file with data */
        int listLength = measurementListWindow->getMeasurementListLength();
        QString measurementComment = measurementListWindow->getMeasurementComment();
        while(loggingThreadActive){

            /* Clear the lists */
            measurementValueList.clear();
            measurementNameList.clear();
            measurementColumnList.clear();

            /* Fill the list */
            for(int i = 0; i < listLength; i++){
                /* Get the values */
                float measurementValue;
                QString measurementName;
                QString columName;
                measurementListWindow->getColumnNameMeasurementNameAndValue(i, columName, measurementName, measurementValue);

                /* Insert into the lists */
                measurementValueList.append(measurementValue);
                measurementNameList.append(measurementName);
                measurementColumnList.append(columName);
            }

            /* Create the plot */
            if(!hasPlotBeenCreated){
                emit signalCreatePlot(measurementNameList.length(), showSamples);
                hasPlotBeenCreated = true;
            }

            /* Update the plot - Both lists have the same length */
            emit signalUpdateChartWithMeasurements(measurementValueList, measurementNameList);

            /* Get the date time */
            QString currentDateTime = QDateTime::currentDateTime().toString(Qt::DateFormat::ISODateWithMs);

            /* Save a CSV line - If yes, only write values, else write the header in form of text */
            QString measurementRow = "";
            if(hasCSVHeaderBeenCreated){
                /* Add date time */
                measurementRow += currentDateTime + ",";

                /* Add measurement comment */
                measurementRow += measurementComment + ",";

                /* Add the measurements values */
                for(int i = 0; i < measurementValueList.length(); i++){
                    if(i < measurementValueList.length() - 1)
                        measurementRow += QString::number(measurementValueList.at(i)) + ",";
                    else
                        measurementRow += QString::number(measurementValueList.at(i)) + "\n";
                }

            }else{
                /* Name of the columns */
                QString columnNames = QString(MEASUREMENT_DATE_TIME) + "," + QString(MEASUREMENT_COMMENT) + ",";
                for(int i = 0; i < measurementColumnList.length(); i++){
                    if(i < measurementColumnList.length() - 1)
                        columnNames += measurementColumnList.at(i) + ",";
                    else
                        columnNames += measurementColumnList.at(i) + "\n";
                }
                csvFileMeasurement.write(columnNames.toUtf8());

                /* Add date time */
                measurementRow += QString(MEASUREMENT_DATE_TIME) + ",";

                /* Add measurement comment */
                measurementRow += QString(MEASUREMENT_COMMENT) + ",";

                /* Add the measurements names */
                for(int i = 0; i < measurementNameList.length(); i++){
                    if(i < measurementNameList.length() - 1)
                        measurementRow += measurementNameList.at(i) + ",";
                    else
                        measurementRow += measurementNameList.at(i) + "\n";
                }

                /* Flag */
                hasCSVHeaderBeenCreated = true;
            }

            /* Write line */
            csvFileMeasurement.write(measurementRow.toUtf8());

            /* Sleep */
            msleep(sampleTime);
        }

        /* Close file */
        csvFileMeasurement.close();
    }
}

void LoggingThread::slotSetLoggingThreadActive(bool active, int sampleTime, int showSamples){
    loggingThreadActive = active;
    this->sampleTime = sampleTime;
    this->showSamples = showSamples;
}
