#include "weatherData.h"


weatherData::weatherData(void)
{
}


weatherData::~weatherData(void)
{
}

void weatherData::registerObserver(Observer *o)
{
	vectObserver.push_back(o);
}
void weatherData::removeObserver(Observer *o)
{

}
void weatherData::notifyObserver()
{
	//vector<Observer*>::iterator itr = vectObserver.begin();
	auto itr = vectObserver.begin(); /* C++ 11 auto key word is used instead of  vector<Observer*>::iterator */
	while( itr != vectObserver.end())
	{
		Observer *obObj = *itr;
		obObj->update();
		itr++;
	}
}

void weatherData::mesurementChanged()
{
	notifyObserver();
}

void weatherData::setMesurement(int temprature, float humidity, float pressure)
{
	this->temp              = temprature;
	this->humidity          = humidity;
	this->barometriPressure = pressure;
	mesurementChanged();
}
int weatherData::getTemprature()
{
	return temp;
}
float weatherData::getHumidity()
{
	return humidity;
}
float weatherData::getBerometriPressure()
{
	return barometriPressure;
}