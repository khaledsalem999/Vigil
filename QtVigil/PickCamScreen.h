#pragma once

#include <QWidget>
#include "ui_PickCamScreen.h"

class PickCamScreen : public QWidget
{
	Q_OBJECT

public:
	PickCamScreen(QWidget *parent = Q_NULLPTR);
	~PickCamScreen();
	void AddCamScreem();
	void AddCam();

private:
	Ui::PickCamScreen ui;
};
