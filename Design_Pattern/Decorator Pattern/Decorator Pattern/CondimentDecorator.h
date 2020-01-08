#pragma once
#include<iostream>
#include "Beverage.h"

using namespace std;
class CondimentDecorator:public Beverage
{
public:
	CondimentDecorator(void);
	~CondimentDecorator(void);

	/* this overridden methood gives the description of the beverage */
	void getDescription();

	/* this overridden methood gives the description of the beverage */
    float getCost();
};

