#pragma once

#include <QObject>
#include <Camera.h>
#include <qtimer.h>
#include <FeedScreen.h>
#include <opencv2/core/utility.hpp>
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"

using namespace cv;

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
	Camera* GetCamera();
	void AddCamera();
	void DetectAnomaly();
	std::string DetectFaces();
	void sendAlaram();
	bool isFaceDetected();
	void SaveAnomaly();
	void SaveFace();

private:
	Camera *CamList;
	VideoCapture capture;
	Mat frame;
	QTimer* tmrTimer;

};
