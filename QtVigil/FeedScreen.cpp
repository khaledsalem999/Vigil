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
	ui.FeedView->setFixedWidth(720);
	ui.FeedView->setFixedHeight(480);
	if (!capture.isOpened())
	{
		//get_svm_detector(svm, hog_detector);
	}


	capture.open("D://vids//vids//group2.MOV");
	capture.set(CV_CAP_PROP_FRAME_WIDTH, 720);
	capture.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
	capture.read(frame);
	detector = new DetectSVM(this, frame, "D://Train//backgroundSubTrainer.yml");
	refresh();

	//while (capture.read(frame)) {
		/*BackGroundSub(frame);
		vector< vector< Point> >::iterator itc = contours.begin();
		while (itc != contours.end()) {
			Rect mr = boundingRect(Mat(*itc));
			if (mr.height >= 200)
			{
				rectangle(frame, mr, CV_RGB(0, 255, 0));
				cv::Mat subFrame = frame(mr).clone();
				detector->Detect(subFrame);
			}
			itc++;
		}
	}*/

	tmrTimer = new QTimer(this);
	connect(tmrTimer, SIGNAL(timeout()), this, SLOT(refresh()));
	tmrTimer->start(10);
}

FeedScreen::~FeedScreen()
{
}

vector<vector<Point>> FeedScreen::BackGroundSub()
{
	//upload frame into gpu frame
	frame_g.upload(frameGray);
	cudaMOG2->apply(frame_g, fgMaskMOG2_g, -0.1);
	//download the mask from gpu
	fgMaskMOG2_g.download(fgMaskMOG2);
	//morph into binary img
	morphologyEx(fgMaskMOG2, binaryImg, CV_MOP_CLOSE, element);

	ContourImg = binaryImg.clone();
	vector< vector< Point> > contours;
	findContours(ContourImg,
		contours, // a vector of contours
		CV_RETR_EXTERNAL, // retrieve the external contours
		CV_CHAIN_APPROX_NONE); // all pixels of each contours

	return contours;

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
		string result;
		string fps;
		capture.read(frame);
		frameCount = (frameCount + 1) % 5;
		refreshCount= (refreshCount + 1) % 20;
		cv::resize(frame, frame, Size(360, 240));
		cvtColor(frame, frame, CV_BGR2RGB);
		Rect mr;

		//every fifth frame
		if (frameCount == 0) {
			cvtColor(frame, frameGray, CV_RGB2GRAY);

			int arr[] = { 0,0,0,0,0 };
			/*putText(frame, "Result: " + detector->Detect(frame)->GetDescription(), Point(5, 65), FONT_HERSHEY_SIMPLEX, 1., Scalar(255, 100, 0), 2);
			QImage VFrame((uchar*)frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
			ui.FeedView->setPixmap(QPixmap::fromImage(VFrame));*/

			vector < vector< Point>> contours = BackGroundSub();
			vector< vector< Point> >::iterator itc = contours.begin();
			while (itc != contours.end()) {
				mr = boundingRect(Mat(*itc));
				if (mr.height >= 80)
				{
					//rectangle(frame, mr, CV_RGB(0, 255, 0),5);
					cv::Mat subFrame = frameGray(mr).clone();

					if (detector->Detect(subFrame)->GetDescription() == "Jumping into Car.") { arr[0]++; rectangle(frame, mr, CV_RGB(0, 0, 255), 15);
					}
					else if (detector->Detect(subFrame)->GetDescription() == "Object Swinging.") { arr[1]++; rectangle(frame, mr, CV_RGB(0, 0, 255),15);
					}
					else if (detector->Detect(subFrame)->GetDescription() == "Punching") { arr[2]++; rectangle(frame, mr, CV_RGB(0, 0, 255),15);
					}
					else if (detector->Detect(subFrame)->GetDescription() == "Pushing against car.") { arr[3]++; rectangle(frame, mr, CV_RGB(0, 0, 255),15);
					}
					else arr[4]++;
				}
				++itc;
			}

			int max = 0; 
			for (int i = 1; i < 5; i++)
				if (arr[max] < arr[i])
					max = i;

			if (max == 0 && arr[max]>0) {
				result = "Jumping into Car.";
			}
			else if (max == 1) {
				result = "Hand Swinging.";
			}
			else if (max == 2) {
				result = "Hand Swinging";
			}
			else if (max == 3) {
				result = "Pushing against car.";
			}
			else if (max == 4) {
				result = "";
			}//sadasd

			if(refreshCount==0)
			OldResults = result;
		}
		putText(frame, "Result: " + OldResults, Point(5, 65), FONT_HERSHEY_SIMPLEX, 1., Scalar(255, 100, 0), 2);
		//putText(frame, workFps() , Point(5, 65), FONT_HERSHEY_SIMPLEX, 1., Scalar(255, 100, 0), 2);
		QImage VFrame((uchar*)frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
		ui.FeedView->setPixmap(QPixmap::fromImage(VFrame));
}

inline string FeedScreen::workFps() const
{
	stringstream ss;
	ss << work_fps;
	return ss.str();
}

inline void FeedScreen::workEnd()
{
	int64 delta = getTickCount() - work_begin;
	double freq = getTickFrequency();
	work_fps = freq / delta;
}