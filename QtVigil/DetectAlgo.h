#pragma once

#ifndef DetectAlgo_H
#define DetectAlgo_H

#include <QtPlugin>
#include <Anomaly.h>

class DetectAlgo : public QObject
{

public:
	Anomaly Detect();
};

#define DETECTION_iid "Detection Function Interface"

Q_DECLARE_INTERFACE(DetectAlgo, DETECTION_iid)

#endif // IMYINTERFACE_H