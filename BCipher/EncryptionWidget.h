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
* File name:    BCipher/EncryptionWidget.h
* Date created: Saturday, May 04, 2019
* Written by Bach Nguyen Sy
*/

#ifndef ENCRYPTIONWIDGET_H
#define ENCRYPTIONWIDGET_H

#include <QWidget>
#include "ui_EncryptionWidget.h"

class EncryptionWidget : public QWidget, Ui::EncryptionWidget
{
	Q_OBJECT

public:
	EncryptionWidget(QWidget *parent = Q_NULLPTR);
	~EncryptionWidget() = default;

private:
	QByteArray m_hashIV;
	void encryp(const QString& inputFileName, const QString& key,
		const QString& outputFileName);
};

#endif