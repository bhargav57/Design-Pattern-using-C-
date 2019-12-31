#include "currentConitionDisplay.h"


currentConitionDisplay::currentConitionDisplay(void)
{
}


currentConitionDisplay::~currentConitionDisplay(void)
{
}

void currentConitionDisplay::setParent(Subject *parentObj)
{
	parent = parentObj;
	parent->registerObserver(this);
}
void currentConitionDisplay::update()
{
	currentTemp      = parent->getTemprature();
	currentHumididty = parent->getHumidity();
	currentPressure  = parent->getBerometriPressure();
}
void currentConitionDisplay::displayData()
{
	std::cout<<"[currentConditionDisplay] Current Temprature is = "<<currentTemp<<"\n";
	std::cout<<"[currentConditionDisplay] Current Huimidity is  = "<<currentHumididty<<"\n";
	std::cout<<"[currentConditionDisplay] Current Pressure is   = "<<currentPressure<<"\n";
}