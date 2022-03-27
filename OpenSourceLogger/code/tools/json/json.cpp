#include "json.h"

Json::Json(){

}

void Json::saveObject(const QJsonObject& object, const QString& file_name){
    QFile file(file_name);
    file.open(QFile::WriteOnly);
    QJsonDocument document(object);
    file.write(document.toJson());
    file.close();

}

QJsonObject Json::loadObject(const QString& file_name){
    /* Read JSON file */
    QFile file(file_name);
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    QString val = file.readAll();
    file.close();

    /* Get JSON object */
    QJsonDocument doc = QJsonDocument::fromJson(val.toUtf8());
    return doc.object();
}

void Json::deleteObject(const QString& file_name){
    QFile file(file_name);
    file.remove();
}
