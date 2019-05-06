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
* File name:    BCipher/DecryptionWidget.h
* Date created: Saturday, May 04, 2019
* Written by Bach Nguyen Sy
*/

#ifndef DECRYPTIONWIDGET_H
#define DECRYPTIONWIDGET_H

#include <QWidget>
#include "ui_DecryptionWidget.h"

class DecryptionWidget : public QWidget, Ui::DecryptionWidget
{
	Q_OBJECT

public:
	DecryptionWidget(QWidget *parent = Q_NULLPTR);
	~DecryptionWidget() = default;

private:
	QByteArray m_hashIV;
	void decryp(const QString& inputFileName, const QString& key,
		const QString& outputFileName);
};

#endif