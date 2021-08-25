#include "json_handling.h"

Json_handling::Json_handling(){

}

void Json_handling::save_object(const QJsonObject& object, const QString& file_name){
    QFile file(file_name);
    file.open(QFile::WriteOnly);
    QJsonDocument document(object);
    file.write(document.toJson());
    file.close();

}

QJsonObject Json_handling::load_object(const QString& file_name){
    /* Read JSON file */
    QFile file(file_name);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString val = file.readAll();
    file.close();

    /* Get JSON object */
    QJsonDocument doc = QJsonDocument::fromJson(val.toUtf8());
    return doc.object();
}

void Json_handling::delete_json(const QString& file_name){
    QFile file(file_name);
    file.remove();
}


