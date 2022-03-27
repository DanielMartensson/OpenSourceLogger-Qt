/********************************************************************************
** Form generated from reading UI file 'viewwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWWINDOW_H
#define UI_VIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QPushButton *plotDataPushButton;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *measurementTableWidget;
    QPushButton *downloadDataPushButton;
    QPushButton *deleteDataPushButton;
    QSpinBox *toRowSpinBox;
    QLabel *label_3;
    QSpinBox *fromRowSpinBox;
    QComboBox *measurementIDComboBox;
    QPushButton *deleteColumnsPushButton;
    QSpinBox *jumpRowSpinBox;

    void setupUi(QWidget *ViewWindow)
    {
        if (ViewWindow->objectName().isEmpty())
            ViewWindow->setObjectName(QString::fromUtf8("ViewWindow"));
        ViewWindow->resize(1092, 393);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/view.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ViewWindow->setWindowIcon(icon);
        gridLayout = new QGridLayout(ViewWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(ViewWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        plotDataPushButton = new QPushButton(ViewWindow);
        plotDataPushButton->setObjectName(QString::fromUtf8("plotDataPushButton"));

        gridLayout->addWidget(plotDataPushButton, 0, 10, 1, 1);

        label_2 = new QLabel(ViewWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 4, 1, 1);

        label = new QLabel(ViewWindow);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        measurementTableWidget = new QTableWidget(ViewWindow);
        measurementTableWidget->setObjectName(QString::fromUtf8("measurementTableWidget"));
        measurementTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        measurementTableWidget->setSelectionBehavior(QAbstractItemView::SelectColumns);

        gridLayout->addWidget(measurementTableWidget, 1, 2, 1, 12);

        downloadDataPushButton = new QPushButton(ViewWindow);
        downloadDataPushButton->setObjectName(QString::fromUtf8("downloadDataPushButton"));

        gridLayout->addWidget(downloadDataPushButton, 0, 11, 1, 1);

        deleteDataPushButton = new QPushButton(ViewWindow);
        deleteDataPushButton->setObjectName(QString::fromUtf8("deleteDataPushButton"));

        gridLayout->addWidget(deleteDataPushButton, 0, 12, 1, 1);

        toRowSpinBox = new QSpinBox(ViewWindow);
        toRowSpinBox->setObjectName(QString::fromUtf8("toRowSpinBox"));
        toRowSpinBox->setMinimum(1);
        toRowSpinBox->setMaximum(999999999);
        toRowSpinBox->setValue(1);

        gridLayout->addWidget(toRowSpinBox, 0, 9, 1, 1);

        label_3 = new QLabel(ViewWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 0, 8, 1, 1);

        fromRowSpinBox = new QSpinBox(ViewWindow);
        fromRowSpinBox->setObjectName(QString::fromUtf8("fromRowSpinBox"));
        fromRowSpinBox->setMinimum(1);
        fromRowSpinBox->setMaximum(999999999);

        gridLayout->addWidget(fromRowSpinBox, 0, 5, 1, 1);

        measurementIDComboBox = new QComboBox(ViewWindow);
        measurementIDComboBox->setObjectName(QString::fromUtf8("measurementIDComboBox"));

        gridLayout->addWidget(measurementIDComboBox, 0, 3, 1, 1);

        deleteColumnsPushButton = new QPushButton(ViewWindow);
        deleteColumnsPushButton->setObjectName(QString::fromUtf8("deleteColumnsPushButton"));

        gridLayout->addWidget(deleteColumnsPushButton, 0, 13, 1, 1);

        jumpRowSpinBox = new QSpinBox(ViewWindow);
        jumpRowSpinBox->setObjectName(QString::fromUtf8("jumpRowSpinBox"));
        jumpRowSpinBox->setMinimum(1);
        jumpRowSpinBox->setMaximum(999999999);

        gridLayout->addWidget(jumpRowSpinBox, 0, 7, 1, 1);


        retranslateUi(ViewWindow);

        QMetaObject::connectSlotsByName(ViewWindow);
    } // setupUi

    void retranslateUi(QWidget *ViewWindow)
    {
        ViewWindow->setWindowTitle(QCoreApplication::translate("ViewWindow", "View", nullptr));
        label_4->setText(QCoreApplication::translate("ViewWindow", "Jump row:", nullptr));
        plotDataPushButton->setText(QCoreApplication::translate("ViewWindow", "Plot data", nullptr));
        label_2->setText(QCoreApplication::translate("ViewWindow", "From row:", nullptr));
        label->setText(QCoreApplication::translate("ViewWindow", "Measurement ID:", nullptr));
        downloadDataPushButton->setText(QCoreApplication::translate("ViewWindow", "Download data", nullptr));
        deleteDataPushButton->setText(QCoreApplication::translate("ViewWindow", "Delete data", nullptr));
        label_3->setText(QCoreApplication::translate("ViewWindow", "To row:", nullptr));
        deleteColumnsPushButton->setText(QCoreApplication::translate("ViewWindow", "Delete columns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewWindow: public Ui_ViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWWINDOW_H
