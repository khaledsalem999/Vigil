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
	emit clicked(FilenameVid.toUtf8().constData());
	this->close();
}

void PickCamScreen::on_OpenVideo_clicked()
{
	FilenameVid = QFileDialog::getOpenFileName(
		this,
		tr("Open Training File"),
		"C://",
		"Video Files (*.avi *.mp4 *.mov *.mkv)"
	);

	ui.VideoLocation->setText(FilenameVid);
}