#include "QtVigil.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtVigil w;
	w.show();
	return a.exec();
}
