#include "Tracker.h"

Tracker::Tracker(QObject *parent, cv::Mat frameTemp, cv::Mat backGroundTemp)
	: QObject(parent)
{
	frame = frameTemp;
	backGround = backGroundTemp;
}

Tracker::~Tracker()
{
}

cv::Mat Tracker::Track()
{
	//insert tracking code here please, background sub then meanshift
	//return frame of tracked object.
	return cv::Mat();
}

bool Tracker::isLoitering()
{
	//check according to timer
	if (timer > 30) {
		return true;
	}
	return false;
}

Anomaly * Tracker::isAnomaly()
{
	DetectSVM * detector = new DetectSVM(this, frame, "D://Train//Demo_Detector.yml");
	detector->Detect(frame);
	return detector->Detect(frame);
}
