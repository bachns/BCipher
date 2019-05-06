/********************************************************************************
*   Copyright (C) 2018 by Bach Nguyen Sy                                       *
*   Unauthorized copying of this file via any medium is strictly prohibited    *
*                                                                              *
*   <bachns.dev@gmail.com>                                                     *
*   https://bachns.wordpress.com                                               *
*   https://www.facebook.com/bachns.dev                                        *
*                                                                              *
********************************************************************************/

/**
* File name:    BCipher/EncryptionWidget.cpp
* Date created: Saturday, May 04, 2019
* Written by Bach Nguyen Sy
*/

#include <QFileDialog>
#include <QCryptographicHash>
#include <QMessageBox>
#include "EncryptionWidget.h"
#include "qaesencryption.h"

EncryptionWidget::EncryptionWidget(QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);
	progressBar->hide();
	QString iv = "BCipher2019__BitDev$$BachNguyen";
	m_hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Md5);
	connect(showHideBtn, &QPushButton::clicked, [=]{
		if (keyLedr->echoMode() == QLineEdit::Password)
		{
			keyLedr->setEchoMode(QLineEdit::Normal);
			showHideBtn->setIcon(QIcon(":/Resources/show.svg"));
		}
		else
		{
			keyLedr->setEchoMode(QLineEdit::Password);
			showHideBtn->setIcon(QIcon(":/Resources/hide.svg"));
		}
	});
	connect(inputBrsBtn, &QPushButton::clicked, [=] {
		QString fileName = QFileDialog::getOpenFileName(
			this, QString::fromStdWString(L"Chọn file cần giải mã"));
		if (!fileName.isEmpty())
		{
			fileNameLedr->setText(fileName);
		}
	});
	connect(cipherBrsBtn, &QPushButton::clicked, [=] {
		QString fileName = QFileDialog::getSaveFileName(
			this, QString::fromStdWString(L"Đặt tên file mã hóa"));
		if (!fileName.isEmpty())
		{
			cipherLedr->setText(fileName);
		}
	});

	connect(encryptionBtn, &QPushButton::clicked, [=] {
		QString input = fileNameLedr->text();
		QString key = keyLedr->text();
		QString output = cipherLedr->text();
		if (input.isEmpty() || key.isEmpty() || output.isEmpty())
			return;

		progressBar->show();
		QGuiApplication::setOverrideCursor(Qt::WaitCursor);

		encryp(input, key, output);
		
		progressBar->hide();
		QGuiApplication::setOverrideCursor(Qt::ArrowCursor);
		QApplication::beep();
	});
}

void EncryptionWidget::encryp(const QString& inputFileName, const QString& key, const QString& outputFileName)
{
	QByteArray hashKey = QCryptographicHash::hash(key.toLocal8Bit(), QCryptographicHash::Sha256);

	QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CFB);

	QFile inputFile(inputFileName);
	QByteArray data;
	if (inputFile.open(QFile::ReadOnly))
	{
		data = inputFile.readAll();
		inputFile.close();

		QByteArray cipherData = encryption.encode(data, hashKey, m_hashIV);

		QFile outputFile(outputFileName);
		outputFile.open(QIODevice::WriteOnly);
		outputFile.write(cipherData);
		outputFile.close();
	}
	else
	{
		QMessageBox::warning(this, QString::fromStdWString(L"BCipher"),
			QString::fromStdWString(L"Lỗi đọc file cần mã hóa"));
	}
}
