#include "ROI.h"

ROI::ROI(QObject *parent,int x,int y,int width,int height)
	: QObject(parent)
{
	X = x;
	Y = y;
	Width = width;
	Height = height;
}

ROI::ROI()
{
	
}

ROI::~ROI()
{
}

int ROI::GetX()
{
	return X;
}
int ROI::GetY()
{
	return X;
}
int ROI::GetWidth()
{
	return Width;
}
int ROI::GetHeight()
{
	return Width;
}
void ROI::SetX(int x)
{
	X = x;
}
void ROI::SetY(int y)
{
	Y = y;
}
void ROI::SetWidth(int width)
{
	Width = width;
}
void ROI::SetHeight(int height)
{
	Height = height;
}