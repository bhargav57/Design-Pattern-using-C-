#include "forecasetDisplay.h"


forecasetDisplay::forecasetDisplay(void)
{
}


forecasetDisplay::~forecasetDisplay(void)
{
}

void forecasetDisplay::setParent(Subject *parentObj)
{
	parent = parentObj;
	parent->registerObserver(this);
}
void forecasetDisplay::update()
{
	currentTemp      = parent->getTemprature();
	currentHumididty = parent->getHumidity();
	currentPressure  = parent->getBerometriPressure();
}
void forecasetDisplay::displayData()
{
	std::cout<<"[forcastDisplay] forecast Temprature is = "<<currentTemp<<"\n";
	std::cout<<"[forcastDisplay] forecast Huimidity is  = "<<currentHumididty<<"\n";
	std::cout<<"[forcastDisplay] forecast Pressure is   = "<<currentPressure<<"\n";
}