#pragma once

#include <QObject>
#include <DetectAlgo.h>
#include <Anomaly.h>
#include <opencv2/core/utility.hpp>
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/ml.hpp"
#include "opencv2\cudabgsegm.hpp"


using namespace std;
using namespace cv;
using namespace cv::ml;

class DetectSVM : public QObject, public DetectAlgo
{
	Q_OBJECT

public:
	DetectSVM(QObject *parent, cv::Mat, std::string);
	~DetectSVM();
	vector< vector< Point> > BackGroundSub(cv::Mat);

public slots:
	Anomaly * Detect(cv::Mat);

private:
	cv::Mat frame;
	vector< float > hog_detector;
	std::string detectorPath;
	Ptr<SVM> svm;
};
