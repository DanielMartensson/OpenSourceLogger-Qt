#include "database_handling.h"

Database_handling::Database_handling(){}

Database_handling::Database_handling(QString SQL){
    this->qSqlDatabase = QSqlDatabase::addDatabase(SQL);
    if(!this->qSqlDatabase.isDriverAvailable(SQL)){
        QMessageBox::information(nullptr, "Driver", "Driver " + SQL + " is missing", QMessageBox::Ok);
    }
}

bool Database_handling::connect_SQL(const QString& hostname, const int port, const QString& schema_name, const QString& table_name, const QString& username, const QString& password){
    /* Set connections */
    this->qSqlDatabase.setHostName(hostname);
    this->qSqlDatabase.setPort(port);
    this->qSqlDatabase.setDatabaseName(schema_name);
    this->qSqlDatabase.setUserName(username);
    this->qSqlDatabase.setPassword(password);

    /* Open the database */
    if(this->qSqlDatabase.open()){
        /* Create table if not exist */
        create_table(table_name);
        return true;
    }
    return false;
}

void Database_handling::create_table(const QString &table_name){
    /* Check if table exist */
    QSqlQuery query;
    /* Create the table if it's not existing */
    query.exec("CREATE TABLE " + table_name + "(" + COLUMN_NAMES[0] + " BIGINT PRIMARY KEY)");
    /* Import columns, if they don't existing */
    for(int i = 0; i < COLUMN_NAMES.length(); i++){
        QString data_type = "";
        switch (DATA_TYPES[i]) {
        case BOOL:
            data_type = "BOOL"; /* True or false */
            break;
        case TINYINT:
            data_type = "TINYINT"; /* 8-bit */
            break;
        case SMALLINT:
            data_type = "SMALLINT"; /* 16-bit */
            break;
        case BIGINT:
            data_type = "BIGINT"; /* 64-bit */
            break;
        case FLOAT:
            data_type = "FLOAT"; /* 32-bit */
            break;
        }
        /* If column already exist, nothing happens */
        query.exec("ALTER TABLE " + table_name + " ADD " + COLUMN_NAMES[i] + " " + data_type + ";");
    }
}

void Database_handling::disconnect_SQL() {
    this->qSqlDatabase.close();
}
