#pragma once

#include <QWidget>
#include "ui_LogInScreen.h"

class LogInScreen : public QWidget
{
	Q_OBJECT

public:
	LogInScreen(QWidget *parent = Q_NULLPTR);
	~LogInScreen();
	bool Login(std::string,std::string);

private:
	Ui::LogInScreen ui;

};
