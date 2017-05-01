#include "QtVigil.h"
#include "FeedScreen.h"
#include "Controller.h"
#include "Camera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtVigil w;
	FeedScreen Feed;
	Camera *Cam;
	Cam = new Camera();
	//Controller Control = new Controller("Khaled","Hola");
	//Control.initializeHoG(Cam);
	w.show();
	Feed.show();
	return a.exec();
}
