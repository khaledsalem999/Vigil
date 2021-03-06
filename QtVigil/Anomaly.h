#pragma once

#include <QObject>
#include <ROI.h>
#include <chrono>
#include "opencv2/core/utility.hpp"


class Anomaly : public QObject
{
	Q_OBJECT


public:
	Anomaly(QObject *parent, int,int, std::string, std::string);
	Anomaly(QObject *parent,int, std::string, std::string);
	~Anomaly();
	int GetId();
	int GetCamId();
	std::string GetDate();
	std::chrono::system_clock::time_point GetTime();
	void SetId(int);
	std::string GetPath();
	void SetPath(std::string);
	std::string GetDescription();


private:
	int id;
	int camId;
	std::chrono::system_clock::time_point timeStamp;
	std::string description;
	std::string Date;
	std::string path;
	std::vector<cv::Mat> Vid;


};
