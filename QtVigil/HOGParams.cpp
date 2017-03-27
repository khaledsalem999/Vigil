#include "HOGParams.h"

HOGParams::HOGParams(QObject *parent,double scale, double groupthreshold, double hitthreshold)
	: QObject(parent)
{
	Scale = scale;
	GroupThreshold = groupthreshold;
	HitThreshold = hitthreshold;
}

HOGParams::HOGParams()
{
	Scale = 1.05;
	GroupThreshold = 1;
	HitThreshold = 05;
}

HOGParams::~HOGParams()
{
}

double HOGParams::GetScale()
{
	return Scale;
}
double HOGParams::GetHitThreshold()
{
	return GroupThreshold;
}
double HOGParams::GetGroupThreshold()
{
	return HitThreshold;
}
void HOGParams::SetScale(double scale)
{
	Scale = scale;
}
void HOGParams::SetHitThreshold(double hitthreshold)
{
	HitThreshold = hitthreshold;
}
void HOGParams::SetGroupThreshold(double groupthreshold)
{
	GroupThreshold = groupthreshold;
}
