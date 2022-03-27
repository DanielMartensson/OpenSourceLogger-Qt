/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "../OpenSourceLogger/code/tools/qcustomplot/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionConnection;
    QAction *actionCAN;
    QAction *actionMeasurement;
    QAction *actionControl;
    QAction *actionView;
    QAction *actionUpload;
    QAction *actionSTM32PLC;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QCustomPlot *plot;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(998, 462);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/table_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/door_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionConnection = new QAction(MainWindow);
        actionConnection->setObjectName(QString::fromUtf8("actionConnection"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/buttons/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnection->setIcon(icon2);
        actionCAN = new QAction(MainWindow);
        actionCAN->setObjectName(QString::fromUtf8("actionCAN"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/buttons/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCAN->setIcon(icon3);
        actionMeasurement = new QAction(MainWindow);
        actionMeasurement->setObjectName(QString::fromUtf8("actionMeasurement"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/buttons/application_cascade.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMeasurement->setIcon(icon4);
        actionControl = new QAction(MainWindow);
        actionControl->setObjectName(QString::fromUtf8("actionControl"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/buttons/controller.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionControl->setIcon(icon5);
        actionView = new QAction(MainWindow);
        actionView->setObjectName(QString::fromUtf8("actionView"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/buttons/view.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionView->setIcon(icon6);
        actionUpload = new QAction(MainWindow);
        actionUpload->setObjectName(QString::fromUtf8("actionUpload"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/buttons/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpload->setIcon(icon7);
        actionSTM32PLC = new QAction(MainWindow);
        actionSTM32PLC->setObjectName(QString::fromUtf8("actionSTM32PLC"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/buttons/computer_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSTM32PLC->setIcon(icon8);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/buttons/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName(QString::fromUtf8("plot"));

        gridLayout->addWidget(plot, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 998, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionUpload);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionConnection);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCAN);
        menuEdit->addAction(actionMeasurement);
        menuEdit->addAction(actionSTM32PLC);
        menuView->addAction(actionControl);
        menuView->addAction(actionView);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OpenSourceLogger", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionConnection->setText(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        actionCAN->setText(QCoreApplication::translate("MainWindow", "CAN", nullptr));
        actionMeasurement->setText(QCoreApplication::translate("MainWindow", "Measurement", nullptr));
        actionControl->setText(QCoreApplication::translate("MainWindow", "Control", nullptr));
        actionView->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        actionUpload->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        actionSTM32PLC->setText(QCoreApplication::translate("MainWindow", "STM32PLC", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "Action", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
