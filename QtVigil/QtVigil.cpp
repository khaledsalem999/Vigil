#include "QtVigil.h"

QtVigil::QtVigil(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

std::string QtVigil::GetFaces()
{
	return "No";
}

std::string QtVigil::GetAnomalies()
{
	return "No";
}