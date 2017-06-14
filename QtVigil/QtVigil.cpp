#include "QtVigil.h"

QtVigil::QtVigil(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	CamCounter = 0;
	Rows = 0;
	Cols = 0;

	Feed = new FeedScreen();
	timer = new QTimer(this);
	PickWindow = new PickCamScreen();
	connect(PickWindow, SIGNAL(clicked(string)), this, SLOT(AddCams(string)));
	connect(PickWindow, SIGNAL(clicked(string)), Feed, SLOT(startFeed(string)));

	for (int i = 0; i < 10; i++) {
		CamView[i] = new QLabel();
		CamName[i] = new QLabel();
		QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
		CamView[i]->setMinimumWidth(300);
		CamName[i]->setMinimumWidth(300);
		CamView[i]->setMinimumHeight(300);
		CamName[i]->setMinimumHeight(30);
		CamView[i]->setSizePolicy(sizePolicy);
		CamName[i]->setSizePolicy(sizePolicy);
		CamView[i]->setFrameShape(QFrame::Box);
		CamName[i]->setFrameShape(QFrame::Box);
		CamView[i]->setText("Camera Feed");
		CamName[i]->setText("Camera "+CamCounter);
		CamView[i]->setAlignment(Qt::AlignHCenter);
		CamName[i]->setAlignment(Qt::AlignHCenter);
	}

	for (int i = 0; i < 10; i++) {
		AnomView[i] = new QLabel();
		AnomName[i] = new QLabel();
		QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
		AnomView[i]->setMinimumWidth(150);
		AnomName[i]->setMinimumWidth(150);
		AnomView[i]->setMinimumHeight(150);
		AnomName[i]->setMinimumHeight(30);
		AnomView[i]->setSizePolicy(sizePolicy2);
		AnomName[i]->setSizePolicy(sizePolicy2);
		AnomView[i]->setFrameShape(QFrame::Box);
		AnomName[i]->setFrameShape(QFrame::Box);
		AnomView[i]->setText("Anomaly Detected");
		AnomName[i]->setText("Anomaly " + CamCounter);
		AnomView[i]->setAlignment(Qt::AlignHCenter);
		AnomName[i]->setAlignment(Qt::AlignHCenter);
	}

}

void QtVigil::AddObserver(Camera*)
{

}
void QtVigil::UpdateObserver(Camera*, Anomaly*)
{

}
void QtVigil::UpdateObserver(Camera*)
{

}
void QtVigil::RemoveObserver(Camera*)
{

}
std::vector<Anomaly*> QtVigil::GetAnomalies()
{
	return GetAnomalies();
}
std::vector<Anomaly*> QtVigil::GetFaces()
{
	return GetFaces();
}


void QtVigil::on_AddCam_clicked()
{
	
	PickWindow->show();
	//AddCams();
	//AddAnoms();
}

void QtVigil::on_PostiveTrain_clicked()
{
	FilenamePos = QFileDialog::getOpenFileName(
		this,
		tr("Open Training File"),
		"C://",
		"Training Files (*.txt)"
	);
}

void QtVigil::on_NegativeTrain_clicked()
{
	FilenameNeg = QFileDialog::getOpenFileName(
		this,
		tr("Open Training File"),
		"C://",
		"Training Files (*.txt)"
	);
}

void QtVigil::on_StartTrain_clicked()
{
	//std::thread trainThread(TrainingThread);

	//std::thread t([] {
	//	TrainingThread;
	//});

	//trainThread.join();

	TrainingThread();
}

void QtVigil::AddCams(string camname)
{

	if (CamCounter != 10)
	{
		if (Rows != 3)
		{
			CamName[CamCounter]->setText(QString::fromStdString(camname));
			ui.CamViewReg->addWidget(CamView[CamCounter], Cols, Rows);
			ui.CamViewReg->addWidget(CamName[CamCounter], Cols + 1, Rows);

			connect(timer, SIGNAL(timeout()), this, SLOT(refresh()));
			timer->start(20);

			CamCounter++;
			Rows++;
		}
		else
		{
			Rows = 0;
			Cols = Cols + 2;
			ui.CamViewReg->addWidget(CamView[CamCounter], Cols, Rows);
			ui.CamViewReg->addWidget(CamName[CamCounter], Cols + 1, Rows);
			CamCounter++;
			Rows++;
		}
	}
}


void QtVigil::AddAnoms()
{
	if (CamCounter != 10)
	{
		ui.AnomViewReg->addWidget(AnomView[CamCounter], Cols, 0);
		ui.AnomViewReg->addWidget(AnomName[CamCounter], Cols + 1, 0);
		CamCounter++;
		Cols = Cols+2;
	}
}


void QtVigil::TrainingThread() {
	//create trainer
	SVMTrainer trainer = new SVMTrainer(this);
	//initiliaze and start training
	trainer.initializeSVM(FilenamePos, FilenameNeg);
	//done when back in response, till threading.
	//after threading can show pop up of done
}

void QtVigil::refresh()
{
	QImage VFrame((uchar*)Feed->GetProcessedFrame().data, Feed->GetProcessedFrame().cols, Feed->GetProcessedFrame().rows, Feed->GetProcessedFrame().step, QImage::Format_RGB888);
	CamView[CamCounter-1]->setPixmap(QPixmap::fromImage(VFrame));
}