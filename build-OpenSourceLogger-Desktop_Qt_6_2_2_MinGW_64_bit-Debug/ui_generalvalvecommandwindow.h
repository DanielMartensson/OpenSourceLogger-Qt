/********************************************************************************
** Form generated from reading UI file 'generalvalvecommandwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALVALVECOMMANDWINDOW_H
#define UI_GENERALVALVECOMMANDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralValveCommandWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *destinationEcuAddressSpinBox;
    QDial *extendedFlowDial;

    void setupUi(QWidget *GeneralValveCommandWindow)
    {
        if (GeneralValveCommandWindow->objectName().isEmpty())
            GeneralValveCommandWindow->setObjectName(QString::fromUtf8("GeneralValveCommandWindow"));
        GeneralValveCommandWindow->resize(427, 340);
        gridLayout = new QGridLayout(GeneralValveCommandWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(GeneralValveCommandWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        destinationEcuAddressSpinBox = new QSpinBox(GeneralValveCommandWindow);
        destinationEcuAddressSpinBox->setObjectName(QString::fromUtf8("destinationEcuAddressSpinBox"));
        destinationEcuAddressSpinBox->setMaximum(255);

        gridLayout->addWidget(destinationEcuAddressSpinBox, 0, 1, 1, 1);

        extendedFlowDial = new QDial(GeneralValveCommandWindow);
        extendedFlowDial->setObjectName(QString::fromUtf8("extendedFlowDial"));
        extendedFlowDial->setMinimum(-65535);
        extendedFlowDial->setMaximum(65535);
        extendedFlowDial->setValue(0);

        gridLayout->addWidget(extendedFlowDial, 3, 0, 1, 2);


        retranslateUi(GeneralValveCommandWindow);

        QMetaObject::connectSlotsByName(GeneralValveCommandWindow);
    } // setupUi

    void retranslateUi(QWidget *GeneralValveCommandWindow)
    {
        GeneralValveCommandWindow->setWindowTitle(QCoreApplication::translate("GeneralValveCommandWindow", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("GeneralValveCommandWindow", "Destination ECU address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralValveCommandWindow: public Ui_GeneralValveCommandWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALVALVECOMMANDWINDOW_H
