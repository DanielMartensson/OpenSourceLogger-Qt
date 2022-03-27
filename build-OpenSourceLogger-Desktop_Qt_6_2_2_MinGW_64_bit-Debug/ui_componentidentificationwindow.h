/********************************************************************************
** Form generated from reading UI file 'componentidentificationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTIDENTIFICATIONWINDOW_H
#define UI_COMPONENTIDENTIFICATIONWINDOW_H

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

class Ui_ComponentIdentificationWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSpinBox *destinationEcuAddressSpinBox;
    QPushButton *sendRequestPushButton;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *productDateLineEdit;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *fromEcuAddressSpinBox;
    QLineEdit *modelNameLineEdit;
    QLineEdit *serialNumberLineEdit;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *unitNameLineEdit;
    QPushButton *readResponsePushButton;

    void setupUi(QWidget *ComponentIdentificationWindow)
    {
        if (ComponentIdentificationWindow->objectName().isEmpty())
            ComponentIdentificationWindow->setObjectName(QString::fromUtf8("ComponentIdentificationWindow"));
        ComponentIdentificationWindow->resize(406, 339);
        verticalLayout = new QVBoxLayout(ComponentIdentificationWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(ComponentIdentificationWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        destinationEcuAddressSpinBox = new QSpinBox(groupBox_2);
        destinationEcuAddressSpinBox->setObjectName(QString::fromUtf8("destinationEcuAddressSpinBox"));
        destinationEcuAddressSpinBox->setMaximum(255);

        gridLayout_3->addWidget(destinationEcuAddressSpinBox, 0, 1, 1, 1);

        sendRequestPushButton = new QPushButton(groupBox_2);
        sendRequestPushButton->setObjectName(QString::fromUtf8("sendRequestPushButton"));

        gridLayout_3->addWidget(sendRequestPushButton, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(ComponentIdentificationWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        productDateLineEdit = new QLineEdit(groupBox);
        productDateLineEdit->setObjectName(QString::fromUtf8("productDateLineEdit"));
        productDateLineEdit->setMaxLength(30);

        gridLayout->addWidget(productDateLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fromEcuAddressSpinBox = new QSpinBox(groupBox);
        fromEcuAddressSpinBox->setObjectName(QString::fromUtf8("fromEcuAddressSpinBox"));
        fromEcuAddressSpinBox->setReadOnly(false);
        fromEcuAddressSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(fromEcuAddressSpinBox, 4, 1, 1, 1);

        modelNameLineEdit = new QLineEdit(groupBox);
        modelNameLineEdit->setObjectName(QString::fromUtf8("modelNameLineEdit"));
        modelNameLineEdit->setMaxLength(30);

        gridLayout->addWidget(modelNameLineEdit, 1, 1, 1, 1);

        serialNumberLineEdit = new QLineEdit(groupBox);
        serialNumberLineEdit->setObjectName(QString::fromUtf8("serialNumberLineEdit"));
        serialNumberLineEdit->setMaxLength(30);

        gridLayout->addWidget(serialNumberLineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        unitNameLineEdit = new QLineEdit(groupBox);
        unitNameLineEdit->setObjectName(QString::fromUtf8("unitNameLineEdit"));
        unitNameLineEdit->setMaxLength(30);

        gridLayout->addWidget(unitNameLineEdit, 3, 1, 1, 1);

        readResponsePushButton = new QPushButton(groupBox);
        readResponsePushButton->setObjectName(QString::fromUtf8("readResponsePushButton"));

        gridLayout->addWidget(readResponsePushButton, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ComponentIdentificationWindow);

        QMetaObject::connectSlotsByName(ComponentIdentificationWindow);
    } // setupUi

    void retranslateUi(QWidget *ComponentIdentificationWindow)
    {
        ComponentIdentificationWindow->setWindowTitle(QCoreApplication::translate("ComponentIdentificationWindow", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ComponentIdentificationWindow", "Request component identification", nullptr));
        sendRequestPushButton->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Send request", nullptr));
        label_5->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Destination ECU address:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ComponentIdentificationWindow", "Response component identification", nullptr));
        label_2->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Model name:", nullptr));
        label_4->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Unit name:", nullptr));
        label->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Product date:", nullptr));
        label_3->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Serial number:", nullptr));
        label_6->setText(QCoreApplication::translate("ComponentIdentificationWindow", "From ECU address:", nullptr));
        readResponsePushButton->setText(QCoreApplication::translate("ComponentIdentificationWindow", "Read response", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComponentIdentificationWindow: public Ui_ComponentIdentificationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTIDENTIFICATIONWINDOW_H
