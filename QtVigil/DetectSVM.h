#pragma once

#include <QObject>
#include "opencv2/core/utility.hpp"

class DetectSVM : public QObject
{
	Q_OBJECT

public:
	DetectSVM(QObject *parent);
	~DetectSVM();

private:

};
