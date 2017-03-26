#include "QtVigil.h"

QtVigil::QtVigil(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtVigil::OpenFeed()
{

}
void QtVigil::on_AddCam_clicked()
{
    Feed = new FeedScreen();
    Feed->show();
}
