/********************************************************************************
** Form generated from reading UI file 'measurementsourcewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENTSOURCEWINDOW_H
#define UI_MEASUREMENTSOURCEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementSourceWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *maxAndMinMeasurementGroupBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *maxMeasurementDoubleSpinBox;
    QDoubleSpinBox *minMeasurementDoubleSpinBox;
    QLabel *label_4;
    QLineEdit *measurementNameLineEdit;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *minRawValueDoubleSpinBox;
    QDoubleSpinBox *maxRawValueDoubleSpinBox;

    void setupUi(QWidget *MeasurementSourceWindow)
    {
        if (MeasurementSourceWindow->objectName().isEmpty())
            MeasurementSourceWindow->setObjectName(QString::fromUtf8("MeasurementSourceWindow"));
        MeasurementSourceWindow->setWindowModality(Qt::ApplicationModal);
        MeasurementSourceWindow->resize(540, 298);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/application.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MeasurementSourceWindow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MeasurementSourceWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        maxAndMinMeasurementGroupBox = new QGroupBox(MeasurementSourceWindow);
        maxAndMinMeasurementGroupBox->setObjectName(QString::fromUtf8("maxAndMinMeasurementGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxAndMinMeasurementGroupBox->sizePolicy().hasHeightForWidth());
        maxAndMinMeasurementGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(maxAndMinMeasurementGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        maxMeasurementDoubleSpinBox = new QDoubleSpinBox(maxAndMinMeasurementGroupBox);
        maxMeasurementDoubleSpinBox->setObjectName(QString::fromUtf8("maxMeasurementDoubleSpinBox"));
        maxMeasurementDoubleSpinBox->setDecimals(5);
        maxMeasurementDoubleSpinBox->setMinimum(-99999999.000000000000000);
        maxMeasurementDoubleSpinBox->setMaximum(99999999.000000000000000);

        gridLayout_2->addWidget(maxMeasurementDoubleSpinBox, 5, 1, 1, 1);

        minMeasurementDoubleSpinBox = new QDoubleSpinBox(maxAndMinMeasurementGroupBox);
        minMeasurementDoubleSpinBox->setObjectName(QString::fromUtf8("minMeasurementDoubleSpinBox"));
        minMeasurementDoubleSpinBox->setDecimals(5);
        minMeasurementDoubleSpinBox->setMinimum(-99999999.000000000000000);
        minMeasurementDoubleSpinBox->setMaximum(99999999.000000000000000);

        gridLayout_2->addWidget(minMeasurementDoubleSpinBox, 2, 1, 1, 1);

        label_4 = new QLabel(maxAndMinMeasurementGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        measurementNameLineEdit = new QLineEdit(maxAndMinMeasurementGroupBox);
        measurementNameLineEdit->setObjectName(QString::fromUtf8("measurementNameLineEdit"));

        gridLayout_2->addWidget(measurementNameLineEdit, 6, 1, 1, 1);

        label_3 = new QLabel(maxAndMinMeasurementGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(maxAndMinMeasurementGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        label = new QLabel(maxAndMinMeasurementGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(maxAndMinMeasurementGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        minRawValueDoubleSpinBox = new QDoubleSpinBox(maxAndMinMeasurementGroupBox);
        minRawValueDoubleSpinBox->setObjectName(QString::fromUtf8("minRawValueDoubleSpinBox"));
        minRawValueDoubleSpinBox->setDecimals(5);
        minRawValueDoubleSpinBox->setMinimum(-65535.000000000000000);
        minRawValueDoubleSpinBox->setMaximum(65535.000000000000000);

        gridLayout_2->addWidget(minRawValueDoubleSpinBox, 0, 1, 1, 1);

        maxRawValueDoubleSpinBox = new QDoubleSpinBox(maxAndMinMeasurementGroupBox);
        maxRawValueDoubleSpinBox->setObjectName(QString::fromUtf8("maxRawValueDoubleSpinBox"));
        maxRawValueDoubleSpinBox->setDecimals(5);
        maxRawValueDoubleSpinBox->setMinimum(-65535.000000000000000);
        maxRawValueDoubleSpinBox->setMaximum(65535.000000000000000);

        gridLayout_2->addWidget(maxRawValueDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(maxAndMinMeasurementGroupBox);


        retranslateUi(MeasurementSourceWindow);

        QMetaObject::connectSlotsByName(MeasurementSourceWindow);
    } // setupUi

    void retranslateUi(QWidget *MeasurementSourceWindow)
    {
        MeasurementSourceWindow->setWindowTitle(QCoreApplication::translate("MeasurementSourceWindow", "Source", nullptr));
        maxAndMinMeasurementGroupBox->setTitle(QCoreApplication::translate("MeasurementSourceWindow", "Max and min measurement", nullptr));
#if QT_CONFIG(tooltip)
        maxMeasurementDoubleSpinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        minMeasurementDoubleSpinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("MeasurementSourceWindow", "Max measurement:", nullptr));
        measurementNameLineEdit->setInputMask(QString());
        measurementNameLineEdit->setText(QString());
        measurementNameLineEdit->setPlaceholderText(QString());
        label_3->setText(QCoreApplication::translate("MeasurementSourceWindow", "Min measurement:", nullptr));
        label_6->setText(QCoreApplication::translate("MeasurementSourceWindow", "Measurement name:", nullptr));
        label->setText(QCoreApplication::translate("MeasurementSourceWindow", "Max raw value:", nullptr));
        label_2->setText(QCoreApplication::translate("MeasurementSourceWindow", "Min raw value:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementSourceWindow: public Ui_MeasurementSourceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENTSOURCEWINDOW_H
