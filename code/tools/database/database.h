#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMetaObject>
#include <QMetaProperty>
#include <QSqlRecord>
#include <QDateTime>

#define TABLE_NAME "open_source_logger"
#define DATABASE_ID "id"
#define MEASUREMENT_ID "measurement_id"
#define MEASUREMENT_DATE_TIME "measurement_date_time"
#define MEASUREMENT_COMMENT "measurement_comment"

class Database
{

public:
    Database();

    /* Other functions */
    bool connectToDatabase(QString databaseDriver, QString hostname, QString databaseName, QString username, QString password, int port);
    bool isConnectedToDatabase();
    void disconnectFromDatabase();
    void createTable(QStringList measurementColumNames);
    bool insertRow(long measurementID, QList<QStringList> measurementValueList, QStringList measurementColumNames);
    QVariant getLastValueAtColumnName(QString columnName);
    QList<QVariant> listItemsInsideAColumnButAvoidDuplicates(QString columnName);
    QStringList getColumnNames();
    QList<QList<QVariant>> getMeasurementRowsByMeasurementID(QString measurementID);
    bool deleteRowsBetweenID(long from, long to);
    bool deleteRowByID(long ID);
    bool deleteColumns(QStringList columnNames);
private:
   QSqlDatabase qSqlDatabase;


};

#endif // DATABASE_H
