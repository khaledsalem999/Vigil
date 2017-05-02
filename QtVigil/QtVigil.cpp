#include "QtVigil.h"

QtVigil::QtVigil(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	CamCounter = 0;
	Rows = 0;
	Cols = 0;
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
	PickCamScreen *PickWindow;
	PickWindow = new PickCamScreen();
	PickWindow->show();
}

void QtVigil::on_PostiveTrain_clicked()
{
	FilenamePos = QFileDialog::getOpenFileName(
		this,
		tr("Open Training File"),
		"C://",
		"Training Files (*.lst)"
	);
}

void QtVigil::on_NegativeTrain_clicked()
{
	FilenameNeg = QFileDialog::getOpenFileName(
		this,
		tr("Open Training File"),
		"C://",
		"Training Files (*.lst)"
	);
}

void QtVigil::AddCams()
{
	if (CamCounter != 10)
	{
		if (Rows != 3)
		{
			ui.CamViewReg->addWidget(CamView[CamCounter], Cols, Rows);
			ui.CamViewReg->addWidget(CamName[CamCounter], Cols + 1, Rows);
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
