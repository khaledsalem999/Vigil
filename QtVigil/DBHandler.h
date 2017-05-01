#pragma once

#include <QObject>

class DBHandler : public QObject
{
	Q_OBJECT

public:
	DBHandler::DBHandler(QObject *parent, std::string dbLoc, std::string user, std::string pass);
	~DBHandler();
	bool Insert(std::string query);
	std::vector<std::string> Select(std::string query);
	bool Update(std::string query);

private:
	std::string dbLoc;
	std::string user;
	std::string pass;
};