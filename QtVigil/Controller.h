#pragma once

#include <QObject>
#include <Camera.h>
#include <qtimer.h>
#include <DetectionAlgo.h>
#include <FeedScreen.h>
#include <DBHandler.h>
#include <vector>
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
	void updateParams(Camera*,HOGParams*);
	void UpdateView(Camera*);
	void UpdateView(Anomaly*, Camera*);
	Anomaly* DetectAnomaly(Detection*);
	void SaveAnomaly(std::vector<Mat>);
	void AddCamera(Camera*);
	void RemoveCamera(Camera*);
	std::vector<Anomaly*> GetAnomalies();
	std::vector<Camera*> GetCameras();


private:
	Detection *AlgorithmHOG;
	Detection *AlgorithmMEAN;
	DBHandler *dbhandler;
	Camera *Cam;
	VideoCapture capture;
	Mat frame;
	QTimer* tmrTimer;
	cv::Ptr<cv::cuda::HOG> gpu_hog;

};
