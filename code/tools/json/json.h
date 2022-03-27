#ifndef JSON_H
#define JSON_H

/* QT includes */
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QJsonArray>

class Json{
public:
    Json();
    void saveObject(const QJsonObject& object, const QString& file_name);
    QJsonObject loadObject(const QString& file_name);
    void deleteObject(const QString& file_name);
};

#endif // JSON_H
