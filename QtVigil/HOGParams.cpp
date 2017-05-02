#include "HOGParams.h"

HOGParams::HOGParams(QObject *parent, double scale, int groupthreshold, double hitthreshold, int levelsTemp)
	: QObject(parent)
{
	Scale = scale;
	GroupThreshold = groupthreshold;
	HitThreshold = hitthreshold;
	numLevels = levelsTemp;
}

HOGParams::HOGParams()
{
	Scale = 1.05;
	GroupThreshold = 1;
	HitThreshold = 0.5;
	numLevels = 5;
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
int HOGParams::GetGroupThreshold()
{
	return HitThreshold;
}
int HOGParams::GetLevels()
{
	return numLevels;
}
void HOGParams::SetScale(double scale)
{
	Scale = scale;
}
void HOGParams::SetHitThreshold(double hitthreshold)
{
	HitThreshold = hitthreshold;
}
void HOGParams::SetLevels(int levelsTemp)
{
	numLevels = levelsTemp;
}
void HOGParams::SetGroupThreshold(int groupthreshold)
{
	GroupThreshold = groupthreshold;
}
