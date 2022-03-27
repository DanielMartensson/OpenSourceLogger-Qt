/********************************************************************************
** Form generated from reading UI file 'softwareidentificationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFTWAREIDENTIFICATIONWINDOW_H
#define UI_SOFTWAREIDENTIFICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoftwareIdentificationWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *destinationEcuAddressSpinBox;
    QPushButton *sendRequestPushButton;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *identificationLineEdit;
    QPushButton *readResponsePushButton;
    QSpinBox *fromEcuAddressSpinBox;
    QLabel *label_4;

    void setupUi(QWidget *SoftwareIdentificationWindow)
    {
        if (SoftwareIdentificationWindow->objectName().isEmpty())
            SoftwareIdentificationWindow->setObjectName(QString::fromUtf8("SoftwareIdentificationWindow"));
        SoftwareIdentificationWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(SoftwareIdentificationWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(SoftwareIdentificationWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        destinationEcuAddressSpinBox = new QSpinBox(groupBox);
        destinationEcuAddressSpinBox->setObjectName(QString::fromUtf8("destinationEcuAddressSpinBox"));
        destinationEcuAddressSpinBox->setMaximum(255);

        gridLayout->addWidget(destinationEcuAddressSpinBox, 0, 1, 1, 1);

        sendRequestPushButton = new QPushButton(groupBox);
        sendRequestPushButton->setObjectName(QString::fromUtf8("sendRequestPushButton"));

        gridLayout->addWidget(sendRequestPushButton, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(SoftwareIdentificationWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        identificationLineEdit = new QLineEdit(groupBox_2);
        identificationLineEdit->setObjectName(QString::fromUtf8("identificationLineEdit"));
        identificationLineEdit->setMaxLength(30);

        gridLayout_2->addWidget(identificationLineEdit, 0, 1, 1, 1);

        readResponsePushButton = new QPushButton(groupBox_2);
        readResponsePushButton->setObjectName(QString::fromUtf8("readResponsePushButton"));

        gridLayout_2->addWidget(readResponsePushButton, 2, 1, 1, 1);

        fromEcuAddressSpinBox = new QSpinBox(groupBox_2);
        fromEcuAddressSpinBox->setObjectName(QString::fromUtf8("fromEcuAddressSpinBox"));
        fromEcuAddressSpinBox->setReadOnly(false);
        fromEcuAddressSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        fromEcuAddressSpinBox->setMaximum(255);

        gridLayout_2->addWidget(fromEcuAddressSpinBox, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(SoftwareIdentificationWindow);

        QMetaObject::connectSlotsByName(SoftwareIdentificationWindow);
    } // setupUi

    void retranslateUi(QWidget *SoftwareIdentificationWindow)
    {
        SoftwareIdentificationWindow->setWindowTitle(QCoreApplication::translate("SoftwareIdentificationWindow", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SoftwareIdentificationWindow", "Request software identification", nullptr));
        sendRequestPushButton->setText(QCoreApplication::translate("SoftwareIdentificationWindow", "Send request", nullptr));
        label->setText(QCoreApplication::translate("SoftwareIdentificationWindow", "Destination ECU address:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SoftwareIdentificationWindow", "Response software identification", nullptr));
        label_2->setText(QCoreApplication::translate("SoftwareIdentificationWindow", "Identification:", nullptr));
        readResponsePushButton->setText(QCoreApplication::translate("SoftwareIdentificationWindow", "Read response", nullptr));
        label_4->setText(QCoreApplication::translate("SoftwareIdentificationWindow", "From ECU address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoftwareIdentificationWindow: public Ui_SoftwareIdentificationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFTWAREIDENTIFICATIONWINDOW_H
