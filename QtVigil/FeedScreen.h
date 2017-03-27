#pragma once

#include <QWidget>
#include "ui_FeedScreen.h"

class FeedScreen : public QWidget
{
	Q_OBJECT

public:
	FeedScreen(QWidget *parent = Q_NULLPTR);
	~FeedScreen();
	std::string GetCamera();
	void SetParameters();
	void ResetParameters();
	void update();

private:
	Ui::FeedScreen ui;
};
