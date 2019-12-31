#pragma once
#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
using namespace std;
class currentConitionDisplay: public Observer, DisplayElement
{
	Subject *parent;
	int currentTemp;
	float currentHumididty;
	float currentPressure;
public:
	currentConitionDisplay(void);
	~currentConitionDisplay(void);
	void setParent(Subject *parentObj);
	void update();
	void displayData();
};

