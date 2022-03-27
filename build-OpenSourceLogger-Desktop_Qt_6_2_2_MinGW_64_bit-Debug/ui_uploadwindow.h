/********************************************************************************
** Form generated from reading UI file 'uploadwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOADWINDOW_H
#define UI_UPLOADWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UploadWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *loadCsvFilePushButton;
    QLineEdit *csvFileOpenPathLineEdit;
    QPushButton *uploadMeasurementPushButton;
    QTableWidget *measurementTableWidget;

    void setupUi(QWidget *UploadWindow)
    {
        if (UploadWindow->objectName().isEmpty())
            UploadWindow->setObjectName(QString::fromUtf8("UploadWindow"));
        UploadWindow->resize(800, 319);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        UploadWindow->setWindowIcon(icon);
        gridLayout = new QGridLayout(UploadWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loadCsvFilePushButton = new QPushButton(UploadWindow);
        loadCsvFilePushButton->setObjectName(QString::fromUtf8("loadCsvFilePushButton"));

        gridLayout->addWidget(loadCsvFilePushButton, 0, 0, 1, 1);

        csvFileOpenPathLineEdit = new QLineEdit(UploadWindow);
        csvFileOpenPathLineEdit->setObjectName(QString::fromUtf8("csvFileOpenPathLineEdit"));
        csvFileOpenPathLineEdit->setReadOnly(true);

        gridLayout->addWidget(csvFileOpenPathLineEdit, 0, 1, 1, 1);

        uploadMeasurementPushButton = new QPushButton(UploadWindow);
        uploadMeasurementPushButton->setObjectName(QString::fromUtf8("uploadMeasurementPushButton"));

        gridLayout->addWidget(uploadMeasurementPushButton, 0, 2, 1, 1);

        measurementTableWidget = new QTableWidget(UploadWindow);
        measurementTableWidget->setObjectName(QString::fromUtf8("measurementTableWidget"));
        measurementTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        measurementTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        measurementTableWidget->setSelectionBehavior(QAbstractItemView::SelectColumns);

        gridLayout->addWidget(measurementTableWidget, 1, 0, 1, 3);


        retranslateUi(UploadWindow);

        QMetaObject::connectSlotsByName(UploadWindow);
    } // setupUi

    void retranslateUi(QWidget *UploadWindow)
    {
        UploadWindow->setWindowTitle(QCoreApplication::translate("UploadWindow", "Upload", nullptr));
        loadCsvFilePushButton->setText(QCoreApplication::translate("UploadWindow", "Load CSV file", nullptr));
        uploadMeasurementPushButton->setText(QCoreApplication::translate("UploadWindow", "Upload measurement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UploadWindow: public Ui_UploadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADWINDOW_H
