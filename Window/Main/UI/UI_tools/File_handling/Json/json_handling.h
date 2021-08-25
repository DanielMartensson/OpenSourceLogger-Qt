#ifndef JSON_HANDLING_H
#define JSON_HANDLING_H

#include <string>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>

class Json_handling{
public:
    Json_handling();
    void save_object(const QJsonObject& object, const QString& file_name);
    QJsonObject load_object(const QString& file_name);
    void delete_json(const QString& file_name);

};

#endif // JSON_HANDLING_H
