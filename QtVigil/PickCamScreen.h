#pragma once

#include <QWidget>
#include "ui_PickCamScreen.h"
#include "QtVigil.h"

class PickCamScreen : public QWidget
{
	Q_OBJECT

public:
	PickCamScreen(QWidget *parent = Q_NULLPTR);
	~PickCamScreen();
	void AddCamScreem();
	void AddCam();

private slots:

public slots:
	void on_AddFeed_clicked();

private:
	Ui::PickCamScreen ui;
};
