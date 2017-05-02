#pragma once

#include <QObject>
#include <DetectAlgo.h>
#include "opencv2/core/utility.hpp"

class DetectSVM : public QObject, public DetectAlgo
{
	Q_OBJECT

public:
	DetectSVM(QObject *parent);
	~DetectSVM();

private:

};
