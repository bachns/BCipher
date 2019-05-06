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
* File name:    BCipher/BCipher.cpp
* Date created: Saturday, May 04, 2019
* Written by Bach Nguyen Sy
*/

#include "BCipher.h"

BCipher::BCipher(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
	setWindowFlags(windowFlags() &(~Qt::WindowMaximizeButtonHint));
	createConnections();
}

void BCipher::createConnections()
{
	connect(encryptionBtn, &QPushButton::clicked, [=] {
		stackedWidget->setCurrentWidget(encryptionPage);
	});
	connect(decryptionBtn, &QPushButton::clicked, [=] {
		stackedWidget->setCurrentWidget(decryptionPage);
	});
	connect(informationBtn, &QPushButton::clicked, [=] {
		stackedWidget->setCurrentWidget(informationPage);
	});
}
