#include "Model.h"

Model::Model(QObject *parent)
	: QObject(parent)
{
}

Model::~Model()
{
}

void Model::SaveVideo()
{

}
void Model::SaveConfig()
{

}
void Model::SaveFace()
{

}
void Model::SaveParams()
{

}
void Model::UpdateROI()
{

}
void Model::SetROI()
{

}
int Model::GetParams()
{
	return 0;
}
std::string Model::GetVideos()
{
	return "no";
}
std::string Model::GetFaces()
{
	return "no";
}
int Model::GetROI()
{
	return 0;
}