#pragma once

#include <QObject>
#include "FileManager.h"
#include "DBHandler.h"
#include "Camera.h"
#include "Anomaly.h"
#include "HOGParams.h"

class ObserverUser : public QObject
{
	Q_OBJECT

public:
	ObserverUser(QObject *parent);
	~ObserverUser();
	void AddCamera(Camera);
	void RemoveCamera(Camera);
	void UpdateView(Camera);
	void UpdateView(Anomaly, Camera);
	void UpdateParams(Camera,HOGParams);
	std::vector<Camera> GetCameras();
	std::vector<Anomaly> GetAnomaly();


private:
	std::vector<Camera> camList;
	DBHandler dbHandler;
};
