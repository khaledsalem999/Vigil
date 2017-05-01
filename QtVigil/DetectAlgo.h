#pragma once

#ifndef DETECTION_H
#define DETECTION_H

#include <QtPlugin>
#include <Anomaly.h>

class Detection
{

public:
	Anomaly Detect();
};

#define DETECTION_iid "Detection Function Interface"

Q_DECLARE_INTERFACE(Detection, DETECTION_iid)

#endif // IMYINTERFACE_H