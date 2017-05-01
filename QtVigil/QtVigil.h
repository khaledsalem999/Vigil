#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtVigil.h"
#include <Camera.h>
#include <Anomaly.h>
#include <vector>
#include "ui_InternalFeed.h"

class QtVigil : public QMainWindow
{
	Q_OBJECT

public:
	QtVigil(QWidget *parent = Q_NULLPTR);
	void AddObserver(Camera*);
	void UpdateObserver(Camera*, Anomaly*);
	void UpdateObserver(Camera*);
	void RemoveObserver(Camera*);
	std::vector<Anomaly*> GetAnomalies();
	std::vector<Anomaly*> GetFaces();



private slots:
    void on_AddCam_clicked();

private:
	Ui::QtVigilClass ui;
	Ui::InternalFeed FeedObj;
};
