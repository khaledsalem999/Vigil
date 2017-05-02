#pragma once

#include <QtPlugin>
#include <Anomaly.h>


class DetectAlgo
{
public:
	virtual ~DetectAlgo() {} // do not forget this

signals: // <- ignored by moc and only serves as documentation aid
		 // The code will work exactly the same if signals: is absent.
	virtual void someThingHappened() = 0;
}

Q_DECLARE_INTERFACE(DetectAlgo, "DetectAlgo") // define this out of namespace scope