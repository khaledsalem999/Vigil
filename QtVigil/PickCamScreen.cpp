#include "PickCamScreen.h"

PickCamScreen::PickCamScreen(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

PickCamScreen::~PickCamScreen()
{
}

void PickCamScreen::AddCamScreem()
{

}
void PickCamScreen::AddCam()
{

}

void PickCamScreen::on_AddFeed_clicked()
{
	emit clicked();
	this->close();
}
