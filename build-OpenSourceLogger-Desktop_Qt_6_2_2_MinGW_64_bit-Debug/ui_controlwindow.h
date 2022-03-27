/********************************************************************************
** Form generated from reading UI file 'controlwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLWINDOW_H
#define UI_CONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlWindow
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLabel *label_8;
    QSlider *pwm0VerticalSlider;
    QLabel *label_7;
    QSlider *pwm1VerticalSlider;
    QSlider *pwm2VerticalSlider;
    QLabel *label_5;
    QLabel *label;
    QSlider *pwm6VerticalSlider;
    QSlider *analogOutput0VerticalSlider;
    QLabel *label_2;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_23;
    QComboBox *canProtocolComboBox;
    QLabel *label_13;
    QComboBox *functionComboBox;
    QWidget *functionQWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QSlider *pwm5VerticalSlider;
    QSlider *analogOutput1VerticalSlider;
    QLabel *label_6;
    QSlider *pwm7VerticalSlider;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *stopLoggingDataPushButton;
    QPushButton *startLoggingDataPushButton;
    QSlider *pwm4VerticalSlider;
    QLabel *label_10;
    QLabel *label_11;
    QSlider *pwm3VerticalSlider;
    QLabel *label_9;
    QSlider *analogOutput2VerticalSlider;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QSpinBox *sampleTimeSpinBox;
    QLabel *label_15;
    QSpinBox *showSamplesSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *autoYAxisScaleCheckBox;
    QLabel *label_16;
    QDoubleSpinBox *minYAxisDoubleSpinBox;
    QLabel *label_17;
    QDoubleSpinBox *maxYAxisDoubleSpinBox;

    void setupUi(QWidget *ControlWindow)
    {
        if (ControlWindow->objectName().isEmpty())
            ControlWindow->setObjectName(QString::fromUtf8("ControlWindow"));
        ControlWindow->setWindowModality(Qt::NonModal);
        ControlWindow->resize(1228, 456);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/controller.png"), QSize(), QIcon::Normal, QIcon::Off);
        ControlWindow->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ControlWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_12 = new QLabel(ControlWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 17, 1, 1);

        label_8 = new QLabel(ControlWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 11, 1, 1);

        pwm0VerticalSlider = new QSlider(ControlWindow);
        pwm0VerticalSlider->setObjectName(QString::fromUtf8("pwm0VerticalSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pwm0VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm0VerticalSlider->setSizePolicy(sizePolicy);
        pwm0VerticalSlider->setMaximum(65535);
        pwm0VerticalSlider->setOrientation(Qt::Vertical);
        pwm0VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm0VerticalSlider, 1, 4, 1, 1);

        label_7 = new QLabel(ControlWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 10, 1, 1);

        pwm1VerticalSlider = new QSlider(ControlWindow);
        pwm1VerticalSlider->setObjectName(QString::fromUtf8("pwm1VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm1VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm1VerticalSlider->setSizePolicy(sizePolicy);
        pwm1VerticalSlider->setMaximum(65535);
        pwm1VerticalSlider->setOrientation(Qt::Vertical);
        pwm1VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm1VerticalSlider, 1, 5, 1, 1);

        pwm2VerticalSlider = new QSlider(ControlWindow);
        pwm2VerticalSlider->setObjectName(QString::fromUtf8("pwm2VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm2VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm2VerticalSlider->setSizePolicy(sizePolicy);
        pwm2VerticalSlider->setMaximum(65535);
        pwm2VerticalSlider->setOrientation(Qt::Vertical);
        pwm2VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm2VerticalSlider, 1, 6, 1, 1);

        label_5 = new QLabel(ControlWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 8, 1, 1);

        label = new QLabel(ControlWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 4, 1, 1);

        pwm6VerticalSlider = new QSlider(ControlWindow);
        pwm6VerticalSlider->setObjectName(QString::fromUtf8("pwm6VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm6VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm6VerticalSlider->setSizePolicy(sizePolicy);
        pwm6VerticalSlider->setMaximum(65535);
        pwm6VerticalSlider->setOrientation(Qt::Vertical);
        pwm6VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm6VerticalSlider, 1, 10, 1, 1);

        analogOutput0VerticalSlider = new QSlider(ControlWindow);
        analogOutput0VerticalSlider->setObjectName(QString::fromUtf8("analogOutput0VerticalSlider"));
        sizePolicy.setHeightForWidth(analogOutput0VerticalSlider->sizePolicy().hasHeightForWidth());
        analogOutput0VerticalSlider->setSizePolicy(sizePolicy);
        analogOutput0VerticalSlider->setMaximum(4095);
        analogOutput0VerticalSlider->setOrientation(Qt::Vertical);
        analogOutput0VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(analogOutput0VerticalSlider, 1, 12, 1, 1);

        label_2 = new QLabel(ControlWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 5, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_3->setVerticalSpacing(7);
        label_23 = new QLabel(ControlWindow);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_23);

        canProtocolComboBox = new QComboBox(ControlWindow);
        canProtocolComboBox->setObjectName(QString::fromUtf8("canProtocolComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, canProtocolComboBox);

        label_13 = new QLabel(ControlWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        functionComboBox = new QComboBox(ControlWindow);
        functionComboBox->setObjectName(QString::fromUtf8("functionComboBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, functionComboBox);


        gridLayout_3->addLayout(formLayout_3, 0, 0, 1, 1);

        functionQWidget = new QWidget(ControlWindow);
        functionQWidget->setObjectName(QString::fromUtf8("functionQWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(functionQWidget->sizePolicy().hasHeightForWidth());
        functionQWidget->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(functionQWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        gridLayout_3->addWidget(functionQWidget, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 17, 1, 1);

        label_4 = new QLabel(ControlWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 7, 1, 1);

        pwm5VerticalSlider = new QSlider(ControlWindow);
        pwm5VerticalSlider->setObjectName(QString::fromUtf8("pwm5VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm5VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm5VerticalSlider->setSizePolicy(sizePolicy);
        pwm5VerticalSlider->setMaximum(65535);
        pwm5VerticalSlider->setOrientation(Qt::Vertical);
        pwm5VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm5VerticalSlider, 1, 9, 1, 1);

        analogOutput1VerticalSlider = new QSlider(ControlWindow);
        analogOutput1VerticalSlider->setObjectName(QString::fromUtf8("analogOutput1VerticalSlider"));
        sizePolicy.setHeightForWidth(analogOutput1VerticalSlider->sizePolicy().hasHeightForWidth());
        analogOutput1VerticalSlider->setSizePolicy(sizePolicy);
        analogOutput1VerticalSlider->setMaximum(4095);
        analogOutput1VerticalSlider->setOrientation(Qt::Vertical);
        analogOutput1VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(analogOutput1VerticalSlider, 1, 13, 1, 1);

        label_6 = new QLabel(ControlWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 9, 1, 1);

        pwm7VerticalSlider = new QSlider(ControlWindow);
        pwm7VerticalSlider->setObjectName(QString::fromUtf8("pwm7VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm7VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm7VerticalSlider->setSizePolicy(sizePolicy);
        pwm7VerticalSlider->setMaximum(65535);
        pwm7VerticalSlider->setOrientation(Qt::Vertical);
        pwm7VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm7VerticalSlider, 1, 11, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        stopLoggingDataPushButton = new QPushButton(ControlWindow);
        stopLoggingDataPushButton->setObjectName(QString::fromUtf8("stopLoggingDataPushButton"));
        stopLoggingDataPushButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(stopLoggingDataPushButton->sizePolicy().hasHeightForWidth());
        stopLoggingDataPushButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/control_stop_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopLoggingDataPushButton->setIcon(icon1);

        horizontalLayout_5->addWidget(stopLoggingDataPushButton);

        startLoggingDataPushButton = new QPushButton(ControlWindow);
        startLoggingDataPushButton->setObjectName(QString::fromUtf8("startLoggingDataPushButton"));
        sizePolicy1.setHeightForWidth(startLoggingDataPushButton->sizePolicy().hasHeightForWidth());
        startLoggingDataPushButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/buttons/control_start_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        startLoggingDataPushButton->setIcon(icon2);

        horizontalLayout_5->addWidget(startLoggingDataPushButton);


        gridLayout->addLayout(horizontalLayout_5, 2, 17, 1, 1);

        pwm4VerticalSlider = new QSlider(ControlWindow);
        pwm4VerticalSlider->setObjectName(QString::fromUtf8("pwm4VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm4VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm4VerticalSlider->setSizePolicy(sizePolicy);
        pwm4VerticalSlider->setMaximum(65535);
        pwm4VerticalSlider->setOrientation(Qt::Vertical);
        pwm4VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm4VerticalSlider, 1, 8, 1, 1);

        label_10 = new QLabel(ControlWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 14, 1, 1);

        label_11 = new QLabel(ControlWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 12, 1, 1);

        pwm3VerticalSlider = new QSlider(ControlWindow);
        pwm3VerticalSlider->setObjectName(QString::fromUtf8("pwm3VerticalSlider"));
        sizePolicy.setHeightForWidth(pwm3VerticalSlider->sizePolicy().hasHeightForWidth());
        pwm3VerticalSlider->setSizePolicy(sizePolicy);
        pwm3VerticalSlider->setMaximum(65535);
        pwm3VerticalSlider->setOrientation(Qt::Vertical);
        pwm3VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(pwm3VerticalSlider, 1, 7, 1, 1);

        label_9 = new QLabel(ControlWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 13, 1, 1);

        analogOutput2VerticalSlider = new QSlider(ControlWindow);
        analogOutput2VerticalSlider->setObjectName(QString::fromUtf8("analogOutput2VerticalSlider"));
        sizePolicy.setHeightForWidth(analogOutput2VerticalSlider->sizePolicy().hasHeightForWidth());
        analogOutput2VerticalSlider->setSizePolicy(sizePolicy);
        analogOutput2VerticalSlider->setMaximum(4095);
        analogOutput2VerticalSlider->setOrientation(Qt::Vertical);
        analogOutput2VerticalSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(analogOutput2VerticalSlider, 1, 14, 1, 1);

        label_3 = new QLabel(ControlWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 6, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_14 = new QLabel(ControlWindow);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_14);

        sampleTimeSpinBox = new QSpinBox(ControlWindow);
        sampleTimeSpinBox->setObjectName(QString::fromUtf8("sampleTimeSpinBox"));
        sampleTimeSpinBox->setReadOnly(false);
        sampleTimeSpinBox->setMinimum(10);
        sampleTimeSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(sampleTimeSpinBox);

        label_15 = new QLabel(ControlWindow);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_15);

        showSamplesSpinBox = new QSpinBox(ControlWindow);
        showSamplesSpinBox->setObjectName(QString::fromUtf8("showSamplesSpinBox"));
        showSamplesSpinBox->setReadOnly(false);
        showSamplesSpinBox->setMinimum(10);
        showSamplesSpinBox->setMaximum(1000);

        horizontalLayout->addWidget(showSamplesSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        autoYAxisScaleCheckBox = new QCheckBox(ControlWindow);
        autoYAxisScaleCheckBox->setObjectName(QString::fromUtf8("autoYAxisScaleCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(autoYAxisScaleCheckBox->sizePolicy().hasHeightForWidth());
        autoYAxisScaleCheckBox->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(autoYAxisScaleCheckBox);

        label_16 = new QLabel(ControlWindow);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_16);

        minYAxisDoubleSpinBox = new QDoubleSpinBox(ControlWindow);
        minYAxisDoubleSpinBox->setObjectName(QString::fromUtf8("minYAxisDoubleSpinBox"));
        minYAxisDoubleSpinBox->setMinimum(-999999999999999983222784.000000000000000);
        minYAxisDoubleSpinBox->setMaximum(999999999999999983222784.000000000000000);

        horizontalLayout_3->addWidget(minYAxisDoubleSpinBox);

        label_17 = new QLabel(ControlWindow);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy3.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_17);

        maxYAxisDoubleSpinBox = new QDoubleSpinBox(ControlWindow);
        maxYAxisDoubleSpinBox->setObjectName(QString::fromUtf8("maxYAxisDoubleSpinBox"));
        maxYAxisDoubleSpinBox->setMinimum(-999999999999999983222784.000000000000000);
        maxYAxisDoubleSpinBox->setMaximum(999999999999999983222784.000000000000000);

        horizontalLayout_3->addWidget(maxYAxisDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 2, 4, 1, 11);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);


        retranslateUi(ControlWindow);

        QMetaObject::connectSlotsByName(ControlWindow);
    } // setupUi

    void retranslateUi(QWidget *ControlWindow)
    {
        ControlWindow->setWindowTitle(QCoreApplication::translate("ControlWindow", "Measurement and control", nullptr));
        label_12->setText(QCoreApplication::translate("ControlWindow", "CAN", nullptr));
        label_8->setText(QCoreApplication::translate("ControlWindow", "PWM7", nullptr));
        label_7->setText(QCoreApplication::translate("ControlWindow", "PWM6", nullptr));
        label_5->setText(QCoreApplication::translate("ControlWindow", "PWM4", nullptr));
        label->setText(QCoreApplication::translate("ControlWindow", "PWM0", nullptr));
        label_2->setText(QCoreApplication::translate("ControlWindow", "PWM1", nullptr));
        label_23->setText(QCoreApplication::translate("ControlWindow", "CAN Protocol", nullptr));
        label_13->setText(QCoreApplication::translate("ControlWindow", "Function:", nullptr));
        label_4->setText(QCoreApplication::translate("ControlWindow", "PWM3", nullptr));
        label_6->setText(QCoreApplication::translate("ControlWindow", "PWM5", nullptr));
        stopLoggingDataPushButton->setText(QCoreApplication::translate("ControlWindow", "Stop logging data", nullptr));
        startLoggingDataPushButton->setText(QCoreApplication::translate("ControlWindow", "Start logging data", nullptr));
        label_10->setText(QCoreApplication::translate("ControlWindow", "AO2", nullptr));
        label_11->setText(QCoreApplication::translate("ControlWindow", "AO0", nullptr));
        label_9->setText(QCoreApplication::translate("ControlWindow", "AO1", nullptr));
        label_3->setText(QCoreApplication::translate("ControlWindow", "PWM2", nullptr));
        label_14->setText(QCoreApplication::translate("ControlWindow", "Sample time:", nullptr));
        label_15->setText(QCoreApplication::translate("ControlWindow", "Show samples", nullptr));
        autoYAxisScaleCheckBox->setText(QCoreApplication::translate("ControlWindow", "Auto Y-axis scale", nullptr));
        label_16->setText(QCoreApplication::translate("ControlWindow", "Min Y-axis:", nullptr));
        label_17->setText(QCoreApplication::translate("ControlWindow", "Max Y-axis:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlWindow: public Ui_ControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWINDOW_H
