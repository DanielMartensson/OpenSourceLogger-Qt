/********************************************************************************
** Form generated from reading UI file 'measurementlistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENTLISTWINDOW_H
#define UI_MEASUREMENTLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementListWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *measurementCommentLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *csvFileSaveLocationPushButton;
    QLineEdit *csvSaveFileLocationLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addMeasurementPushButton;
    QPushButton *deleteMeasurementPushButton;
    QListWidget *measurementListWidget;

    void setupUi(QWidget *MeasurementListWindow)
    {
        if (MeasurementListWindow->objectName().isEmpty())
            MeasurementListWindow->setObjectName(QString::fromUtf8("MeasurementListWindow"));
        MeasurementListWindow->resize(794, 511);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/application_cascade.png"), QSize(), QIcon::Normal, QIcon::Off);
        MeasurementListWindow->setWindowIcon(icon);
        gridLayout = new QGridLayout(MeasurementListWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(MeasurementListWindow);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        measurementCommentLineEdit = new QLineEdit(MeasurementListWindow);
        measurementCommentLineEdit->setObjectName(QString::fromUtf8("measurementCommentLineEdit"));

        horizontalLayout_2->addWidget(measurementCommentLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        csvFileSaveLocationPushButton = new QPushButton(MeasurementListWindow);
        csvFileSaveLocationPushButton->setObjectName(QString::fromUtf8("csvFileSaveLocationPushButton"));

        horizontalLayout_3->addWidget(csvFileSaveLocationPushButton);

        csvSaveFileLocationLineEdit = new QLineEdit(MeasurementListWindow);
        csvSaveFileLocationLineEdit->setObjectName(QString::fromUtf8("csvSaveFileLocationLineEdit"));
        csvSaveFileLocationLineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(csvSaveFileLocationLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addMeasurementPushButton = new QPushButton(MeasurementListWindow);
        addMeasurementPushButton->setObjectName(QString::fromUtf8("addMeasurementPushButton"));

        horizontalLayout->addWidget(addMeasurementPushButton);

        deleteMeasurementPushButton = new QPushButton(MeasurementListWindow);
        deleteMeasurementPushButton->setObjectName(QString::fromUtf8("deleteMeasurementPushButton"));

        horizontalLayout->addWidget(deleteMeasurementPushButton);


        verticalLayout->addLayout(horizontalLayout);

        measurementListWidget = new QListWidget(MeasurementListWindow);
        measurementListWidget->setObjectName(QString::fromUtf8("measurementListWidget"));

        verticalLayout->addWidget(measurementListWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MeasurementListWindow);

        QMetaObject::connectSlotsByName(MeasurementListWindow);
    } // setupUi

    void retranslateUi(QWidget *MeasurementListWindow)
    {
        MeasurementListWindow->setWindowTitle(QCoreApplication::translate("MeasurementListWindow", "Measurement list", nullptr));
        label->setText(QCoreApplication::translate("MeasurementListWindow", "Measurement comment:", nullptr));
        csvFileSaveLocationPushButton->setText(QCoreApplication::translate("MeasurementListWindow", "CSV save file location:", nullptr));
        addMeasurementPushButton->setText(QCoreApplication::translate("MeasurementListWindow", "Add measurement", nullptr));
        deleteMeasurementPushButton->setText(QCoreApplication::translate("MeasurementListWindow", "Delete measurement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementListWindow: public Ui_MeasurementListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENTLISTWINDOW_H
