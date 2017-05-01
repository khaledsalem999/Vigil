#include "Anomaly.h"

Anomaly::Anomaly(QObject *parent, int ID, int cam, std::string desc, QDate *DATE)
	: QObject(parent)
{
	id = ID;
	camId = cam;
	description = desc;
	Date = DATE;
	this->timeStamp = std::chrono::system_clock::now();
}

Anomaly::Anomaly(QObject *parent, int cam, std::string desc, QDate *DATE)
	: QObject(parent)
{
	camId = cam;
	description = desc;
	Date = DATE;
	this->timeStamp = std::chrono::system_clock::now();
}

Anomaly::~Anomaly()
{
}

int Anomaly::GetId()
{
	return id;
}


int Anomaly::GetCamId()
{
	return camId;
}

QDate* Anomaly::GetDate()
{
	return Date;
}

std::chrono::system_clock::time_point Anomaly::GetTime()
{
	return timeStamp;
}

void Anomaly::SetId(int ID)
{
	id = ID;
}

std::string Anomaly::GetPath()
{
	return path;
}

void Anomaly::SetPath(std::string path) 
{
	this->path = path;
}

std::string Anomaly::GetDescription() 
{
	return description;
}