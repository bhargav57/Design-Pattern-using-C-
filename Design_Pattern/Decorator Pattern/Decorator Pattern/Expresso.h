#pragma once
#include<iostream>
#include "Beverage.h"
using namespace std;
class Expresso:public Beverage
{
public:
	Expresso(void);
	~Expresso(void);

	/* This method gives the description of the expresso */
	void getDescription();

	/* This method gives the cost of the expresso */
	float getCost();
};

