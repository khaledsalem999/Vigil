#pragma once

#include <QObject>
#include "opencv2\core\utility.hpp"
#include "Anomaly.h"
#include "DetectSVM.h"

class Tracker : public QObject
{
	Q_OBJECT

public:
	Tracker(QObject *parent, cv::Mat, cv::Mat);
	~Tracker();
	cv::Mat Track();
	bool isLoitering();
	Anomaly * isAnomaly();

private:
	cv::Mat frame;
	cv::Mat backGround;
	long timer;
};