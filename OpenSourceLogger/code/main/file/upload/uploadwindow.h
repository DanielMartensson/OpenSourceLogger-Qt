#ifndef UPLOADWINDOW_H
#define UPLOADWINDOW_H

#include <QWidget>
#include "code/tools/database/database.h"

namespace Ui {
class UploadWindow;
}

class UploadWindow : public QWidget
{
    Q_OBJECT

public:
    explicit UploadWindow(QWidget *parent = nullptr, Database *database = nullptr);
    ~UploadWindow();

private slots:
    void on_uploadMeasurementPushButton_clicked();

    void on_loadCsvFilePushButton_clicked();

private:
    Ui::UploadWindow *ui;

    /* Upload to databse */
    Database *database;
    QString oldPath;
};

#endif // UPLOADWINDOW_H
