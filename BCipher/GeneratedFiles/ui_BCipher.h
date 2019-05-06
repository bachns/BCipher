/********************************************************************************
** Form generated from reading UI file 'BCipher.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCIPHER_H
#define UI_BCIPHER_H

#include <DecryptionWidget.h>
#include <EncryptionWidget.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BCipherClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *encryptionBtn;
    QLabel *encryptionLbl;
    QVBoxLayout *verticalLayout_2;
    QPushButton *decryptionBtn;
    QLabel *decryptionLbl;
    QVBoxLayout *verticalLayout_3;
    QPushButton *informationBtn;
    QLabel *informationLbl;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    EncryptionWidget *encryptionPage;
    DecryptionWidget *decryptionPage;

    void setupUi(QMainWindow *BCipherClass)
    {
        if (BCipherClass->objectName().isEmpty())
            BCipherClass->setObjectName(QStringLiteral("BCipherClass"));
        BCipherClass->resize(480, 240);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/lock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        BCipherClass->setWindowIcon(icon);
        centralWidget = new QWidget(BCipherClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(10);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        encryptionBtn = new QPushButton(centralWidget);
        encryptionBtn->setObjectName(QStringLiteral("encryptionBtn"));
        encryptionBtn->setMinimumSize(QSize(60, 50));
        encryptionBtn->setIcon(icon);
        encryptionBtn->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(encryptionBtn);

        encryptionLbl = new QLabel(centralWidget);
        encryptionLbl->setObjectName(QStringLiteral("encryptionLbl"));
        encryptionLbl->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(encryptionLbl);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        decryptionBtn = new QPushButton(centralWidget);
        decryptionBtn->setObjectName(QStringLiteral("decryptionBtn"));
        decryptionBtn->setMinimumSize(QSize(60, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/unlock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        decryptionBtn->setIcon(icon1);
        decryptionBtn->setIconSize(QSize(40, 40));

        verticalLayout_2->addWidget(decryptionBtn);

        decryptionLbl = new QLabel(centralWidget);
        decryptionLbl->setObjectName(QStringLiteral("decryptionLbl"));
        decryptionLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(decryptionLbl);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        informationBtn = new QPushButton(centralWidget);
        informationBtn->setObjectName(QStringLiteral("informationBtn"));
        informationBtn->setMinimumSize(QSize(60, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/information.svg"), QSize(), QIcon::Normal, QIcon::Off);
        informationBtn->setIcon(icon2);
        informationBtn->setIconSize(QSize(40, 40));

        verticalLayout_3->addWidget(informationBtn);

        informationLbl = new QLabel(centralWidget);
        informationLbl->setObjectName(QStringLiteral("informationLbl"));
        informationLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(informationLbl);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(394, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        encryptionPage = new EncryptionWidget();
        encryptionPage->setObjectName(QStringLiteral("encryptionPage"));
        stackedWidget->addWidget(encryptionPage);
        decryptionPage = new DecryptionWidget();
        decryptionPage->setObjectName(QStringLiteral("decryptionPage"));
        stackedWidget->addWidget(decryptionPage);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 4);

        BCipherClass->setCentralWidget(centralWidget);

        retranslateUi(BCipherClass);

        QMetaObject::connectSlotsByName(BCipherClass);
    } // setupUi

    void retranslateUi(QMainWindow *BCipherClass)
    {
        BCipherClass->setWindowTitle(QApplication::translate("BCipherClass", "BCipher", nullptr));
        encryptionBtn->setText(QString());
        encryptionLbl->setText(QApplication::translate("BCipherClass", "M\303\243 h\303\263a", nullptr));
        decryptionBtn->setText(QString());
        decryptionLbl->setText(QApplication::translate("BCipherClass", "Gi\341\272\243i m\303\243", nullptr));
        informationBtn->setText(QString());
        informationLbl->setText(QApplication::translate("BCipherClass", "Th\303\264ng tin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BCipherClass: public Ui_BCipherClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCIPHER_H
