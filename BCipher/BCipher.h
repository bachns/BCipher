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
* File name:    BCipher/BCipher.h
* Date created: Saturday, May 04, 2019
* Written by Bach Nguyen Sy
*/

#ifndef BCIPHER_H
#define BCIPHER_H

#include <QtWidgets/QMainWindow>
#include "ui_BCipher.h"

class BCipher : public QMainWindow, Ui::BCipherClass
{
	Q_OBJECT

public:
	BCipher(QWidget *parent = Q_NULLPTR);
	~BCipher() = default;

private:
	void createConnections();
};

#endif