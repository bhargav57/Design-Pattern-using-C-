#pragma once
#include "Observer.h"

class Subject
{
public:
	Subject(void);
	~Subject(void);
	virtual void registerObserver(Observer *o)
	{
	}
	virtual void removeObserver(Observer *o)
	{
	}
	virtual void notifyObserver()
	{
	}
	virtual void setMesurement(int temprature, float humidity, float pressure)=0;
	virtual int getTemprature()=0;
	virtual float getHumidity()=0;
	virtual float getBerometriPressure()=0;
	/*virtual void setTemprature(int a)=0;*/
};

