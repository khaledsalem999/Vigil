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

signals:
	void clicked();

private slots:
	void on_AddFeed_clicked();

public slots:
	

private:
	Ui::PickCamScreen ui;
	
};
