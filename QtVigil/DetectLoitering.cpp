#include "DetectLoitering.h"

DetectLoitering::DetectLoitering(QObject *parent)
	: QObject(parent)
{
}

DetectLoitering::~DetectLoitering()
{
}

Anomaly DetectLoitering::Detect()
{
	return 0;
}
