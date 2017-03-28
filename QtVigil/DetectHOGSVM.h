#pragma once

#include <QObject>
#include <DetectionAlgo.h>

class DetectHOGSVM : public QObject,public Detection
{
	Q_OBJECT
	Q_INTERFACES(Detection)

public:
	DetectHOGSVM(QObject *parent);
	~DetectHOGSVM();
	Anomaly Detect();

};
