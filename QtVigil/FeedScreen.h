#pragma once

#include <QWidget>
#include "ui_FeedScreen.h"
#include <Camera.h>
#include <opencv2/core/utility.hpp>
#include "opencv2/cudaobjdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/ml.hpp"
#include "DetectSVM.h"
#include "DetectHOG.h"
#include "Anomaly.h"
#include <QtWidgets/QMainWindow>
#include <QSharedPointer>
#include <qtimer.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>

class FeedScreen : public QWidget
{
	Q_OBJECT

public:
	FeedScreen(QWidget *parent = Q_NULLPTR);
	~FeedScreen();
	void SetParameters(double,double,int,int);
	void resetParameters();
	void update(Camera*);
	void refresh();


private:
	Ui::FeedScreen ui;
	cv::VideoCapture capture;
	Mat frame;
	QImage VFrame;
	QTimer* tmrTimer;
	bool backprojMode;
	bool selectObject;
	int trackObject;
	bool showHist;
	Point origin;
	Rect selection;
	int vmin;
	int vmax;
	int smin;
	Mat src;
	Mat hsv;
	Mat hue;
	int bins = 25;
	DetectSVM * detector;
};
