#pragma once

#include <QObject>

class View : public QObject
{
	Q_OBJECT

public:
	View(QObject *parent);
	~View();
	void registerObserver();
	void notifyObserver();
	void removeObserver();
	void AddStream();
	void RemoveStream();
	void DisplayFaces();
	void DisplayAnomaly();

};
