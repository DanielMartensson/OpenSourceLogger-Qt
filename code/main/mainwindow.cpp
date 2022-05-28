#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <stdlib.h>     /* srand, rand */
#include <QMetaType>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Create message service thread */
    messageServiceThread = new MessageServiceThread(&j1939, &usb);

    /* Create measurement list window */
    measurementListWindow = new MeasurementListWindow(nullptr, messageServiceThread);

    /* Create CAN settings window */
    canSettingsWindow = new CANsettingsWindow(nullptr, &j1939);

    /* Create logging thread */
    loggingThread = new LoggingThread(measurementListWindow);

    /* Create call period thread */
    callPeriodThread = new CallPeriodThread();

    /* Create control window */
    controlWindow = new ControlWindow(nullptr, &j1939, messageServiceThread, loggingThread, callPeriodThread);

    /* Create the connection window */
    connectionWindow = new ConnectionWindow(nullptr, &database, &usb, &j1939, messageServiceThread);

    /* Create the upload window */
    uploadWindow = new UploadWindow(nullptr, &database);

    /* Create the view window */
    viewWindow = new ViewWindow(nullptr, &database);

    /* Create the STM32 window */
    stm32Window = new STM32Window(nullptr, messageServiceThread);

    /* Set connections for this window */
    configureThreadConnectionsForMainWindow();

    /* Set plot settings */
    setPlotSettingsForMainWindow();

    /* Start the never ending threads */
    loggingThread->start();
    messageServiceThread->start();
    callPeriodThread->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::closeEvent(QCloseEvent *event){
    Q_UNUSED(event)
    on_actionExit_triggered();
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionControl_triggered()
{
    controlWindow->show();
}


void MainWindow::on_actionMeasurement_triggered()
{
    measurementListWindow->show();
}


void MainWindow::on_actionConnection_triggered()
{
    connectionWindow->show();
}


void MainWindow::on_actionCAN_triggered()
{
    canSettingsWindow->show();
}


void MainWindow::on_actionUpload_triggered()
{
    uploadWindow->show();
}

void MainWindow::on_actionView_triggered()
{
    viewWindow->show();
}

void MainWindow::on_actionSTM32PLC_triggered()
{
    stm32Window->show();
}

void MainWindow::on_actionAbout_triggered()
{
    AboutWindow *aboutWindow = new AboutWindow();
    aboutWindow->show();
}

void MainWindow::on_actionPin_map_triggered()
{
    PinMapWindow *pinMapWindow = new PinMapWindow();
    pinMapWindow->show();
}



void MainWindow::slotCreatePlot(int howManyMeasurements, int showSamples){
    /* Clear the plot */
    ui->plot->clearGraphs();
    ui->plot->legend->clear();
    ui->plot->legend->setVisible(true);
    this->showSamples = showSamples;
    countedSamples = 0;

    /* Loop the show in plot variable */
    for(int i = 0; i < howManyMeasurements; i++){
        /* Create a graph */
        ui->plot->addGraph();

        /* Set the 8-bit color at the line and legend as well */
        int r = rand() % 255;
        int g = rand() % 255;
        int b = rand() % 255;
        ui->plot->graph(i)->setPen(QPen(QColor(r, g, b), 3));
    }

    /* Updates the legends */
    ui->plot->replot();
}


void MainWindow::slotUpdateChartWithMeasurements(QList<float> &measurementValueList, QStringList &measurementNameList){
    for(int i = 0; i < measurementValueList.length(); i++){
        /* Remove the first point */
        if(ui->plot->graph(i)->data()->size() >= showSamples){
            double sortKey = ui->plot->graph(i)->data()->at(0)->sortKey();
            ui->plot->graph(i)->data()->remove(sortKey);
        }
        /* Set data value */
        float value = measurementValueList.at(i);
        ui->plot->graph(i)->addData(countedSamples, value);

        /* Set legends with the value */
        ui->plot->graph(i)->setName(measurementNameList.at(i) + ":" + QString::number(value));
    }

    /* Rescale */
    if(autoScale)
        ui->plot->yAxis->rescale();
    ui->plot->xAxis->rescale();

    /* Replot */
    ui->plot->replot();

    /* Count the samples */
    countedSamples++;
}

void MainWindow::slotSetAutoScaleAndYAxisLimits(bool autoScale, float minYAxis, float maxYAxis){
    this->autoScale = autoScale;
    ui->plot->yAxis->setRange(minYAxis, maxYAxis);
}


void MainWindow::configureThreadConnectionsForMainWindow(){
    /* Send signals from LoggingThread to MainWindow */
    connect(loggingThread, &LoggingThread::signalCreatePlot, this, &MainWindow::slotCreatePlot);
    connect(loggingThread, &LoggingThread::signalUpdateChartWithMeasurements, this, &MainWindow::slotUpdateChartWithMeasurements);

    /* Send signals from view window to MainWindow */
    connect(viewWindow, &ViewWindow::signalCreatePlot, this, &MainWindow::slotCreatePlot);
    connect(viewWindow, &ViewWindow::signalUpdateChartWithMeasurements, this, &MainWindow::slotUpdateChartWithMeasurements);

    /* Send signal from Control window to main window */
    connect(controlWindow, &ControlWindow::signalSetAutoScaleAndYAxisLimits, this, &MainWindow::slotSetAutoScaleAndYAxisLimits);
}

void MainWindow::setPlotSettingsForMainWindow(){
    /* This linde only make one empty chart so it looks like a big large plot at the beginning of the start up */
    ui->plot->addGraph();

    /* Tell plot that there are one sub layout at index row = 1 and column = 0 */
    ui->plot->plotLayout()->addElement(1, 0, &subLayout);

    /* change the fill order of the legend, so it's filled left to right in columns */
    ui->plot->legend->setFillOrder(QCPLegend::foColumnsFirst);

    /* set legend's row stretch factor very small so it ends up with minimum height */
    ui->plot->plotLayout()->setRowStretchFactor(1, 0.001);

    /* Add the legends there inside the sub layout */
    subLayout.addElement(0, 0, ui->plot->legend);
    subLayout.setMargins(QMargins(5, 0, 5, 5));

    /* initialize random seed: */
    srand(time(NULL));
}
