#pragma once

#include <QObject>
#include <DetectionAlgo.h>

class DetectJumping : public QObject,public Detection
{
	Q_OBJECT
	Q_INTERFACES(Detection)

public:
	DetectJumping(QObject *parent);
	~DetectJumping();
	int Detect();
};
