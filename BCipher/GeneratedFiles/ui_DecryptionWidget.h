/********************************************************************************
** Form generated from reading UI file 'DecryptionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECRYPTIONWIDGET_H
#define UI_DECRYPTIONWIDGET_H

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

class Ui_DecryptionWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *keyLedr;
    QPushButton *showHideBtn;
    QPushButton *intputBrsBtn;
    QLineEdit *fileNameLedr;
    QLabel *keyLbl;
    QLabel *fileNameLbl;
    QLabel *originLbl;
    QLineEdit *originLedr;
    QPushButton *originBrsBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *decryptionBtn;

    void setupUi(QWidget *DecryptionWidget)
    {
        if (DecryptionWidget->objectName().isEmpty())
            DecryptionWidget->setObjectName(QStringLiteral("DecryptionWidget"));
        DecryptionWidget->resize(421, 176);
        gridLayout_2 = new QGridLayout(DecryptionWidget);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        keyLedr = new QLineEdit(DecryptionWidget);
        keyLedr->setObjectName(QStringLiteral("keyLedr"));
        keyLedr->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(keyLedr, 1, 1, 1, 1);

        showHideBtn = new QPushButton(DecryptionWidget);
        showHideBtn->setObjectName(QStringLiteral("showHideBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/hide.svg"), QSize(), QIcon::Normal, QIcon::Off);
        showHideBtn->setIcon(icon);

        gridLayout->addWidget(showHideBtn, 1, 2, 1, 1);

        intputBrsBtn = new QPushButton(DecryptionWidget);
        intputBrsBtn->setObjectName(QStringLiteral("intputBrsBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/browser.svg"), QSize(), QIcon::Normal, QIcon::Off);
        intputBrsBtn->setIcon(icon1);

        gridLayout->addWidget(intputBrsBtn, 0, 2, 1, 1);

        fileNameLedr = new QLineEdit(DecryptionWidget);
        fileNameLedr->setObjectName(QStringLiteral("fileNameLedr"));

        gridLayout->addWidget(fileNameLedr, 0, 1, 1, 1);

        keyLbl = new QLabel(DecryptionWidget);
        keyLbl->setObjectName(QStringLiteral("keyLbl"));

        gridLayout->addWidget(keyLbl, 1, 0, 1, 1);

        fileNameLbl = new QLabel(DecryptionWidget);
        fileNameLbl->setObjectName(QStringLiteral("fileNameLbl"));

        gridLayout->addWidget(fileNameLbl, 0, 0, 1, 1);

        originLbl = new QLabel(DecryptionWidget);
        originLbl->setObjectName(QStringLiteral("originLbl"));

        gridLayout->addWidget(originLbl, 2, 0, 1, 1);

        originLedr = new QLineEdit(DecryptionWidget);
        originLedr->setObjectName(QStringLiteral("originLedr"));
        originLedr->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(originLedr, 2, 1, 1, 1);

        originBrsBtn = new QPushButton(DecryptionWidget);
        originBrsBtn->setObjectName(QStringLiteral("originBrsBtn"));
        originBrsBtn->setIcon(icon1);

        gridLayout->addWidget(originBrsBtn, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progressBar = new QProgressBar(DecryptionWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        decryptionBtn = new QPushButton(DecryptionWidget);
        decryptionBtn->setObjectName(QStringLiteral("decryptionBtn"));
        decryptionBtn->setMinimumSize(QSize(100, 40));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/unlock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        decryptionBtn->setIcon(icon2);
        decryptionBtn->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(decryptionBtn);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(DecryptionWidget);

        QMetaObject::connectSlotsByName(DecryptionWidget);
    } // setupUi

    void retranslateUi(QWidget *DecryptionWidget)
    {
        DecryptionWidget->setWindowTitle(QApplication::translate("DecryptionWidget", "DecryptionWidget", nullptr));
        showHideBtn->setText(QString());
        intputBrsBtn->setText(QString());
        keyLbl->setText(QApplication::translate("DecryptionWidget", "Kh\303\263a gi\341\272\243i m\303\243:", nullptr));
        fileNameLbl->setText(QApplication::translate("DecryptionWidget", "File c\341\272\247n gi\341\272\243i m\303\243:", nullptr));
        originLbl->setText(QApplication::translate("DecryptionWidget", "File gi\341\272\243i m\303\243:", nullptr));
        originBrsBtn->setText(QString());
        decryptionBtn->setText(QApplication::translate("DecryptionWidget", "Gi\341\272\243i m\303\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecryptionWidget: public Ui_DecryptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECRYPTIONWIDGET_H
