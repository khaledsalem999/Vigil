#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtVigil.h"
#include <Camera.h>
#include <Anomaly.h>
#include <vector>
#include <PickCamScreen.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <SVMTrainer.h>
#include <thread>


class QtVigil : public QMainWindow
{
	Q_OBJECT

public:
	Ui::QtVigilClass ui;
	QtVigil(QWidget *parent = Q_NULLPTR);
	void AddObserver(Camera*);
	void UpdateObserver(Camera*, Anomaly*);
	void UpdateObserver(Camera*);
	void RemoveObserver(Camera*);
	void TrainingThread();
	std::vector<Anomaly*> GetAnomalies();
	std::vector<Anomaly*> GetFaces();
	QString FilenamePos;
	QString FilenameNeg;
	QLabel *CamView[10];
	QLabel *CamName[10];
	QLabel *AnomView[10];
	QLabel *AnomName[10];
	QWidgetList *List;
	int CamCounter;
	int Rows;
	int Cols;

public slots:
	void AddCams();
	void AddAnoms();

private slots:
    void on_AddCam_clicked();
	void on_PostiveTrain_clicked();
	void on_NegativeTrain_clicked();
	void on_StartTrain_clicked();

private:
	PickCamScreen *PickWindow;
};
