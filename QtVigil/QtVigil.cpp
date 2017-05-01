#include "QtVigil.h"

QtVigil::QtVigil(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
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
	ui.CamsRegion->addWidget(FeedObj.setupUi);
}
