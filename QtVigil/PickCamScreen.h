#pragma once

#include <QWidget>
#include "ui_PickCamScreen.h"

class PickCamScreen : public QWidget
{
	Q_OBJECT

public:
	PickCamScreen(QWidget *parent = Q_NULLPTR);
	~PickCamScreen();

public slots:
	void AddCamera();

private:
	Ui::PickCamScreen ui;
};
