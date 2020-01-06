#pragma once
#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
using namespace std;

class forecasetDisplay:public Observer,DisplayElement
{
	Subject *parent;
	int currentTemp;
	float currentHumididty;
	float currentPressure;
public:
	forecasetDisplay(void);
	~forecasetDisplay(void);
	void setParent(Subject *parentObj);
	void update();
	void displayData();
};

