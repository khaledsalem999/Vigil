#pragma once

#include <QObject>
#include <DetectionAlgo.h>

class DetectLoitering : public QObject,public Detection
{
	Q_OBJECT
	Q_INTERFACES(Detection)

public:
	DetectLoitering(QObject *parent);
	~DetectLoitering();
	int Detect();
};
