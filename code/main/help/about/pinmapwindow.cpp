#include "pinmapwindow.h"
#include "ui_pinmapwindow.h"

PinMapWindow::PinMapWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PinMapWindow)
{
    ui->setupUi(this);
}

PinMapWindow::~PinMapWindow()
{
    delete ui;
}
