#pragma once

#include <QObject>

class ROI : public QObject
{
	Q_OBJECT

public:
	ROI(QObject *parent);
	~ROI();
	int GetX();
	int GetY();
	int GetWidth();
	int GetHeight();
	int Set();

private:
	int X;
	int Y;
	int width;
	int height;

};
