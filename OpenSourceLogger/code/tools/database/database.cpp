#include "database.h"
#include <QSqlQuery>

Database::Database()
{

}

bool Database::connectToDatabase(QString databaseDriver, QString hostname, QString databaseName, QString username, QString password, int port){
    /* Set the connection parameters */
    qSqlDatabase = QSqlDatabase::addDatabase(databaseDriver);
    qSqlDatabase.setHostName(hostname);
    qSqlDatabase.setDatabaseName(databaseName);
    qSqlDatabase.setUserName(username);
    qSqlDatabase.setPassword(password);
    qSqlDatabase.setPort(port);

    /* Open the connection */
    if(qSqlDatabase.open())
        return true;
    else
        return false;
}

bool Database::isConnectedToDatabase(){
    return qSqlDatabase.isOpen();
}

void Database::disconnectFromDatabase(){
    qSqlDatabase.close();
}


void Database::createTable(QStringList measurementColumNames){
    /* Create the query */
    QSqlQuery query;

    /* Create the ID columns */
    if(query.exec("CREATE TABLE " + QString(TABLE_NAME) + "(" + QString(DATABASE_ID) + " BIGINT NOT NULL AUTO_INCREMENT PRIMARY KEY)")){
        /* Measurement ID */
        query.exec("ALTER TABLE " + QString(TABLE_NAME) + " ADD " + QString(MEASUREMENT_ID) + " BIGINT");
    }

    /* Other columns */
    foreach(QString columnName, measurementColumNames){
        QString dataType;
        if(columnName == MEASUREMENT_DATE_TIME){
            if(qSqlDatabase.driverName() == "QMYSQL" || qSqlDatabase.driverName() == "MARIADB")
                dataType = "DATETIME(3)"; /* 3 for milliseconds */
            else if(qSqlDatabase.driverName() == "QODBC")
                dataType = "DATETIME";
        }else if(columnName == MEASUREMENT_COMMENT){
            dataType = "VARCHAR(255)";
        }else{
            dataType = "FLOAT";
        }

        /* Add a new column */
        query.exec("ALTER TABLE " + QString(TABLE_NAME) + " ADD " + columnName + " " + dataType);
    }
}

QVariant Database::getLastValueAtColumnName(QString columnName){
    /* Create the query */
    QString lastValueQuery;
    if(qSqlDatabase.driverName() == "QMYSQL" || qSqlDatabase.driverName() == "MARIADB")
        lastValueQuery = "SELECT " + columnName + " FROM " + QString(TABLE_NAME) + " ORDER BY ID DESC LIMIT 1";
    else if(qSqlDatabase.driverName() == "QODBC")
        lastValueQuery = "SELECT TOP 1 " + columnName + " FROM " + QString(TABLE_NAME) + " ORDER BY ID DESC";


    /* Call the query and get the value */
    QSqlQuery query;
    query.exec(lastValueQuery);
    if(query.next()){
        return query.value(query.record().indexOf(columnName));
    }else{
        QVariant value(0);
        return value;
    }
}

bool Database::insertRow(long measurementID, QList<QStringList> measurementValueList, QStringList measurementColumNames){
    /* Create the query */
    QString insertRowQuery;

    /* Important to set the ID's first */
    insertRowQuery = "INSERT INTO " + QString(TABLE_NAME) + " (" + QString(DATABASE_ID) + "," + QString(MEASUREMENT_ID);

    /* Then set the measurement column names */
    foreach(QString measurementColumName, measurementColumNames)
        insertRowQuery += "," + measurementColumName;

    /* Insert the ID values */
    insertRowQuery += ") VALUES ";

    /* Then set the measurement column names */
    for(int i = 0; i < measurementValueList.length(); i++){
        /* Create the ID fields first */
        insertRowQuery += "(0," + QString::number(measurementID);

        /* Then create the rest of the values */
        QString restOfTheValues;
        foreach(QString measurementValue, measurementValueList.at(i)){
            /* If it's not a number, then it is a string - simple logic */
            bool ok;
            float value = measurementValue.toFloat(&ok);
            if(ok){
                restOfTheValues += "," + QString::number(value);
            }else{
                restOfTheValues += ",'" + measurementValue + "'";
            }
        }

        /* Combine */
        if(i < measurementValueList.length() - 1)
            insertRowQuery += restOfTheValues + "),";
        else
            insertRowQuery += restOfTheValues + ")";
    }

    /* Send to database */
    QSqlQuery query;
    return query.exec(insertRowQuery);
}

QList<QVariant> Database::listItemsInsideAColumnButAvoidDuplicates(QString columnName){
    QSqlQuery query("SELECT DISTINCT " + QString(columnName) + " FROM " + QString(TABLE_NAME));
    QList<QVariant> columnList;
    while (query.next()){
        int index = query.record().indexOf(columnName);
        columnList.append(query.value(index));
    }
    return columnList;
}

QStringList Database::getColumnNames(){
    QSqlRecord record = qSqlDatabase.record(TABLE_NAME);
    QStringList colunNames;
    for(int i = 0; i < record.count(); i++)
        colunNames.append(record.fieldName(i));
    return colunNames;
}

QList<QList<QVariant>> Database::getMeasurementRowsByMeasurementID(QString measurementID){
    QSqlQuery query;
    query.exec("SELECT * FROM " + QString(TABLE_NAME) + " WHERE " + QString(MEASUREMENT_ID) + " = " + measurementID);
    QStringList columnNames = getColumnNames();
    QList<QList<QVariant>> measurements;
    while(query.next()){
        /* Save each row */
        QList<QVariant> row;
        foreach(QString columnName, columnNames){
            int fieldNumber = query.record().indexOf(columnName);
            row.append(query.value(fieldNumber));
        }
        measurements.append(row);
    }
    return measurements;
}

bool Database::deleteRowsBetweenID(long from, long to){
    QSqlQuery query;
    return query.exec("DELETE FROM " + QString(TABLE_NAME) + " WHERE " + QString(DATABASE_ID) + " BETWEEN " + QString::number(from) + " AND " + QString::number(to));
}

bool Database::deleteRowByID(long ID){
    QSqlQuery query;
    return query.exec("DELETE FROM " + QString(TABLE_NAME) + " WHERE " + QString(DATABASE_ID) + " = " + QString::number(ID));
}

bool Database::deleteColumns(QStringList columnNames){
    QSqlQuery query;
    if(qSqlDatabase.driverName() == "QMYSQL" || qSqlDatabase.driverName() == "MARIADB"){
        QString drops;
        for(int i = 0; i < columnNames.length(); i++)
            if(i < columnNames.length() - 1)
                drops += "DROP " + columnNames.at(i) + ", ";
            else
                drops += "DROP " + columnNames.at(i);
        return query.exec("ALTER TABLE " + QString(TABLE_NAME) + " " + drops);
    }else if(qSqlDatabase.driverName() == "QODBC"){
        QString drops;
        for(int i = 0; i < columnNames.length(); i++)
            if(i < columnNames.length() - 1)
                drops += columnNames.at(i) + ", ";
            else
                drops += columnNames.at(i);
        return query.exec("ALTER TABLE " + QString(TABLE_NAME) + " DROP COLUMN " + drops);
    }
    return false;
}
