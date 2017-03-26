#pragma once

#include <QObject>

class Model : public QObject
{
	Q_OBJECT

public:
	Model(QObject *parent);
	~Model();
	void SaveVideo();
	void SaveConfig();
	void SaveFace();
	void SaveParams();
	void UpdateROI();
	void SetROI();
	int GetParams();
	std::string GetVideos();
	std::string GetFaces();
	int GetROI();
};
