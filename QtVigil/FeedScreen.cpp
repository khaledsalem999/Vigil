#include "FeedScreen.h"

FeedScreen::FeedScreen(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	bool backprojMode = false;
	bool selectObject = false;
	int trackObject = 0;
	bool showHist = true;
	Point origin;
	Rect selection;
	int vmin = 10, vmax = 256, smin = 30;

	ui.XSlider->setMaximum(840);
	ui.XSlider->setMinimum(1);
	ui.YSlider->setMaximum(480);
	ui.YSlider->setMinimum(1);
	ui.WidthSlider->setMaximum(840);
	ui.WidthSlider->setMinimum(1);
	ui.HeightSlider->setMaximum(480);
	ui.HeightSlider->setMinimum(1);

	if (!capture.isOpened())
	{
		//get_svm_detector(svm, hog_detector);
	}


	capture.open("D://vids//Demo.avi");
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 840);
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 480);

	capture.read(frame);
	detector = new DetectSVM(this, frame, "D://Train//Demo_Detector.yml");

	tmrTimer = new QTimer(this);
	connect(tmrTimer, SIGNAL(timeout()), this, SLOT(refresh()));
	tmrTimer->start(20);
}

FeedScreen::~FeedScreen()
{
}

void FeedScreen::SetParameters(double, double, int, int)
{

}
void FeedScreen::resetParameters()
{

}
void FeedScreen::update(Camera*)
{

}

void FeedScreen::refresh() {
		capture.read(frame);
		cvtColor(frame, frame, CV_BGR2RGB);
		putText(frame, "Result: " + detector->Detect(frame)->GetDescription(), Point(5, 65), FONT_HERSHEY_SIMPLEX, 1., Scalar(255, 100, 0), 2);
		QImage VFrame((uchar*)frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
		ui.FeedView->setPixmap(QPixmap::fromImage(VFrame));
}