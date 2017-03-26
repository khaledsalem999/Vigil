#pragma once

#include <QObject>
#include <DetectionAlgo.h>

class DetectFaces : public QObject,public Detection
{
	Q_OBJECT
	Q_INTERFACES(Detection)

public:
	DetectFaces(QObject *parent);
	~DetectFaces();

};
