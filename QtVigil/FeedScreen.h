#pragma once

#include <QWidget>
#include "ui_FeedScreen.h"
#include <Camera.h>

class FeedScreen : public QWidget
{
	Q_OBJECT

public:
	FeedScreen(QWidget *parent = Q_NULLPTR);
	~FeedScreen();
	void SetParameters(double,double,int,int);
	void resetParameters();
	void update(Camera*);


private:
	Ui::FeedScreen ui;
};
