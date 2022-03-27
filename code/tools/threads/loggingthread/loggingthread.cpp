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

        /* Create flags */
        bool hasPlotBeenCreated = false;
        bool hasCSVHeaderBeenCreated = false;

        /* Create new file */
        QString csvFileSavePathLocation = measurementListWindow->getCsvFileSavePathLocation();
        QFile csvFile(csvFileSavePathLocation);
        csvFile.open(QFile::WriteOnly);

        /* Fill the file with data */
        int listLength = measurementListWindow->getMeasurementLengthList();
        QString measurementComment = measurementListWindow->getMeasurementComment();
        while(loggingThreadActive){

            /* Clear the lists */
            measurementValueList.clear();
            measurementNameList.clear();

            /* Fill the list */
            for(int i = 0; i < listLength; i++){
                /* Get the values */
                float measurementValue;
                QString measurementName;
                bool isUsed = measurementListWindow->getMeasurementNameAndValue(i, measurementName, measurementValue);

                /* Check if it was not used */
                if(!isUsed)
                    continue;

                /* Insert into the lists */
                measurementValueList.append(measurementValue);
                measurementNameList.append(measurementName);
            }

            /* Create the plot */
            if(!hasPlotBeenCreated){
                emit signalCreatePlot(measurementNameList.length(), showSamples);
                hasPlotBeenCreated = true;
            }

            /* Update the plot - Both lists have the same length */
            emit signalUpdateChartWithMeasurements(measurementValueList, measurementNameList);

            /* Save the data to a file where currentDateTime, measurementComment, measurementHolderValues */
            QMap<QString, float> measurementHolderValues;
            for(int i = 0; i < measurementValueList.length(); i++){
                float measurementValue = measurementValueList.at(i);
                QString measurementName = measurementNameList.at(i);
                measurementHolderValues[measurementName] = measurementValue;
            }
            QString currentDateTime = QDateTime::currentDateTime().toString(Qt::DateFormat::ISODateWithMs);

            /* Save a CSV line - If yes, only write values, else write the header in form of text */
            QString csvRow = "";
            if(hasCSVHeaderBeenCreated){
                /* Add date time */
                csvRow += currentDateTime + ",";

                /* Add measurement comment */
                csvRow += measurementComment + ",";

                /* Add the measurements */
                QMapIterator<QString, float> mapIterator(measurementHolderValues);
                while (mapIterator.hasNext()) {
                    mapIterator.next();
                    if(mapIterator.hasNext())
                        csvRow += QString::number(mapIterator.value()) + ",";
                    else
                        csvRow += QString::number(mapIterator.value()) + "\n";
                }
            }else{
                /* Add date time */
                csvRow += QString(MEASUREMENT_DATE_TIME) + ",";

                /* Add measurement comment */
                csvRow += QString(MEASUREMENT_COMMENT) + ",";

                /* Add the measurements */
                QMapIterator<QString, float> mapIterator(measurementHolderValues);
                while (mapIterator.hasNext()) {
                    mapIterator.next();
                    if(mapIterator.hasNext())
                        csvRow += mapIterator.key() + ",";
                    else
                        csvRow += mapIterator.key() + "\n";
                }

                /* Flag */
                hasCSVHeaderBeenCreated = true;
            }

            /* Write line */
            csvFile.write(csvRow.toUtf8());

            /* Sleep */
            msleep(sampleTime);
        }

        /* Close file */
        csvFile.close();
    }
}

void LoggingThread::slotSetLoggingThreadActive(bool active, int sampleTime, int showSamples){
    loggingThreadActive = active;
    this->sampleTime = sampleTime;
    this->showSamples = showSamples;
}
