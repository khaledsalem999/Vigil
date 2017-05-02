#include "ObserverUser.h"


ObserverUser::ObserverUser(QObject *parent) 
{

}

ObserverUser::~ObserverUser()
{
}

void ObserverUser::AddCamera(Camera)
{
}

void ObserverUser::RemoveCamera(Camera)
{
}

void ObserverUser::UpdateView(Camera)
{
}

void ObserverUser::UpdateView(Anomaly, Camera)
{
}

void ObserverUser::UpdateParams(Camera, HOGParams)
{
}

std::vector<Camera> ObserverUser::GetCameras()
{
	return std::vector<Camera>();
}

std::vector<Anomaly> ObserverUser::GetAnomaly()
{
	return std::vector<Anomaly>();
}
