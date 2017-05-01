#include "Camera.h"

Camera::Camera(QObject *parent,std::string iploc)
	: QObject(parent)
{
	IP = iploc;
	Params = new HOGParams();
	regionsList = new ROI();
}

Camera::Camera()
{
	IP = "0";
	Params = new HOGParams();
	regionsList = new ROI();
	//gpu_hog.winSize(64, 128);
}

Camera::~Camera()
{
}

std::string Camera::GetIPLoc()
{
	return IP;
}
HOGParams* Camera::GetHOGParams()
{
	return Params;
}
ROI* Camera::GetROI()
{
	return regionsList;
}
void Camera::SetIPLoc(std::string iploc)
{
	IP = iploc;
}
void Camera::SetHOGParams(HOGParams *params)
{
	Params = params;
}
void Camera::SetROI(ROI *roi)
{
	regionsList = roi;
}

