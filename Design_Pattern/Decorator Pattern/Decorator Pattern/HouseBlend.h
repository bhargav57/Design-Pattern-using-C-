#pragma once
#include<iostream>
#include "CondimentDecorator.h"

class HouseBlend:public CondimentDecorator
{
	Beverage *beveragesObj;
public:
	HouseBlend(Beverage *tempBevarageObj);
	~HouseBlend(void);
	/* This method gives the description of the expresso */
	void getDescription();

	/* This method gives the cost of the expresso */
	float getCost();
};

