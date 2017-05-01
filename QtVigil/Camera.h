#pragma once

#include <QObject>
#include <HOGParams.h>
#include <ROI.h>


class Camera : public QObject
{
	Q_OBJECT


public:
	Camera(QObject *parent,std::string);
	Camera();
	~Camera();
	std::string GetIPLoc();
	HOGParams* GetHOGParams();
	std::vector<ROI*> Camera::GetROI();
	ROI* Camera::GetSpecificROI(int);
	void SetIPLoc(std::string);
	void SetHOGParams(HOGParams*);
	void ResetHOGParams();
	void AddROI(ROI*);
	void UpdateROI(int, ROI*);
	void RemoveROI(int);


private:
	std::string IP;
	HOGParams *Params;
	std::vector<ROI*> regionsList;

};
