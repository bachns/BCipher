/********************************************************************************
** Form generated from reading UI file 'EncryptionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTIONWIDGET_H
#define UI_ENCRYPTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptionWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *fileNameLbl;
    QLineEdit *keyLedr;
    QLabel *keyLbl;
    QLineEdit *fileNameLedr;
    QPushButton *inputBrsBtn;
    QPushButton *showHideBtn;
    QLabel *cipherLbl;
    QLineEdit *cipherLedr;
    QPushButton *cipherBrsBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *encryptionBtn;

    void setupUi(QWidget *EncryptionWidget)
    {
        if (EncryptionWidget->objectName().isEmpty())
            EncryptionWidget->setObjectName(QStringLiteral("EncryptionWidget"));
        EncryptionWidget->resize(404, 176);
        gridLayout_2 = new QGridLayout(EncryptionWidget);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fileNameLbl = new QLabel(EncryptionWidget);
        fileNameLbl->setObjectName(QStringLiteral("fileNameLbl"));

        gridLayout->addWidget(fileNameLbl, 0, 0, 1, 1);

        keyLedr = new QLineEdit(EncryptionWidget);
        keyLedr->setObjectName(QStringLiteral("keyLedr"));
        keyLedr->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(keyLedr, 1, 1, 1, 1);

        keyLbl = new QLabel(EncryptionWidget);
        keyLbl->setObjectName(QStringLiteral("keyLbl"));

        gridLayout->addWidget(keyLbl, 1, 0, 1, 1);

        fileNameLedr = new QLineEdit(EncryptionWidget);
        fileNameLedr->setObjectName(QStringLiteral("fileNameLedr"));

        gridLayout->addWidget(fileNameLedr, 0, 1, 1, 1);

        inputBrsBtn = new QPushButton(EncryptionWidget);
        inputBrsBtn->setObjectName(QStringLiteral("inputBrsBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/browser.svg"), QSize(), QIcon::Normal, QIcon::Off);
        inputBrsBtn->setIcon(icon);

        gridLayout->addWidget(inputBrsBtn, 0, 2, 1, 1);

        showHideBtn = new QPushButton(EncryptionWidget);
        showHideBtn->setObjectName(QStringLiteral("showHideBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/hide.svg"), QSize(), QIcon::Normal, QIcon::Off);
        showHideBtn->setIcon(icon1);

        gridLayout->addWidget(showHideBtn, 1, 2, 1, 1);

        cipherLbl = new QLabel(EncryptionWidget);
        cipherLbl->setObjectName(QStringLiteral("cipherLbl"));

        gridLayout->addWidget(cipherLbl, 2, 0, 1, 1);

        cipherLedr = new QLineEdit(EncryptionWidget);
        cipherLedr->setObjectName(QStringLiteral("cipherLedr"));
        cipherLedr->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(cipherLedr, 2, 1, 1, 1);

        cipherBrsBtn = new QPushButton(EncryptionWidget);
        cipherBrsBtn->setObjectName(QStringLiteral("cipherBrsBtn"));
        cipherBrsBtn->setIcon(icon);

        gridLayout->addWidget(cipherBrsBtn, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progressBar = new QProgressBar(EncryptionWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        encryptionBtn = new QPushButton(EncryptionWidget);
        encryptionBtn->setObjectName(QStringLiteral("encryptionBtn"));
        encryptionBtn->setMinimumSize(QSize(100, 40));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/lock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        encryptionBtn->setIcon(icon2);
        encryptionBtn->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(encryptionBtn);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(EncryptionWidget);

        QMetaObject::connectSlotsByName(EncryptionWidget);
    } // setupUi

    void retranslateUi(QWidget *EncryptionWidget)
    {
        EncryptionWidget->setWindowTitle(QApplication::translate("EncryptionWidget", "EncryptionWidget", nullptr));
        fileNameLbl->setText(QApplication::translate("EncryptionWidget", "File c\341\272\247n m\303\243 h\303\263a:", nullptr));
        keyLbl->setText(QApplication::translate("EncryptionWidget", "Kh\303\263a m\303\243 h\303\263a:", nullptr));
        inputBrsBtn->setText(QString());
        showHideBtn->setText(QString());
        cipherLbl->setText(QApplication::translate("EncryptionWidget", "File m\303\243 h\303\263a:", nullptr));
        cipherBrsBtn->setText(QString());
        encryptionBtn->setText(QApplication::translate("EncryptionWidget", "M\303\243 h\303\263a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncryptionWidget: public Ui_EncryptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTIONWIDGET_H
