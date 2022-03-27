/********************************************************************************
** Form generated from reading UI file 'saej1939namewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAEJ1939NAMEWINDOW_H
#define UI_SAEJ1939NAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaeJ1939NameWindow
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *sendRequestPushButton;
    QSpinBox *destinationEcuAddressSpinBox;
    QLabel *label_13;
    QSpinBox *newDestinationEcuAddressSpinBox;
    QPushButton *sendChangePushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *industryGroupSpinBox;
    QComboBox *claimedAddressesComboBox;
    QSpinBox *ecuInstanceSpinBox;
    QSpinBox *functionSpinBox;
    QPushButton *readResponsePushButton;
    QSpinBox *manufacturerCodeSpinBox;
    QSpinBox *identityNumberSpinBox;
    QLabel *label_3;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_2;
    QSpinBox *numberOfNotClaimedAddressSpinBox;
    QLabel *label_9;
    QSpinBox *functionInstanceSpinBox;
    QLabel *label_10;
    QSpinBox *vehicleSystemInstanceSpinBox;
    QSpinBox *arbitraryAddressCapableSpinBox;
    QSpinBox *fromEcuAddressSpinBox;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_4;
    QSpinBox *vehicleSystemSpinBox;
    QLabel *label_8;
    QLabel *label_5;

    void setupUi(QWidget *SaeJ1939NameWindow)
    {
        if (SaeJ1939NameWindow->objectName().isEmpty())
            SaeJ1939NameWindow->setObjectName(QString::fromUtf8("SaeJ1939NameWindow"));
        SaeJ1939NameWindow->resize(340, 571);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SaeJ1939NameWindow->sizePolicy().hasHeightForWidth());
        SaeJ1939NameWindow->setSizePolicy(sizePolicy);
        SaeJ1939NameWindow->setMinimumSize(QSize(340, 571));
        SaeJ1939NameWindow->setMaximumSize(QSize(340, 571));
        gridLayout_4 = new QGridLayout(SaeJ1939NameWindow);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(SaeJ1939NameWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        sendRequestPushButton = new QPushButton(groupBox_2);
        sendRequestPushButton->setObjectName(QString::fromUtf8("sendRequestPushButton"));

        gridLayout->addWidget(sendRequestPushButton, 2, 1, 1, 1);

        destinationEcuAddressSpinBox = new QSpinBox(groupBox_2);
        destinationEcuAddressSpinBox->setObjectName(QString::fromUtf8("destinationEcuAddressSpinBox"));
        destinationEcuAddressSpinBox->setMaximum(255);

        gridLayout->addWidget(destinationEcuAddressSpinBox, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        newDestinationEcuAddressSpinBox = new QSpinBox(groupBox_2);
        newDestinationEcuAddressSpinBox->setObjectName(QString::fromUtf8("newDestinationEcuAddressSpinBox"));
        newDestinationEcuAddressSpinBox->setMaximum(253);

        gridLayout->addWidget(newDestinationEcuAddressSpinBox, 1, 1, 1, 1);

        sendChangePushButton = new QPushButton(groupBox_2);
        sendChangePushButton->setObjectName(QString::fromUtf8("sendChangePushButton"));

        gridLayout->addWidget(sendChangePushButton, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(SaeJ1939NameWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        industryGroupSpinBox = new QSpinBox(groupBox);
        industryGroupSpinBox->setObjectName(QString::fromUtf8("industryGroupSpinBox"));
        industryGroupSpinBox->setMaximum(7);

        gridLayout_2->addWidget(industryGroupSpinBox, 7, 1, 1, 1);

        claimedAddressesComboBox = new QComboBox(groupBox);
        claimedAddressesComboBox->setObjectName(QString::fromUtf8("claimedAddressesComboBox"));
        claimedAddressesComboBox->setMaxVisibleItems(255);

        gridLayout_2->addWidget(claimedAddressesComboBox, 10, 1, 1, 1);

        ecuInstanceSpinBox = new QSpinBox(groupBox);
        ecuInstanceSpinBox->setObjectName(QString::fromUtf8("ecuInstanceSpinBox"));
        ecuInstanceSpinBox->setMaximum(7);

        gridLayout_2->addWidget(ecuInstanceSpinBox, 3, 1, 1, 1);

        functionSpinBox = new QSpinBox(groupBox);
        functionSpinBox->setObjectName(QString::fromUtf8("functionSpinBox"));
        functionSpinBox->setMaximum(255);

        gridLayout_2->addWidget(functionSpinBox, 4, 1, 1, 1);

        readResponsePushButton = new QPushButton(groupBox);
        readResponsePushButton->setObjectName(QString::fromUtf8("readResponsePushButton"));

        gridLayout_2->addWidget(readResponsePushButton, 12, 1, 1, 1);

        manufacturerCodeSpinBox = new QSpinBox(groupBox);
        manufacturerCodeSpinBox->setObjectName(QString::fromUtf8("manufacturerCodeSpinBox"));
        manufacturerCodeSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        manufacturerCodeSpinBox->setMaximum(2047);

        gridLayout_2->addWidget(manufacturerCodeSpinBox, 1, 1, 1, 1);

        identityNumberSpinBox = new QSpinBox(groupBox);
        identityNumberSpinBox->setObjectName(QString::fromUtf8("identityNumberSpinBox"));
        identityNumberSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        identityNumberSpinBox->setMaximum(2097151);

        gridLayout_2->addWidget(identityNumberSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 9, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 10, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        numberOfNotClaimedAddressSpinBox = new QSpinBox(groupBox);
        numberOfNotClaimedAddressSpinBox->setObjectName(QString::fromUtf8("numberOfNotClaimedAddressSpinBox"));
        numberOfNotClaimedAddressSpinBox->setReadOnly(true);
        numberOfNotClaimedAddressSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        numberOfNotClaimedAddressSpinBox->setMaximum(255);

        gridLayout_2->addWidget(numberOfNotClaimedAddressSpinBox, 11, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        functionInstanceSpinBox = new QSpinBox(groupBox);
        functionInstanceSpinBox->setObjectName(QString::fromUtf8("functionInstanceSpinBox"));
        functionInstanceSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        functionInstanceSpinBox->setMaximum(31);

        gridLayout_2->addWidget(functionInstanceSpinBox, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 8, 0, 1, 1);

        vehicleSystemInstanceSpinBox = new QSpinBox(groupBox);
        vehicleSystemInstanceSpinBox->setObjectName(QString::fromUtf8("vehicleSystemInstanceSpinBox"));
        vehicleSystemInstanceSpinBox->setMaximum(15);

        gridLayout_2->addWidget(vehicleSystemInstanceSpinBox, 8, 1, 1, 1);

        arbitraryAddressCapableSpinBox = new QSpinBox(groupBox);
        arbitraryAddressCapableSpinBox->setObjectName(QString::fromUtf8("arbitraryAddressCapableSpinBox"));
        arbitraryAddressCapableSpinBox->setMaximum(1);

        gridLayout_2->addWidget(arbitraryAddressCapableSpinBox, 6, 1, 1, 1);

        fromEcuAddressSpinBox = new QSpinBox(groupBox);
        fromEcuAddressSpinBox->setObjectName(QString::fromUtf8("fromEcuAddressSpinBox"));
        fromEcuAddressSpinBox->setReadOnly(true);
        fromEcuAddressSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        fromEcuAddressSpinBox->setMaximum(255);

        gridLayout_2->addWidget(fromEcuAddressSpinBox, 9, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 11, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        vehicleSystemSpinBox = new QSpinBox(groupBox);
        vehicleSystemSpinBox->setObjectName(QString::fromUtf8("vehicleSystemSpinBox"));
        vehicleSystemSpinBox->setMaximum(127);

        gridLayout_2->addWidget(vehicleSystemSpinBox, 5, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 2, 0, 1, 1);


        retranslateUi(SaeJ1939NameWindow);

        QMetaObject::connectSlotsByName(SaeJ1939NameWindow);
    } // setupUi

    void retranslateUi(QWidget *SaeJ1939NameWindow)
    {
        SaeJ1939NameWindow->setWindowTitle(QCoreApplication::translate("SaeJ1939NameWindow", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SaeJ1939NameWindow", "Request NAME", nullptr));
        label->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Destination ECU address:", nullptr));
        sendRequestPushButton->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Send request", nullptr));
        label_13->setText(QCoreApplication::translate("SaeJ1939NameWindow", "New destination ECU address:", nullptr));
        sendChangePushButton->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Send change", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SaeJ1939NameWindow", "Response NAME", nullptr));
        readResponsePushButton->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Read response", nullptr));
        label_3->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Manufacturer code:", nullptr));
        label_11->setText(QCoreApplication::translate("SaeJ1939NameWindow", "From ECU address:", nullptr));
        label_14->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Claimed addresses:", nullptr));
        label_2->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Identity number:", nullptr));
        label_9->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Industry group:", nullptr));
        label_10->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Vehicle system instance:", nullptr));
        label_7->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Vehicle system:", nullptr));
        label_6->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Function:", nullptr));
        label_15->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Number of not claimed address:", nullptr));
        label_4->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Function instance:", nullptr));
        label_8->setText(QCoreApplication::translate("SaeJ1939NameWindow", "Arbitrary address capable:", nullptr));
        label_5->setText(QCoreApplication::translate("SaeJ1939NameWindow", "ECU instance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaeJ1939NameWindow: public Ui_SaeJ1939NameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAEJ1939NAMEWINDOW_H
