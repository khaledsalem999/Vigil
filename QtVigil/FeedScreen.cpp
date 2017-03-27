#include "FeedScreen.h"

FeedScreen::FeedScreen(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

FeedScreen::~FeedScreen()
{
}

std::string FeedScreen::GetCamera()
{
	return "C://vc.avi";
}

void FeedScreen::SetParameters()
{
	
}

void FeedScreen::ResetParameters()
{

}

void FeedScreen::update()
{

}
