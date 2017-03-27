#pragma once

#include <QObject>

class ROI : public QObject
{
	Q_OBJECT

public:
	ROI(QObject *parent,int,int,int,int);
	ROI();
	~ROI();
	int GetX();
	int GetY();
	int GetWidth();
	int GetHeight();
	void SetX(int);
	void SetY(int);
	void SetWidth(int);
	void SetHeight(int);

private:
	int X;
	int Y;
	int Width;
	int Height;

};
