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
* File name:    BCipher/DecryptionWidget.cpp
* Date created: Saturday, May 04, 2019
* Written by Bach Nguyen Sy
*/

#include <QFileDialog>
#include <QMessageBox>
#include <QCryptographicHash>
#include "DecryptionWidget.h"
#include "qaesencryption.h"

DecryptionWidget::DecryptionWidget(QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);
	progressBar->hide();
	QString iv = "BCipher2019__BitDev$$BachNguyen";
	m_hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Md5);
	connect(showHideBtn, &QPushButton::clicked, [=] {
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
	connect(intputBrsBtn, &QPushButton::clicked, [=] {
		QString fileName = QFileDialog::getOpenFileName(
			this, QString::fromStdWString(L"Chọn file cần mã hóa"));
		if (!fileName.isEmpty())
		{
			fileNameLedr->setText(fileName);
		}
	});

	connect(originBrsBtn, &QPushButton::clicked, [=] {
		QString fileName = QFileDialog::getSaveFileName(
			this, QString::fromStdWString(L"Đặt tên file giải mã"));
		if (!fileName.isEmpty())
		{
			originLedr->setText(fileName);
		}
	});

	connect(decryptionBtn, &QPushButton::clicked, [=] {
		QString input = fileNameLedr->text();
		QString key = keyLedr->text();
		QString output = originLedr->text();
		if (input.isEmpty() || key.isEmpty() || output.isEmpty())
			return;

		progressBar->show();
		QGuiApplication::setOverrideCursor(Qt::WaitCursor);
		
		decryp(input, key, output);
		
		progressBar->hide();
		QGuiApplication::setOverrideCursor(Qt::ArrowCursor);
		QApplication::beep();
	});
}

void DecryptionWidget::decryp(const QString& inputFileName,
	const QString& key, const QString& outputFileName)
{
	QByteArray hashKey = QCryptographicHash::hash(key.toLocal8Bit(), QCryptographicHash::Sha256);

	QAESEncryption decryption(QAESEncryption::AES_256, QAESEncryption::CFB);

	QFile inputFile(inputFileName);
	QByteArray data;
	if (inputFile.open(QFile::ReadOnly))
	{
		data = inputFile.readAll();
		inputFile.close();

		QByteArray originData = decryption.removePadding(
			decryption.decode(data, hashKey, m_hashIV));

		QFile outputFile(outputFileName);
		outputFile.open(QIODevice::WriteOnly);
		outputFile.write(originData);
		outputFile.close();
	}
	else
	{
		QMessageBox::warning(this, QString::fromStdWString(L"BCipher"),
			QString::fromStdWString(L"Lỗi đọc file cần giải mã"));
	}
}
