#pragma once

#include <QObject>
#include "DetectAlgo.h"
#include <opencv2/core/utility.hpp>
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/ml.hpp"
#include "HOGParams.h"
#include "ROI.h"

using namespace cv;
using namespace cv::ml;

class DetectHOG : public QObject, public DetectAlgo
{
	Q_OBJECT

public:
	DetectHOG(QObject *parent, HOGParams *, std::string, cv::Mat , ROI*);
	~DetectHOG();
	void get_svm_detector(std::string, std::vector<float>&);
	void initializeHOG();

public slots:
	std::vector<cv::Mat> Detect();

private:
	cv::Mat frame;
	std::string path;
	std::vector<float> hog_detector;
	HOGParams * params;
	ROI * region;
	//GPU HOG
	cv::Ptr<cv::cuda::HOG> gpuHOG;
	//GPU img to use with HOG
	cuda::GpuMat gpuImg;
};
