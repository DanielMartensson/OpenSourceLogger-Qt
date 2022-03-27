/********************************************************************************
** Form generated from reading UI file 'canterminalwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANTERMINALWINDOW_H
#define UI_CANTERMINALWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CANTerminalWindow
{
public:
    QGridLayout *gridLayout;
    QTableWidget *terminalTableWidget;

    void setupUi(QWidget *CANTerminalWindow)
    {
        if (CANTerminalWindow->objectName().isEmpty())
            CANTerminalWindow->setObjectName(QString::fromUtf8("CANTerminalWindow"));
        CANTerminalWindow->resize(336, 237);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CANTerminalWindow->sizePolicy().hasHeightForWidth());
        CANTerminalWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/application_xp_terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        CANTerminalWindow->setWindowIcon(icon);
        CANTerminalWindow->setAutoFillBackground(false);
        gridLayout = new QGridLayout(CANTerminalWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        terminalTableWidget = new QTableWidget(CANTerminalWindow);
        terminalTableWidget->setObjectName(QString::fromUtf8("terminalTableWidget"));
        terminalTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        terminalTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        terminalTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(terminalTableWidget, 0, 0, 1, 1);


        retranslateUi(CANTerminalWindow);

        QMetaObject::connectSlotsByName(CANTerminalWindow);
    } // setupUi

    void retranslateUi(QWidget *CANTerminalWindow)
    {
        CANTerminalWindow->setWindowTitle(QCoreApplication::translate("CANTerminalWindow", "CANTerminal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CANTerminalWindow: public Ui_CANTerminalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANTERMINALWINDOW_H
