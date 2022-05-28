#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMetaObject>
#include <QMetaProperty>
#include <QSqlRecord>
#include <QDateTime>
#include <QPair>

/* Database driver names */
#define QMYSQL "QMYSQL"
#define MARIADB "MARIADB"
#define QODBC "QODBC"

/* Table names */
#define MEASUREMENT_TABLE "measurement_table"
#define COLUMN_NAMES_TABLE "column_names_table"

/* Column names */
#define TABLE_ID "ID"
#define MEASUREMENT_ID "MEASUREMENT_ID"
#define MEASUREMENT_DATE_TIME "MEASUREMENT_DATE_TIME"
#define MEASUREMENT_COMMENT "MEASUREMENT_COMMENT"
#define ADC "ADC"
#define DADC "DADC"
#define DAC "DAC"
#define PWM "PWM"
#define DI "DI"
#define IC "IC"
#define ENCODER "ENCODER"
#define AUXILIARY_VALVE "AUXILIARY_VALVE"
#define GENERAL_VALVE "GENERAL_VALVE"

/* Column datatypes */
#define SQL_DATATYPE_LONG "BIGINT"
#define SQL_DATATYPE_FLOAT "FLOAT"
#define SQL_DATATYPE_STRING "VARCHAR(255)"
#define SQL_DATATYPE_DATETIME_QODBC "DATETIME"
#define SQL_DATETYPE_DATETIME_MYSQL "DATETIME(3)"
#define SQL_DATETYPE_DATETIME_MARIADB "DATETIME(3)"

/* Column length */
#define ADC_LENGTH 12
#define DADC_LENGTH 5
#define DAC_LENGTH 3
#define PWM_LENGTH 8
#define DI_LENGTH 10
#define IC_LENGTH 4
#define ENCODER_LENGTH 3
#define GENERAL_VALVE_LENGTH 1
#define AUXILIARY_VALVE_LENGTH 16


class Database
{

public:
    Database();

    /* Other functions */
    bool connectToDatabase(QString databaseDriver, QString hostname, QString databaseName, QString username, QString password, int port);
    bool isConnectedToDatabase();
    void disconnectFromDatabase();
    void createTable(QString tableName, QList<QPair<QString, QString>> measurementColums);
    bool insertRow(QString tableName, long measurementID, QList<QStringList> values, QStringList columns);
    QVariant getLastValueAtColumnName(QString columnName, QString tableName);
    QList<QVariant> listItemsInsideAColumnButAvoidDuplicates(QString tableName, QString columnName);
    QStringList getColumnNamesByMeasurementID(QString tableName, QString measurementID);
    QList<QList<QVariant>> getMeasurementRowsByMeasurementID(QString tableName, QString measurementID);
    bool deleteRowsBetweenID(QString tableName, long from, long to);
    bool deleteRowsBetweenDateTime(QString tableName, QString from, QString to);
    bool deleteRowByID(QString tableName, long ID);
    bool deleteRowByDateTime(QString tableName, QString dateTime);
    bool deleteRowByMeasurementID(QString tableName, long ID);
private:
   QSqlDatabase qSqlDatabase;


};

#endif // DATABASE_H
