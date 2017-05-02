#include "DetectHOG.h"

DetectHOG::DetectHOG(QObject *parent, HOGParams * paramsTemp, std::string pathTemp, cv::Mat frameTemp, ROI * regionTemp)
	: QObject(parent)
{
	params = paramsTemp;
	path = pathTemp;
	frame = frameTemp;
	region = regionTemp;
	get_svm_detector(path,hog_detector);
	initializeHOG();
}

DetectHOG::~DetectHOG()
{

}

std::vector<cv::Mat> DetectHOG::Detect()
{
	//create a list of found images to return
	std::vector<cv::Mat> listFoundImages;

	//Create rectangle in which we run the detection
	Rect RoI(region->GetX(), region->GetY(), region->GetWidth(), region->GetHeight());

	//rectangles for the found objects in general and the filtered found objects
	std::vector<Rect> found, found_filtered;

	//start hog detection
	gpuHOG->detectMultiScale(gpuImg, found_filtered);
	//create rectangles in ROI
	rectangle(frame, RoI, cv::Scalar(255, 0, 0), 3, 8, 0);

	//loop on frame to draw all detected objects on screen
	for (size_t i = 0; i < found_filtered.size(); i++)
	{
		Rect C, r = found_filtered[i];

		// The HOG detector returns slightly larger rectangles than the real objects,
		// so we slightly shrink the rectangles to get a nicer output.
		r.x += cvRound(r.width*0.1);
		r.width = cvRound(r.width*0.8);
		r.y += cvRound(r.height*0.07);
		r.height = cvRound(r.height*0.8);

		C = r | RoI;

		if (C == r || C == RoI) {
			//a mat for detected part in frame by HOG
			cv::Mat detected;
			//save pic from detected part by HOG
			detected = frame(r).clone();
			//draw rectangle around the detected portion on the frame
			rectangle(frame, r.tl(), r.br(), cv::Scalar(0, 255, 0), 3);
			//pushback detected part to list
			listFoundImages.push_back(detected);
		}
	}

	//-- Show what you found on main frame
	//imshow("Anti-thieft stuff", frame);
	//cvtColor(frame, frame, CV_BGR2RGB);

	return listFoundImages;
}

void DetectHOG::get_svm_detector(std::string, std::vector< float >& hog_detector)
{
	cv::Ptr<cv::ml::SVM> svm = cv::ml::StatModel::load<cv::ml::SVM>(path);

	// get the support vectors
	cv::Mat sv = svm->getSupportVectors();
	const int sv_total = sv.rows;
	// get the decision function
	cv::Mat alpha, svidx;
	double rho = svm->getDecisionFunction(0, alpha, svidx);

	CV_Assert(alpha.total() == 1 && svidx.total() == 1 && sv_total == 10);
	CV_Assert((alpha.type() == CV_64F && alpha.at<double>(0) == 1.) ||
		(alpha.type() == CV_32F && alpha.at<float>(0) == 1.f));
	CV_Assert(sv.type() == CV_32F);
	hog_detector.clear();

	hog_detector.resize(sv.cols + 1);
	memcpy(&hog_detector[0], sv.ptr(), sv.cols * sizeof(hog_detector[0]));
	hog_detector[sv.cols] = (float)-rho;
}

void DetectHOG::initializeHOG() {

	//preprocess the frame
	Mat img_aux;
	cv::resize(frame, frame, Size(480, 840));
	cvtColor(frame, img_aux, COLOR_BGR2BGRA);

	//oldDeletedTestingStuffReference
	//gpuHOG = cv::cuda::HOG::create(Size(48, 48 * 2), Size(16, 16), Size(8, 8), Size(8, 8), 9);
	//gpuHOG->setSVMDetector(gpuHOG->getDefaultPeopleDetector());


	//GPU-HoG
	//create hog
	gpuHOG = cv::cuda::HOG::create(Size(64, 128), Size(16, 16), Size(8, 8), Size(8, 8), 9);
	//set the custom trained svm detector
	gpuHOG->setSVMDetector(hog_detector);
	//set default winstride for hog
	gpuHOG->setWinStride(Size(8, 8));
	//upload frame to gpu mat format
	gpuImg.upload(img_aux);
	//set HOG num levels for detection
	gpuHOG->setNumLevels(params->GetLevels());
	//set hit threshold for hog
	gpuHOG->setHitThreshold(params->GetHitThreshold());
	//set hog scaling factor
	gpuHOG->setScaleFactor(params->GetScale());
	//set group thresholding for the detected objects
	gpuHOG->setGroupThreshold(params->GetGroupThreshold());

	//deleted QTstuff
	//QString GroupThresValue = QString::number(ui.GroupThresholdSlider->value());
	//ui.GroupThresholdValue->setText(GroupThresValue);
	//QString HitThresValue = QString::number(ui.HitThresholdSlider->value() / 10);
	//ui.HitThresholdValue->setText(HitThresValue);
	//QString NumLevValue = QString::number(ui.NumLevelsSlider->value());
	//ui.NumLevelValue->setText(NumLevValue);

}