#include "Anomaly.h"

Anomaly::Anomaly(QObject *parent,int ID,ROI *RECT,QDate *DATE,long TIME)
	: QObject(parent)
{
	id = ID;
	rect = RECT;
	Date = DATE;
	TimeStamp = TIME;
}

Anomaly::Anomaly(int x)
{

}

Anomaly::~Anomaly()
{
}

int Anomaly::GetId()
{
	return id;
}
ROI* Anomaly::GetRect()
{
	return rect;
}
QDate* Anomaly::GetDate()
{
	return Date;
}
long Anomaly::GetTime()
{
	return TimeStamp;
}
void Anomaly::SetId(int ID)
{
	id = ID;
}
void Anomaly::SetRect(ROI *RECT)
{
	rect = RECT;
}
void Anomaly::SetDate(QDate *DATE)
{
	Date = DATE;
}
void Anomaly::SetTime(long TIME)
{
	TimeStamp = TIME;
}
