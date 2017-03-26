#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtVigil.h"

class QtVigil : public QMainWindow
{
	Q_OBJECT

public:
	QtVigil(QWidget *parent = Q_NULLPTR);

private slots:
	std::string GetFaces();
	std::string GetAnomalies();

private:
	Ui::QtVigilClass ui;
};
