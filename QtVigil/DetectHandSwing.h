#pragma once

#include <QObject>
#include <DetectionAlgo.h>

class DetectHandSwing : public QObject,public Detection
{
	Q_OBJECT
	Q_INTERFACES(Detection)

public:
	DetectHandSwing(QObject *parent);
	~DetectHandSwing();
	int Detect();
};
