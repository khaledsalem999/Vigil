#include "QtVigil.h"
#include "FeedScreen.h"
#include "Controller.h"
#include "Camera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtVigil mainWindow;
	//FeedScreen feedWindow;
	mainWindow.show();
	//feedWindow.show();
	//feedWindow.raise();
	
	//Camera *Cam;
	//Cam = new Camera();

	return a.exec();
}
