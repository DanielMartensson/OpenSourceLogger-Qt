/********************************************************************************
** Form generated from reading UI file 'connectionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONWINDOW_H
#define UI_CONNECTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *selectedUSBportComboBox;
    QPushButton *usbDisconnectPushButton;
    QPushButton *usbConnectPushButton;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLineEdit *hostnameLineEdit;
    QLineEdit *databaseNameLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_5;
    QPushButton *databaseDisconnectPushButton;
    QPushButton *databaseConnectPushButton;
    QLabel *label_6;
    QComboBox *databaseDriverComboBox;
    QSpinBox *portSpinBox;
    QLabel *label_7;

    void setupUi(QWidget *ConnectionWindow)
    {
        if (ConnectionWindow->objectName().isEmpty())
            ConnectionWindow->setObjectName(QString::fromUtf8("ConnectionWindow"));
        ConnectionWindow->setWindowModality(Qt::NonModal);
        ConnectionWindow->resize(370, 370);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectionWindow->sizePolicy().hasHeightForWidth());
        ConnectionWindow->setSizePolicy(sizePolicy);
        ConnectionWindow->setMinimumSize(QSize(370, 370));
        ConnectionWindow->setMaximumSize(QSize(370, 370));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConnectionWindow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ConnectionWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        groupBox = new QGroupBox(ConnectionWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        selectedUSBportComboBox = new QComboBox(groupBox);
        selectedUSBportComboBox->setObjectName(QString::fromUtf8("selectedUSBportComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, selectedUSBportComboBox);

        usbDisconnectPushButton = new QPushButton(groupBox);
        usbDisconnectPushButton->setObjectName(QString::fromUtf8("usbDisconnectPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/buttons/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        usbDisconnectPushButton->setIcon(icon1);

        formLayout->setWidget(1, QFormLayout::LabelRole, usbDisconnectPushButton);

        usbConnectPushButton = new QPushButton(groupBox);
        usbConnectPushButton->setObjectName(QString::fromUtf8("usbConnectPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/buttons/server_connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        usbConnectPushButton->setIcon(icon2);

        formLayout->setWidget(1, QFormLayout::FieldRole, usbConnectPushButton);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ConnectionWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        hostnameLineEdit = new QLineEdit(groupBox_2);
        hostnameLineEdit->setObjectName(QString::fromUtf8("hostnameLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, hostnameLineEdit);

        databaseNameLineEdit = new QLineEdit(groupBox_2);
        databaseNameLineEdit->setObjectName(QString::fromUtf8("databaseNameLineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, databaseNameLineEdit);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        usernameLineEdit = new QLineEdit(groupBox_2);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, usernameLineEdit);

        passwordLineEdit = new QLineEdit(groupBox_2);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, passwordLineEdit);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_5);

        databaseDisconnectPushButton = new QPushButton(groupBox_2);
        databaseDisconnectPushButton->setObjectName(QString::fromUtf8("databaseDisconnectPushButton"));
        databaseDisconnectPushButton->setIcon(icon1);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, databaseDisconnectPushButton);

        databaseConnectPushButton = new QPushButton(groupBox_2);
        databaseConnectPushButton->setObjectName(QString::fromUtf8("databaseConnectPushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/buttons/database_connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        databaseConnectPushButton->setIcon(icon3);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, databaseConnectPushButton);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        databaseDriverComboBox = new QComboBox(groupBox_2);
        databaseDriverComboBox->addItem(QString());
        databaseDriverComboBox->addItem(QString());
        databaseDriverComboBox->addItem(QString());
        databaseDriverComboBox->setObjectName(QString::fromUtf8("databaseDriverComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, databaseDriverComboBox);

        portSpinBox = new QSpinBox(groupBox_2);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMaximum(999999);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, portSpinBox);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(ConnectionWindow);

        QMetaObject::connectSlotsByName(ConnectionWindow);
    } // setupUi

    void retranslateUi(QWidget *ConnectionWindow)
    {
        ConnectionWindow->setWindowTitle(QCoreApplication::translate("ConnectionWindow", "Connection", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConnectionWindow", "USB", nullptr));
        label->setText(QCoreApplication::translate("ConnectionWindow", "Port:", nullptr));
        usbDisconnectPushButton->setText(QCoreApplication::translate("ConnectionWindow", "Disconnect", nullptr));
        usbConnectPushButton->setText(QCoreApplication::translate("ConnectionWindow", "Connect", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConnectionWindow", "Database", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectionWindow", "Hostname:", nullptr));
        label_3->setText(QCoreApplication::translate("ConnectionWindow", "Database name:", nullptr));
        label_4->setText(QCoreApplication::translate("ConnectionWindow", "Username:", nullptr));
        label_5->setText(QCoreApplication::translate("ConnectionWindow", "Password:", nullptr));
        databaseDisconnectPushButton->setText(QCoreApplication::translate("ConnectionWindow", "Disconnect", nullptr));
        databaseConnectPushButton->setText(QCoreApplication::translate("ConnectionWindow", "Connect", nullptr));
        label_6->setText(QCoreApplication::translate("ConnectionWindow", "Database driver:", nullptr));
        databaseDriverComboBox->setItemText(0, QCoreApplication::translate("ConnectionWindow", "QMYSQL", nullptr));
        databaseDriverComboBox->setItemText(1, QCoreApplication::translate("ConnectionWindow", "MARIADB", nullptr));
        databaseDriverComboBox->setItemText(2, QCoreApplication::translate("ConnectionWindow", "QODBC", nullptr));

        label_7->setText(QCoreApplication::translate("ConnectionWindow", "Port:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionWindow: public Ui_ConnectionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONWINDOW_H
