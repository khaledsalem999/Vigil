#pragma once

#include <QObject>
#include <Camera.h>
#include <qtimer.h>
#include <DetectionAlgo.h>
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
	Controller(std::string,std::string);
	~Controller();
	void initializeHoG(Camera*);
	void updateConfig();
	void intializeSVM();
	void UpdateView(Camera*);
	void UpdateView(Anomaly*, Camera*);
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
	Detection *AlgorithmHOG;
	Detection *AlgorithmMEAN;
	Camera *Cam;
	VideoCapture capture;
	Mat frame;
	QTimer* tmrTimer;
	cv::Ptr<cv::cuda::HOG> gpu_hog;

};
