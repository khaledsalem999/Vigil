#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtVigil.h"
#include "FeedScreen.h"
#include <iostream>

class QtVigil : public QMainWindow
{
	Q_OBJECT

public:
	QtVigil(QWidget *parent = Q_NULLPTR);
	void OpenFeed();

private slots:
    void on_AddCam_clicked();

private:
	Ui::QtVigilClass ui;
	FeedScreen *Feed;
};
