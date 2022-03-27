/********************************************************************************
** Form generated from reading UI file 'stm32window.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STM32WINDOW_H
#define UI_STM32WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STM32Window
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QComboBox *sdadcPeripheralComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QComboBox *sdadcConfigurationIndexComboBox;
    QComboBox *sdadcGainComboBox;
    QLabel *label_11;
    QLabel *label_10;
    QPushButton *sendInputGainPushButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLineEdit *sdadcGainConfigurationIndex0LineEdit;
    QLabel *label_19;
    QLabel *label_12;
    QLineEdit *sdadcGainConfigurationIndex1LineEdit;
    QLabel *label_13;
    QLineEdit *sdadcGainConfigurationIndex2LineEdit;
    QPushButton *receiveInputGainsPushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *pwmPrescalerLabel;
    QPushButton *sendPrescalerPushButton;
    QSpinBox *pwmPrescalerSpinBox;
    QLabel *label;
    QComboBox *pwmPeripheralComboBox;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QSpinBox *pwm_0_3_prescalerSpinBox;
    QLabel *label_2;
    QSpinBox *pwm_4_7_prescalerSpinBox;
    QPushButton *receivePrescalersPushButton;

    void setupUi(QWidget *STM32Window)
    {
        if (STM32Window->objectName().isEmpty())
            STM32Window->setObjectName(QString::fromUtf8("STM32Window"));
        STM32Window->resize(760, 536);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/computer_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        STM32Window->setWindowIcon(icon);
        gridLayout = new QGridLayout(STM32Window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(STM32Window);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_9);

        sdadcPeripheralComboBox = new QComboBox(groupBox_2);
        sdadcPeripheralComboBox->setObjectName(QString::fromUtf8("sdadcPeripheralComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sdadcPeripheralComboBox->sizePolicy().hasHeightForWidth());
        sdadcPeripheralComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(sdadcPeripheralComboBox);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sdadcConfigurationIndexComboBox = new QComboBox(groupBox_3);
        sdadcConfigurationIndexComboBox->setObjectName(QString::fromUtf8("sdadcConfigurationIndexComboBox"));

        gridLayout_3->addWidget(sdadcConfigurationIndexComboBox, 0, 1, 1, 1);

        sdadcGainComboBox = new QComboBox(groupBox_3);
        sdadcGainComboBox->setObjectName(QString::fromUtf8("sdadcGainComboBox"));

        gridLayout_3->addWidget(sdadcGainComboBox, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        sendInputGainPushButton = new QPushButton(groupBox_3);
        sendInputGainPushButton->setObjectName(QString::fromUtf8("sendInputGainPushButton"));

        gridLayout_3->addWidget(sendInputGainPushButton, 3, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_3, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        sdadcGainConfigurationIndex0LineEdit = new QLineEdit(groupBox_4);
        sdadcGainConfigurationIndex0LineEdit->setObjectName(QString::fromUtf8("sdadcGainConfigurationIndex0LineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sdadcGainConfigurationIndex0LineEdit->sizePolicy().hasHeightForWidth());
        sdadcGainConfigurationIndex0LineEdit->setSizePolicy(sizePolicy3);
        sdadcGainConfigurationIndex0LineEdit->setReadOnly(true);

        gridLayout_5->addWidget(sdadcGainConfigurationIndex0LineEdit, 0, 1, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_19, 2, 0, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        sdadcGainConfigurationIndex1LineEdit = new QLineEdit(groupBox_4);
        sdadcGainConfigurationIndex1LineEdit->setObjectName(QString::fromUtf8("sdadcGainConfigurationIndex1LineEdit"));
        sizePolicy3.setHeightForWidth(sdadcGainConfigurationIndex1LineEdit->sizePolicy().hasHeightForWidth());
        sdadcGainConfigurationIndex1LineEdit->setSizePolicy(sizePolicy3);
        sdadcGainConfigurationIndex1LineEdit->setReadOnly(true);

        gridLayout_5->addWidget(sdadcGainConfigurationIndex1LineEdit, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        sdadcGainConfigurationIndex2LineEdit = new QLineEdit(groupBox_4);
        sdadcGainConfigurationIndex2LineEdit->setObjectName(QString::fromUtf8("sdadcGainConfigurationIndex2LineEdit"));
        sizePolicy3.setHeightForWidth(sdadcGainConfigurationIndex2LineEdit->sizePolicy().hasHeightForWidth());
        sdadcGainConfigurationIndex2LineEdit->setSizePolicy(sizePolicy3);
        sdadcGainConfigurationIndex2LineEdit->setReadOnly(true);

        gridLayout_5->addWidget(sdadcGainConfigurationIndex2LineEdit, 2, 1, 1, 1);

        receiveInputGainsPushButton = new QPushButton(groupBox_4);
        receiveInputGainsPushButton->setObjectName(QString::fromUtf8("receiveInputGainsPushButton"));

        gridLayout_5->addWidget(receiveInputGainsPushButton, 3, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_4, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(STM32Window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pwmPrescalerLabel = new QLabel(groupBox_5);
        pwmPrescalerLabel->setObjectName(QString::fromUtf8("pwmPrescalerLabel"));
        sizePolicy.setHeightForWidth(pwmPrescalerLabel->sizePolicy().hasHeightForWidth());
        pwmPrescalerLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pwmPrescalerLabel, 1, 0, 1, 1);

        sendPrescalerPushButton = new QPushButton(groupBox_5);
        sendPrescalerPushButton->setObjectName(QString::fromUtf8("sendPrescalerPushButton"));

        gridLayout_2->addWidget(sendPrescalerPushButton, 2, 0, 1, 2);

        pwmPrescalerSpinBox = new QSpinBox(groupBox_5);
        pwmPrescalerSpinBox->setObjectName(QString::fromUtf8("pwmPrescalerSpinBox"));
        pwmPrescalerSpinBox->setMaximum(65535);

        gridLayout_2->addWidget(pwmPrescalerSpinBox, 1, 1, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        pwmPeripheralComboBox = new QComboBox(groupBox_5);
        pwmPeripheralComboBox->setObjectName(QString::fromUtf8("pwmPeripheralComboBox"));

        gridLayout_2->addWidget(pwmPeripheralComboBox, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        pwm_0_3_prescalerSpinBox = new QSpinBox(groupBox_6);
        pwm_0_3_prescalerSpinBox->setObjectName(QString::fromUtf8("pwm_0_3_prescalerSpinBox"));
        pwm_0_3_prescalerSpinBox->setReadOnly(true);
        pwm_0_3_prescalerSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pwm_0_3_prescalerSpinBox->setMaximum(65535);

        gridLayout_6->addWidget(pwm_0_3_prescalerSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        pwm_4_7_prescalerSpinBox = new QSpinBox(groupBox_6);
        pwm_4_7_prescalerSpinBox->setObjectName(QString::fromUtf8("pwm_4_7_prescalerSpinBox"));
        pwm_4_7_prescalerSpinBox->setReadOnly(true);
        pwm_4_7_prescalerSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pwm_4_7_prescalerSpinBox->setMaximum(65535);

        gridLayout_6->addWidget(pwm_4_7_prescalerSpinBox, 1, 1, 1, 1);

        receivePrescalersPushButton = new QPushButton(groupBox_6);
        receivePrescalersPushButton->setObjectName(QString::fromUtf8("receivePrescalersPushButton"));

        gridLayout_6->addWidget(receivePrescalersPushButton, 2, 0, 1, 2);


        gridLayout_7->addWidget(groupBox_6, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(STM32Window);

        QMetaObject::connectSlotsByName(STM32Window);
    } // setupUi

    void retranslateUi(QWidget *STM32Window)
    {
        STM32Window->setWindowTitle(QCoreApplication::translate("STM32Window", "STM32", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("STM32Window", "Analog Input Gain", nullptr));
        label_9->setText(QCoreApplication::translate("STM32Window", "SDADC peripheral:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("STM32Window", "Transmit gain", nullptr));
        label_11->setText(QCoreApplication::translate("STM32Window", "SDADC gain:", nullptr));
        label_10->setText(QCoreApplication::translate("STM32Window", "SDADC configuration index:", nullptr));
        sendInputGainPushButton->setText(QCoreApplication::translate("STM32Window", "Send input gain", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("STM32Window", "Receive gains", nullptr));
        label_19->setText(QCoreApplication::translate("STM32Window", "SDADC gain configuration index 2:", nullptr));
        label_12->setText(QCoreApplication::translate("STM32Window", "SDADC gain configuration index 0:", nullptr));
        label_13->setText(QCoreApplication::translate("STM32Window", "SDADC gain configuration index 1:", nullptr));
        receiveInputGainsPushButton->setText(QCoreApplication::translate("STM32Window", "Receive input gains", nullptr));
        groupBox->setTitle(QCoreApplication::translate("STM32Window", "PWM Prescaler", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("STM32Window", "Transmit prescaler", nullptr));
        pwmPrescalerLabel->setText(QCoreApplication::translate("STM32Window", "PWM prescaler:", nullptr));
        sendPrescalerPushButton->setText(QCoreApplication::translate("STM32Window", "Send prescaler", nullptr));
        label->setText(QCoreApplication::translate("STM32Window", "PWM peripheral:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("STM32Window", "Receive prescalers", nullptr));
        label_3->setText(QCoreApplication::translate("STM32Window", "PWM 0-3 prescaler:", nullptr));
        label_2->setText(QCoreApplication::translate("STM32Window", "PWM 4-7 prescaler:", nullptr));
        receivePrescalersPushButton->setText(QCoreApplication::translate("STM32Window", "Receive prescalers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class STM32Window: public Ui_STM32Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STM32WINDOW_H
