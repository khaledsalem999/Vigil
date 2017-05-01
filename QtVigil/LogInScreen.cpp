#include "LogInScreen.h"

LogInScreen::LogInScreen(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

LogInScreen::~LogInScreen()
{
}

bool LogInScreen::Login(std::string, std::string)
{
	return false;
}
