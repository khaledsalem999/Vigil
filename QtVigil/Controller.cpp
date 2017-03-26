#include "Controller.h"

Controller::Controller(QObject *parent)
	: QObject(parent)
{
}

Controller::~Controller()
{
}

void Controller::initializeHoG()
{

}
void Controller::updateConfig()
{

}
void Controller::intializeSVM()
{

}
std::string Controller::sendLogin()
{
	return "no";
}
std::string Controller::GetFaces()
{
	return "no";
}
std::string Controller::GetAnomalies()
{
	return "oh";
}
std::string Controller::GetCamera()
{
	return "yep";
}
void Controller::AddCamera()
{

}
std::string Controller::DetectAnomaly()
{
	return "Nope";
}
std::string Controller::DetectFaces()
{
	return "nope";
}
void Controller::sendAlaram()
{

}
bool Controller::isFaceDetected()
{
	return false;
}
void Controller::SaveAnomaly()
{

}
void Controller::SaveFace()
{

}