#pragma once

#include <QObject>

class DBHandler : public QObject
{
	Q_OBJECT

public:
	DBHandler(QObject *parent);
	~DBHandler();
	void Insert();
	std::string Retrive();

};
