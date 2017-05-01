#pragma once

#include <QObject>
#include <HOGParams.h>
#include <ROI.h>
#include <opencv2/core/utility.hpp>
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/ml.hpp"

using namespace std;
using namespace cv;
using namespace cv::ml;

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
	std::string IP;
	HOGParams *Params;
	ROI *regionsList;
	HOGDescriptor *gpu_hog;
	Ptr<SVM> svm = StatModel::load<SVM>("D://Train//Demo_Detector.yml");
};
