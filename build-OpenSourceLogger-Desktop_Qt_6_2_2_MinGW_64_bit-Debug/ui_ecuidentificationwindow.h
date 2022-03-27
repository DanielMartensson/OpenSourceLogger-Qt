/********************************************************************************
** Form generated from reading UI file 'ecuidentificationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECUIDENTIFICATIONWINDOW_H
#define UI_ECUIDENTIFICATIONWINDOW_H

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

class Ui_ECUidentificationWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSpinBox *destinationEcuAddressSpinBox;
    QLabel *label_5;
    QPushButton *sendRequestPushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *typeLineEdit;
    QLabel *label_4;
    QLineEdit *partNumberLineEdit;
    QLabel *label_2;
    QSpinBox *fromEcuAddressSpinBox;
    QLabel *label;
    QLineEdit *serialNumberLineEdit;
    QLineEdit *locationLineEdit;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *readResponsePushButton;

    void setupUi(QWidget *ECUidentificationWindow)
    {
        if (ECUidentificationWindow->objectName().isEmpty())
            ECUidentificationWindow->setObjectName(QString::fromUtf8("ECUidentificationWindow"));
        ECUidentificationWindow->resize(427, 340);
        verticalLayout = new QVBoxLayout(ECUidentificationWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(ECUidentificationWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        destinationEcuAddressSpinBox = new QSpinBox(groupBox_2);
        destinationEcuAddressSpinBox->setObjectName(QString::fromUtf8("destinationEcuAddressSpinBox"));
        destinationEcuAddressSpinBox->setMaximum(255);

        gridLayout_3->addWidget(destinationEcuAddressSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        sendRequestPushButton = new QPushButton(groupBox_2);
        sendRequestPushButton->setObjectName(QString::fromUtf8("sendRequestPushButton"));

        gridLayout_3->addWidget(sendRequestPushButton, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(ECUidentificationWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        typeLineEdit = new QLineEdit(groupBox);
        typeLineEdit->setObjectName(QString::fromUtf8("typeLineEdit"));
        typeLineEdit->setMaxLength(30);

        gridLayout_2->addWidget(typeLineEdit, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        partNumberLineEdit = new QLineEdit(groupBox);
        partNumberLineEdit->setObjectName(QString::fromUtf8("partNumberLineEdit"));
        partNumberLineEdit->setMaxLength(30);

        gridLayout_2->addWidget(partNumberLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        fromEcuAddressSpinBox = new QSpinBox(groupBox);
        fromEcuAddressSpinBox->setObjectName(QString::fromUtf8("fromEcuAddressSpinBox"));
        fromEcuAddressSpinBox->setReadOnly(false);
        fromEcuAddressSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        fromEcuAddressSpinBox->setMaximum(255);

        gridLayout_2->addWidget(fromEcuAddressSpinBox, 4, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        serialNumberLineEdit = new QLineEdit(groupBox);
        serialNumberLineEdit->setObjectName(QString::fromUtf8("serialNumberLineEdit"));
        serialNumberLineEdit->setMaxLength(30);

        gridLayout_2->addWidget(serialNumberLineEdit, 1, 1, 1, 1);

        locationLineEdit = new QLineEdit(groupBox);
        locationLineEdit->setObjectName(QString::fromUtf8("locationLineEdit"));
        locationLineEdit->setMaxLength(30);

        gridLayout_2->addWidget(locationLineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        readResponsePushButton = new QPushButton(groupBox);
        readResponsePushButton->setObjectName(QString::fromUtf8("readResponsePushButton"));

        gridLayout_2->addWidget(readResponsePushButton, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ECUidentificationWindow);

        QMetaObject::connectSlotsByName(ECUidentificationWindow);
    } // setupUi

    void retranslateUi(QWidget *ECUidentificationWindow)
    {
        ECUidentificationWindow->setWindowTitle(QCoreApplication::translate("ECUidentificationWindow", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ECUidentificationWindow", "Request ECU identification", nullptr));
        label_5->setText(QCoreApplication::translate("ECUidentificationWindow", "Destination ECU address:", nullptr));
        sendRequestPushButton->setText(QCoreApplication::translate("ECUidentificationWindow", "Send request", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ECUidentificationWindow", "Response ECU identification", nullptr));
        label_4->setText(QCoreApplication::translate("ECUidentificationWindow", "Type:", nullptr));
        partNumberLineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("ECUidentificationWindow", "Serial number:", nullptr));
        label->setText(QCoreApplication::translate("ECUidentificationWindow", "Part number:", nullptr));
        label_3->setText(QCoreApplication::translate("ECUidentificationWindow", "Location:", nullptr));
        label_7->setText(QCoreApplication::translate("ECUidentificationWindow", "From ECU address:", nullptr));
        readResponsePushButton->setText(QCoreApplication::translate("ECUidentificationWindow", "Read response", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECUidentificationWindow: public Ui_ECUidentificationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECUIDENTIFICATIONWINDOW_H
