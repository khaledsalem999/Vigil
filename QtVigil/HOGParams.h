#pragma once

#include <QObject>

class HOGParams : public QObject
{
	Q_OBJECT

public:
	HOGParams(QObject *parent,double,int,double,int);
	HOGParams();
	~HOGParams();
	double GetScale();
	double GetHitThreshold();
	int GetGroupThreshold();
	int GetLevels();
	void SetScale(double);
	void SetGroupThreshold(int);
	void SetHitThreshold(double);
	void SetLevels(int);

private:
	double Scale;
	int GroupThreshold;
	double HitThreshold;
	int numLevels;
};
