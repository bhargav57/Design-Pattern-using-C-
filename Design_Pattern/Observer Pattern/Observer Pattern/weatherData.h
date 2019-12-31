#pragma once
#include "Subject.h"
#include <vector>
using namespace std;

class weatherData:public Subject
{
	vector<Observer*> vectObserver;
	int temp;
	float humidity;
	float barometriPressure;
public:
	weatherData(void);
	~weatherData(void);
	void registerObserver(Observer *o);
	void removeObserver(Observer *o);
	void notifyObserver();
	void mesurementChanged();
	void setMesurement(int temprature, float humidity, float pressure);
	int getTemprature();
	float getHumidity();
	float getBerometriPressure();
};

