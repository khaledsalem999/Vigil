#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtVigil.h"
#include <iostream>

class QtVigil : public QMainWindow
{
	Q_OBJECT

public:
	QtVigil(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtVigilClass ui;
};
