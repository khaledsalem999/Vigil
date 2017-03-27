#pragma once

#include <QObject>

class HOGParams : public QObject
{
	Q_OBJECT

public:
	HOGParams(QObject *parent,double,double,double);
	HOGParams();
	~HOGParams();
	double GetScale();
	double GetHitThreshold();
	double GetGroupThreshold();
	void SetScale(double);
	void SetGroupThreshold(double);
	void SetHitThreshold(double);

private:
	double Scale;
	double GroupThreshold;
	double HitThreshold;

};
