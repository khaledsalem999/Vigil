#pragma once

#include <QObject>
#include <opencv2/core/utility.hpp>

class FileManager : public QObject
{
	Q_OBJECT

public:
	FileManager(QObject *parent);
	~FileManager();
	void SaveVideo(std::vector<cv::Mat>);


private:
	std::string name;
	std::string path;
};
