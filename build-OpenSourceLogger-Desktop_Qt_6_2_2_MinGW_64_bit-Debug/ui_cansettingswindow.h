/********************************************************************************
** Form generated from reading UI file 'cansettingswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANSETTINGSWINDOW_H
#define UI_CANSETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CANsettingsWindow
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *ecuSourceAddressSpinBox;
    QLabel *label;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QSpinBox *ecuInstanceSpinBox;
    QSpinBox *vehicleSystemSpinBox;
    QLabel *label_3;
    QSpinBox *functionSpinBox;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QSpinBox *identityNumberSpinBox;
    QSpinBox *industryGroupSpinBox;
    QSpinBox *manufacturerCodeSpinBox;
    QLabel *label_2;
    QLabel *label_7;
    QSpinBox *functionInstanceSpinBox;
    QSpinBox *arbitraryAddressCapableSpinBox;
    QLabel *label_5;
    QLabel *label_10;
    QSpinBox *vehicleSystemInstanceSpinBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_16;
    QLineEdit *ecuTypeLineEdit;
    QLineEdit *componentProductDateLineEdit;
    QLineEdit *componentModelNameLineEdit;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *ecuSerialNumberLineEdit;
    QLineEdit *ecuLocationLineEdit;
    QLabel *label_11;
    QLabel *label_15;
    QLineEdit *softwareIdentificationLineEdit;
    QLineEdit *componentUnitNameLineEdit;
    QLineEdit *ecuPartNumberLineEdit;
    QLineEdit *componentSerialNumberLineEdit;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *CANsettingsWindow)
    {
        if (CANsettingsWindow->objectName().isEmpty())
            CANsettingsWindow->setObjectName(QString::fromUtf8("CANsettingsWindow"));
        CANsettingsWindow->setWindowModality(Qt::NonModal);
        CANsettingsWindow->resize(999, 411);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        CANsettingsWindow->setWindowIcon(icon);
        gridLayout = new QGridLayout(CANsettingsWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(CANsettingsWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ecuSourceAddressSpinBox = new QSpinBox(groupBox);
        ecuSourceAddressSpinBox->setObjectName(QString::fromUtf8("ecuSourceAddressSpinBox"));
        ecuSourceAddressSpinBox->setMaximum(253);

        gridLayout_2->addWidget(ecuSourceAddressSpinBox, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ecuInstanceSpinBox = new QSpinBox(groupBox_3);
        ecuInstanceSpinBox->setObjectName(QString::fromUtf8("ecuInstanceSpinBox"));
        ecuInstanceSpinBox->setMaximum(7);

        gridLayout_3->addWidget(ecuInstanceSpinBox, 3, 1, 1, 1);

        vehicleSystemSpinBox = new QSpinBox(groupBox_3);
        vehicleSystemSpinBox->setObjectName(QString::fromUtf8("vehicleSystemSpinBox"));
        vehicleSystemSpinBox->setMaximum(127);

        gridLayout_3->addWidget(vehicleSystemSpinBox, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        functionSpinBox = new QSpinBox(groupBox_3);
        functionSpinBox->setObjectName(QString::fromUtf8("functionSpinBox"));
        functionSpinBox->setMaximum(255);

        gridLayout_3->addWidget(functionSpinBox, 4, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 7, 0, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 6, 0, 1, 1);

        identityNumberSpinBox = new QSpinBox(groupBox_3);
        identityNumberSpinBox->setObjectName(QString::fromUtf8("identityNumberSpinBox"));
        identityNumberSpinBox->setMaximum(2097151);

        gridLayout_3->addWidget(identityNumberSpinBox, 0, 1, 1, 1);

        industryGroupSpinBox = new QSpinBox(groupBox_3);
        industryGroupSpinBox->setObjectName(QString::fromUtf8("industryGroupSpinBox"));
        industryGroupSpinBox->setMaximum(7);

        gridLayout_3->addWidget(industryGroupSpinBox, 7, 1, 1, 1);

        manufacturerCodeSpinBox = new QSpinBox(groupBox_3);
        manufacturerCodeSpinBox->setObjectName(QString::fromUtf8("manufacturerCodeSpinBox"));
        manufacturerCodeSpinBox->setMaximum(2047);

        gridLayout_3->addWidget(manufacturerCodeSpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 5, 0, 1, 1);

        functionInstanceSpinBox = new QSpinBox(groupBox_3);
        functionInstanceSpinBox->setObjectName(QString::fromUtf8("functionInstanceSpinBox"));
        functionInstanceSpinBox->setMaximum(31);

        gridLayout_3->addWidget(functionInstanceSpinBox, 2, 1, 1, 1);

        arbitraryAddressCapableSpinBox = new QSpinBox(groupBox_3);
        arbitraryAddressCapableSpinBox->setObjectName(QString::fromUtf8("arbitraryAddressCapableSpinBox"));
        arbitraryAddressCapableSpinBox->setMaximum(1);

        gridLayout_3->addWidget(arbitraryAddressCapableSpinBox, 6, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 8, 0, 1, 1);

        vehicleSystemInstanceSpinBox = new QSpinBox(groupBox_3);
        vehicleSystemInstanceSpinBox->setObjectName(QString::fromUtf8("vehicleSystemInstanceSpinBox"));
        vehicleSystemInstanceSpinBox->setMaximum(15);

        gridLayout_3->addWidget(vehicleSystemInstanceSpinBox, 8, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 3, 0, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 8, 0, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 5, 0, 1, 1);

        ecuTypeLineEdit = new QLineEdit(groupBox_4);
        ecuTypeLineEdit->setObjectName(QString::fromUtf8("ecuTypeLineEdit"));
        ecuTypeLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(ecuTypeLineEdit, 7, 1, 1, 1);

        componentProductDateLineEdit = new QLineEdit(groupBox_4);
        componentProductDateLineEdit->setObjectName(QString::fromUtf8("componentProductDateLineEdit"));
        componentProductDateLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(componentProductDateLineEdit, 0, 1, 1, 1);

        componentModelNameLineEdit = new QLineEdit(groupBox_4);
        componentModelNameLineEdit->setObjectName(QString::fromUtf8("componentModelNameLineEdit"));
        componentModelNameLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(componentModelNameLineEdit, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 6, 0, 1, 1);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 7, 0, 1, 1);

        ecuSerialNumberLineEdit = new QLineEdit(groupBox_4);
        ecuSerialNumberLineEdit->setObjectName(QString::fromUtf8("ecuSerialNumberLineEdit"));
        ecuSerialNumberLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(ecuSerialNumberLineEdit, 5, 1, 1, 1);

        ecuLocationLineEdit = new QLineEdit(groupBox_4);
        ecuLocationLineEdit->setObjectName(QString::fromUtf8("ecuLocationLineEdit"));
        ecuLocationLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(ecuLocationLineEdit, 6, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 4, 0, 1, 1);

        softwareIdentificationLineEdit = new QLineEdit(groupBox_4);
        softwareIdentificationLineEdit->setObjectName(QString::fromUtf8("softwareIdentificationLineEdit"));
        softwareIdentificationLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(softwareIdentificationLineEdit, 8, 1, 1, 1);

        componentUnitNameLineEdit = new QLineEdit(groupBox_4);
        componentUnitNameLineEdit->setObjectName(QString::fromUtf8("componentUnitNameLineEdit"));
        componentUnitNameLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(componentUnitNameLineEdit, 3, 1, 1, 1);

        ecuPartNumberLineEdit = new QLineEdit(groupBox_4);
        ecuPartNumberLineEdit->setObjectName(QString::fromUtf8("ecuPartNumberLineEdit"));
        ecuPartNumberLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(ecuPartNumberLineEdit, 4, 1, 1, 1);

        componentSerialNumberLineEdit = new QLineEdit(groupBox_4);
        componentSerialNumberLineEdit->setObjectName(QString::fromUtf8("componentSerialNumberLineEdit"));
        componentSerialNumberLineEdit->setMaxLength(30);

        gridLayout_4->addWidget(componentSerialNumberLineEdit, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(CANsettingsWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(CANsettingsWindow);

        QMetaObject::connectSlotsByName(CANsettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *CANsettingsWindow)
    {
        CANsettingsWindow->setWindowTitle(QCoreApplication::translate("CANsettingsWindow", "CAN settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CANsettingsWindow", "SAE J1939", nullptr));
        label->setText(QCoreApplication::translate("CANsettingsWindow", "ECU source address", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CANsettingsWindow", "NAME", nullptr));
        label_3->setText(QCoreApplication::translate("CANsettingsWindow", "Manufacturer code:", nullptr));
        label_9->setText(QCoreApplication::translate("CANsettingsWindow", "Industry group:", nullptr));
        label_6->setText(QCoreApplication::translate("CANsettingsWindow", "Function:", nullptr));
        label_4->setText(QCoreApplication::translate("CANsettingsWindow", "Function instance:", nullptr));
        label_8->setText(QCoreApplication::translate("CANsettingsWindow", "Arbitrary address capable:", nullptr));
        label_2->setText(QCoreApplication::translate("CANsettingsWindow", "Identity number:", nullptr));
        label_7->setText(QCoreApplication::translate("CANsettingsWindow", "Vehicle system:", nullptr));
        label_5->setText(QCoreApplication::translate("CANsettingsWindow", "ECU instance:", nullptr));
        label_10->setText(QCoreApplication::translate("CANsettingsWindow", "Vehicle system instance:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("CANsettingsWindow", "Identifications", nullptr));
        label_14->setText(QCoreApplication::translate("CANsettingsWindow", "Component unit name:", nullptr));
        label_12->setText(QCoreApplication::translate("CANsettingsWindow", "Component model name:", nullptr));
        label_13->setText(QCoreApplication::translate("CANsettingsWindow", "Component serial number:", nullptr));
        label_19->setText(QCoreApplication::translate("CANsettingsWindow", "Software identification:", nullptr));
        label_16->setText(QCoreApplication::translate("CANsettingsWindow", "ECU serial number:", nullptr));
        label_17->setText(QCoreApplication::translate("CANsettingsWindow", "ECU location:", nullptr));
        label_18->setText(QCoreApplication::translate("CANsettingsWindow", "ECU type:", nullptr));
        label_11->setText(QCoreApplication::translate("CANsettingsWindow", "Component product date:", nullptr));
        label_15->setText(QCoreApplication::translate("CANsettingsWindow", "ECU part number:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CANsettingsWindow", "CANopen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CANsettingsWindow: public Ui_CANsettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANSETTINGSWINDOW_H
