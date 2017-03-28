#include "Camera.h"

Camera::Camera(QObject *parent,std::string iploc)
	: QObject(parent)
{
	IPLoc = iploc;
}

Camera::Camera()
{
	IPLoc = "C://vc.avi";
	Params = new HOGParams();
	regionsLIST = new ROI();
}

Camera::~Camera()
{
}

std::string Camera::GetIPLoc()
{
	return IPLoc;
}
HOGParams* Camera::GetHOGParams()
{
	return Params;
}
ROI* Camera::GetROI()
{
	return regionsLIST;
}
void Camera::SetIPLoc(std::string iploc)
{
	IPLoc = iploc;
}
void Camera::SetHOGParams(HOGParams *params)
{
	Params = params;
}
void Camera::SetROI(ROI *roi)
{
	regionsLIST = roi;
}

