#ifndef VIEWWINDOW_H
#define VIEWWINDOW_H

#include <QWidget>
#include "code/tools/database/database.h"

namespace Ui {
class ViewWindow;
}

class ViewWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ViewWindow(QWidget *parent = nullptr, Database *database = nullptr);
    ~ViewWindow();

signals:
    void signalUpdateChartWithMeasurements(QList<float> &measurementValueList, QStringList &measurementNameList);
    void signalCreatePlot(int howManyMeasurements, int showSamples);

private slots:
    void on_plotDataPushButton_clicked();

    void on_downloadDataPushButton_clicked();

    void on_deleteDataPushButton_clicked();

    void on_measurementIDComboBox_currentTextChanged(const QString &arg1);

    void on_fromRowSpinBox_valueChanged(int arg1);

    void on_toRowSpinBox_valueChanged(int arg1);

    void on_jumpRowSpinBox_valueChanged(int arg1);

private:
    Ui::ViewWindow *ui;

    /* Constructor fields */
    Database *database;

    /* Save old path */
    QString oldPath;

    /* Functions */
    void showEvent(QShowEvent *event);
    bool avoidTheseMeasurementNames(QString measurementName);
};

#endif // VIEWWINDOW_H
