#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/* Tools */
#include "../tools/database/database.h"
#include "../tools/usb/usb.h"
#include "../tools/qcustomplot/qcustomplot.h"
#include "../tools/threads/loggingthread/loggingthread.h"
#include "../tools/threads/messageservicethread/messageservicethread.h"
#include "../tools/threads/callperiodthread/callperiodthread.h"
#include "../tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"

/* Windows */
#include "action/control/controlwindow.h"
#include "edit/cansettings/cansettingswindow.h"
#include "edit/connection/connectionwindow.h"
#include "edit/measurement/measurementlistwindow.h"
#include "file/upload/uploadwindow.h"
#include "action/view/viewwindow.h"
#include "edit/stm32/stm32window.h"
#include "help/about/aboutwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionExit_triggered();

    void on_actionConnection_triggered();

    void on_actionControl_triggered();

    void on_actionCAN_triggered();

    void on_actionMeasurement_triggered();

    void slotUpdateChartWithMeasurements(QList<float> &measurementValueList, QStringList &measurementNameList);

    void slotSetAutoScaleAndYAxisLimits(bool autoScale, float minYAxis, float maxYAxis);

    void slotCreatePlot(int howManyMeasurements, int showSamples);

    void on_actionUpload_triggered();

    void on_actionView_triggered();

    void on_actionSTM32PLC_triggered();

    void on_actionAbout_triggered();

private:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;

    /* Tools */
    J1939 j1939;
    Database database;
    USB usb;
    LoggingThread *loggingThread;
    MessageServiceThread *messageServiceThread;
    CallPeriodThread *callPeriodThread;
    QCPLayoutGrid subLayout;

    /* Windows */
    ControlWindow *controlWindow;
    CANsettingsWindow *canSettingsWindow;
    ConnectionWindow *connectionWindow;
    MeasurementListWindow *measurementListWindow;
    UploadWindow *uploadWindow;
    ViewWindow *viewWindow;
    STM32Window *stm32Window;

    /* Other fields */
    int showSamples;
    int countedSamples;
    bool autoScale;

    /* Other functions */
    void configureThreadConnectionsForMainWindow();
    void setPlotSettingsForMainWindow();
};
#endif // MAINWINDOW_H
