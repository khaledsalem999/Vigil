#include "DBHandler.h"

DBHandler::DBHandler(QObject *parent, std::string dbLoc, std::string user, std::string pass)
	: QObject(parent)
{
		this->dbLoc = dbLoc;
		this->user = user;
		this->pass = pass;
}

DBHandler::~DBHandler()
{
}

bool Insert(std::string query) 
{
}

std::vector<std::string> Select(std::string query) 
{
}

bool Update(std::string query) 
{
}