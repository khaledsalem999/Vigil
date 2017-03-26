#pragma once

#include <QObject>
#include <HOGParams.h>
#include <ROI.h>

class Camera : public QObject
{
	Q_OBJECT

public:
	Camera(QObject *parent);
	~Camera();


private:
	std::string IPLoc;
	HOGParams Params;
	ROI regionsLIST;
	

};
