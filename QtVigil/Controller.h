#pragma once

#include <QObject>

class Controller : public QObject
{
	Q_OBJECT

public:
	Controller(QObject *parent);
	~Controller();
	void initializeHoG();
	void updateConfig();
	void intializeSVM();
	std::string sendLogin();
	std::string GetFaces();
	std::string GetAnomalies();
	std::string GetCamera();
	void AddCamera();
	std::string DetectAnomaly();
	std::string DetectFaces();
	void sendAlaram();
	bool isFaceDetected();
	void SaveAnomaly();
	void SaveFace();
};
