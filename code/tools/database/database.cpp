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


void Database::createTable(QString tableName, QList<QPair<QString, QString>> measurementColums){
    /* Create the query object */
    QSqlQuery query;

    /* Create columns */
    for(int i = 0; i < measurementColums.length(); i++){
        /* Get the columns */
        QPair<QString, QString> column = measurementColums.at(i);
        QString columnName = column.first;
        QString columnDataType = column.second;
        QString queryCommand;

        /* Create the columns */
        if(columnName == TABLE_ID){
            queryCommand = "CREATE TABLE " + tableName + " (" + columnName + " " + columnDataType + " NOT NULL AUTO_INCREMENT PRIMARY KEY)";
        }else{
            queryCommand = "ALTER TABLE " + tableName + " ADD " + columnName + " " + columnDataType;
        }

        /* Add a new column */
        query.exec(queryCommand);
    }
}

QVariant Database::getLastValueAtColumnName(QString columnName, QString tableName){
    /* Create the query */
    QString lastValueQuery;
    if(qSqlDatabase.driverName() == "QMYSQL" || qSqlDatabase.driverName() == "MARIADB")
        lastValueQuery = "SELECT " + columnName + " FROM " + tableName + " ORDER BY ID DESC LIMIT 1";
    else if(qSqlDatabase.driverName() == "QODBC")
        lastValueQuery = "SELECT TOP 1 " + columnName + " FROM " + tableName + " ORDER BY ID DESC";


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

bool Database::insertRow(QString tableName, long measurementID, QList<QStringList> values, QStringList columns){
    /* Create the query */
    QString insertRowQuery;

    /* Important to set the ID's first */
    insertRowQuery = "INSERT INTO " + tableName + " (" + QString(TABLE_ID) + "," + QString(MEASUREMENT_ID);

    /* Then set the measurement column names */
    foreach(QString measurementColumName, columns)
        insertRowQuery += "," + measurementColumName;

    /* Insert the ID values */
    insertRowQuery += ") VALUES ";

    /* Then set the measurement column names */
    for(int i = 0; i < values.length(); i++){
        /* Create the ID fields first */
        insertRowQuery += "(0," + QString::number(measurementID);

        /* Then create the rest of the values */
        QString restOfTheValues;
        foreach(QString value, values.at(i)){
            /* If it's not a number, then it is a string - simple logic */
            bool ok;
            float valueFloat = value.toFloat(&ok);
            if(ok){
                restOfTheValues += "," + QString::number(valueFloat);
            }else{
                restOfTheValues += ",'" + value + "'";
            }
        }

        /* Combine */
        if(i < values.length() - 1)
            insertRowQuery += restOfTheValues + "),";
        else
            insertRowQuery += restOfTheValues + ")";
    }

    /* Send to database */
    QSqlQuery query;
    return query.exec(insertRowQuery);
}

QList<QVariant> Database::listItemsInsideAColumnButAvoidDuplicates(QString tableName, QString columnName){
    QSqlQuery query("SELECT DISTINCT " + QString(columnName) + " FROM " + tableName);
    QList<QVariant> columnList;
    while (query.next()){
        int index = query.record().indexOf(columnName);
        columnList.append(query.value(index));
    }
    return columnList;
}

QStringList Database::getColumnNamesByMeasurementID(QString tableName, QString measurementID){
    QSqlQuery query;
    query.exec("SELECT * FROM " + tableName + " WHERE " + QString(MEASUREMENT_ID) + " = " + measurementID);
    QStringList colunmNames;
    while(query.next()){
        int columnCount = query.record().count();
        /* Avoid ID and measurement ID */
        for(int i = 2; i < columnCount; i++){
            if(!query.value(i).isNull())
                colunmNames.append(query.value(i).toString());
        }
    }
    return colunmNames;
}

QList<QList<QVariant>> Database::getMeasurementRowsByMeasurementID(QString tableName, QString measurementID){
    QSqlQuery query;
    query.exec("SELECT * FROM " + tableName + " WHERE " + QString(MEASUREMENT_ID) + " = " + measurementID);
    QList<QList<QVariant>> measurements;
    while(query.next()){
        QList<QVariant> row;
        /* Avoid ID and measurement ID */
        for(int i = 2; i < query.record().count(); i++){
            if(!query.value(i).isNull())
                row.append(query.value(i));
        }
        measurements.append(row);
    }
    return measurements;
}

bool Database::deleteRowsBetweenID(QString tableName, long from, long to){
    QSqlQuery query;
    return query.exec("DELETE FROM " + tableName + " WHERE " + QString(TABLE_ID) + " BETWEEN " + QString::number(from) + " AND " + QString::number(to));
}

bool Database::deleteRowsBetweenDateTime(QString tableName, QString from, QString to){
    QSqlQuery query;
    query.exec("SELECT " + QString(TABLE_ID) + " FROM " + tableName + " WHERE " + QString(MEASUREMENT_DATE_TIME) + " = '" + from + "'");
    query.next();
    long fromID = query.record().value(TABLE_ID).toLongLong();
    query.exec("SELECT " + QString(TABLE_ID) + " FROM " + tableName + " WHERE " + QString(MEASUREMENT_DATE_TIME) + " = '" + to + "'");
    query.next();
    long toID = query.record().value(TABLE_ID).toLongLong();
    return deleteRowsBetweenID(tableName, fromID, toID);
}

bool Database::deleteRowByID(QString tableName, long ID){
    QSqlQuery query;
    return query.exec("DELETE FROM " + tableName + " WHERE " + QString(TABLE_ID) + " = " + QString::number(ID));
}

bool Database::deleteRowByDateTime(QString tableName, QString dateTime){
    QSqlQuery query;
    query.exec("SELECT " + QString(TABLE_ID) + " FROM " + tableName + " WHERE " + QString(MEASUREMENT_DATE_TIME) + " = '" + dateTime + "'");
    query.next();
    long ID = query.record().value(TABLE_ID).toLongLong();
    return deleteRowByID(tableName, ID);
}

bool Database::deleteRowByMeasurementID(QString tableName, long ID){
    QSqlQuery query;
    return query.exec("DELETE FROM " + tableName + " WHERE " + QString(MEASUREMENT_ID) + " = " + QString::number(ID));
}
