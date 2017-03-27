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
	ROI* GetROI();
	void SetIPLoc(std::string);
	void SetHOGParams(HOGParams*);
	void SetROI(ROI*);


private:
	std::string IPLoc;
	HOGParams *Params;
	ROI *regionsLIST;
	
};
