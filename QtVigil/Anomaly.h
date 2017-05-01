#pragma once

#include <QObject>
#include <ROI.h>

class Anomaly : public QObject
{
	Q_OBJECT

public:
	Anomaly(QObject *parent,int,ROI*,QDate*,long);
	Anomaly(int);
	~Anomaly();
	int GetId();
	ROI* GetRect();
	QDate* GetDate();
	long GetTime();
	void SetId(int);
	void SetRect(ROI*);
	void SetDate(QDate*);
	void SetTime(long);

private:
	int id;
	ROI *rect;
	QDate *Date;
	long TimeStamp;
	

};
