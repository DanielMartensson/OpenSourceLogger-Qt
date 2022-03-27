/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *aboutLogoLabel;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QString::fromUtf8("AboutWindow"));
        AboutWindow->resize(600, 150);
        AboutWindow->setMinimumSize(QSize(600, 150));
        AboutWindow->setMaximumSize(QSize(600, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/buttons/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AboutWindow->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(AboutWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        aboutLogoLabel = new QLabel(AboutWindow);
        aboutLogoLabel->setObjectName(QString::fromUtf8("aboutLogoLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutLogoLabel->sizePolicy().hasHeightForWidth());
        aboutLogoLabel->setSizePolicy(sizePolicy);
        aboutLogoLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/aboutLogo.png")));
        aboutLogoLabel->setScaledContents(true);

        verticalLayout->addWidget(aboutLogoLabel);

        label_2 = new QLabel(AboutWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_2);

        label = new QLabel(AboutWindow);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(AboutWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setTextFormat(Qt::RichText);
        label_3->setOpenExternalLinks(true);
        label_3->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QWidget *AboutWindow)
    {
        AboutWindow->setWindowTitle(QCoreApplication::translate("AboutWindow", "About", nullptr));
        aboutLogoLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("AboutWindow", "Year: 2022", nullptr));
        label->setText(QCoreApplication::translate("AboutWindow", "Creator: Daniel M\303\245rtensson", nullptr));
        label_3->setText(QCoreApplication::translate("AboutWindow", "GitHub: <a href=\"https://github.com/DanielMartensson/OpenSourceLogger\">OpenSourceLogger</a>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
