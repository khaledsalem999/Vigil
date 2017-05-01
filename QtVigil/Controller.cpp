#include "Controller.h"

Controller::Controller(QObject *parent)
	: QObject(parent)
{
	Cam = new Camera();
	initializeHoG(Cam);
}

Controller::Controller(std::string user, std::string pass)
{

}

Controller::~Controller()
{
}

void Controller::initializeHoG(Camera* Cam)
{
	//VAR
	capture.open(0);

	//CONST
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 840);
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 480);

	//GPU HoG
	gpu_hog = cv::cuda::HOG::create(Size(48, 48 * 2), Size(16, 16), Size(8, 8), Size(8, 8), 9);
	gpu_hog->setSVMDetector(gpu_hog->getDefaultPeopleDetector());
	gpu_hog->setWinStride(Size(8, 8));

	//VARS
	gpu_hog->setNumLevels(12);
	gpu_hog->setScaleFactor((Cam->GetHOGParams()->GetScale()));
	gpu_hog->setGroupThreshold((Cam->GetHOGParams()->GetGroupThreshold()));
	gpu_hog->setHitThreshold((Cam->GetHOGParams()->GetHitThreshold()));
}

void Controller::updateParams(Camera *Cam, HOGParams *HOGPara)
{

}
void Controller::UpdateView(Camera *Cam)
{

}
void Controller::UpdateView(Anomaly *Anom, Camera *Cam)
{

}
void Controller::AddCamera(Camera *Cam)
{
	if (!capture.isOpened())
	{
		printf("--(!)Error opening video capture\n");
	}

	tmrTimer = new QTimer(this);
	connect(tmrTimer, SIGNAL(timeout()), this, SLOT(DetectAnomaly()));
	tmrTimer->start(20);
}
Anomaly* Controller::DetectAnomaly(Detection *Detect)
{
	capture.read(frame);
	//GPU HOG
	cuda::GpuMat gpu_img;

	std::vector<Rect> found, found_filtered;

	Rect RoI(300, 150, 400, 180);

	Mat img_aux;
	cv::resize(frame, frame, Size(840, 480));
	cvtColor(frame, img_aux, COLOR_BGR2BGRA);

	

	//Hog params
	gpu_img.upload(img_aux);

	gpu_hog->detectMultiScale(gpu_img, found_filtered);

	rectangle(frame, RoI, cv::Scalar(255, 0, 0), 3, 8, 0);


	/*for (size_t i = 0; i < found.size(); i++)
	{
	Rect r = found[i];
	rectangle(frame, r.tl(), r.br(), Scalar(0, 255, 0), 3);
	}*/


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
			rectangle(frame, r.tl(), r.br(), cv::Scalar(0, 255, 0), 3);
		}
	}

	return 0;

}
void Controller::SaveAnomaly(std::vector<Mat> Anom)
{

}
void Controller::RemoveCamera(Camera*)
{

}
std::vector<Anomaly*> Controller::GetAnomalies()
{
	return GetAnomalies();
}
std::vector<Camera*> Controller::GetCameras()
{
	return GetCameras();
}