#pragma once

#include <QWidget>
#include "ui_PickCamScreen.h"
#include <qfiledialog.h>
#include <string>

using namespace std;

class PickCamScreen : public QWidget
{
	Q_OBJECT

public:
	PickCamScreen(QWidget *parent = Q_NULLPTR);
	~PickCamScreen();
	void AddCamScreem();
	void AddCam();
	QString FilenameVid;

signals:
	void clicked(string location);

private slots:
	void on_AddFeed_clicked();
	void on_OpenVideo_clicked();

public slots:
	

private:
	Ui::PickCamScreen ui;
	
};
