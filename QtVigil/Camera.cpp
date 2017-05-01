#include "Camera.h"

Camera::Camera(QObject *parent,std::string iploc)
	: QObject(parent)
{
	IP = iploc;
	Params = new HOGParams();
}

Camera::Camera()
{
	IP = "0";
	Params = new HOGParams();
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
std::vector<ROI*> Camera::GetROI()
{
	return regionsList;
}

ROI* Camera::GetSpecificROI(int index) {
	return regionsList.at(index);
}
void Camera::SetIPLoc(std::string iploc)
{
	IP = iploc;
}
void Camera::SetHOGParams(HOGParams *params)
{
	Params = params;
}


