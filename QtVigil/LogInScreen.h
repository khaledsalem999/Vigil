#pragma once

#include <QWidget>
#include <string.h>
#include "ui_LogInScreen.h"

class LogInScreen : public QWidget
{
	Q_OBJECT

public:
	LogInScreen(QWidget *parent = Q_NULLPTR);
	~LogInScreen();

public slots:
	QString LogIN();

private:
	Ui::LogInScreen ui;

};
