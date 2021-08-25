#ifndef DATABASE_HANDLING_H
#define DATABASE_HANDLING_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

enum{
    BOOL = 0,
    TINYINT = 1,
    SMALLINT = 2,
    BIGINT = 3,
    FLOAT = 4
};

const static QStringList COLUMN_NAMES = {"ID","Day","Hour","Minute","Second","Millisecond","ADC0","ADC1","ADC2","ADC3","ADC4","ADC5","ADC6","ADC7","ADC8","ADC9","ADC10","ADC11","DADC0","DADC1","DADC2","DADC3","DADC4","I0","I1","I2","I3","I4","I5","I6","I7","E0","E1","IC0","IC1","DAC0","DAC1","DAC2","PWM0","PWM1","PWM2","PWM3","PWM4","PWM5","PWM6","PWM7"};
const static int DATA_TYPES[] = {BIGINT, TINYINT, TINYINT, TINYINT, TINYINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, BOOL, BOOL, BOOL, BOOL, BOOL, BOOL, BOOL, BOOL, SMALLINT, SMALLINT, FLOAT, FLOAT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT, SMALLINT};

class Database_handling {

public:
    Database_handling();
    Database_handling(QString SQL);
    bool connect_SQL(const QString& hostname, const int port, const QString& schema_name, const QString& table_name, const QString& username, const QString& password);
    void disconnect_SQL();
private:
    QSqlDatabase qSqlDatabase;
    void create_table(const QString &table_name);
};

#endif // DATABASE_HANDLING_H
