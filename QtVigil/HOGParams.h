#pragma once

#include <QObject>

class HOGParams : public QObject
{
	Q_OBJECT

public:
	HOGParams(QObject *parent);
	~HOGParams();
	double GetScale();
	double GetHitThreshold();
	double GetGroupThreshold();
	void set();

private:
	double Scale;
	double GroupThreshold;
	double HitThreshold;
};
