#pragma onc
#include<iostream>
#include "CondimentDecorator.h"
using namespace std;

class Mocha:public CondimentDecorator
{
	Beverage *beveragesObj;
public:
	Mocha(Beverage *tempBevarageObj);
	~Mocha(void);
	/* This method gives the description of the expresso */
	void getDescription();

	/* This method gives the cost of the expresso */
	float getCost();
};

