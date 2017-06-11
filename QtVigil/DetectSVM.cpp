#include "DetectSVM.h"
#include<time.h>

DetectSVM::DetectSVM(QObject *parent, cv::Mat frameTemp, std::string path)
	: QObject(parent)
{
	frame = frameTemp;
	svm = StatModel::load<SVM>(path);
}

DetectSVM::~DetectSVM()
{
}


Anomaly * DetectSVM::Detect(cv::Mat frame) {
	Anomaly * detectedAnom;

			//check current frame for actions
			HOGDescriptor hog;
			Mat tempFrame;
			hog.winSize = Size(64, 128);
			cv::Mat imgTo1D;
			vector< float > descriptors;

			imgTo1D.convertTo(imgTo1D, CV_BGR2GRAY);

			cv::resize(frame, imgTo1D, Size(64, 128));

			hog.compute(imgTo1D, descriptors);

			Mat1f img1D(Mat1f(descriptors).t());
			img1D.convertTo(img1D, CV_32F);
			float response = svm->predict(img1D);

			string anomalyDescription = "";

			if (response == 0) {
				anomalyDescription = "Jumping into Car.";
			}
			else if (response == 1) {
				anomalyDescription = "Object Swinging.";
			}
			else if (response == 2) {
				anomalyDescription = "Punching.";
			}
			else if (response == 3) {
				anomalyDescription = "Pushing against car.";
			}
			else if (response == 4) {
				anomalyDescription = "No abnormality.";
			}

			char dateChar[9];
			_strdate(dateChar);
			std::string dateOfAbnormality = dateChar;

			detectedAnom = new Anomaly(this, 1, 1, anomalyDescription, dateOfAbnormality);

	return detectedAnom;
}