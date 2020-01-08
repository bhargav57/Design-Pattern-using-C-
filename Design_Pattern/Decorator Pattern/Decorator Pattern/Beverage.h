#pragma once
#include<iostream>

using namespace std;
class Beverage
{
public:
	Beverage(void);
	~Beverage(void);
	/* this pure virtual methood gives the description of the beverage */
	virtual void getDescription() = 0;

	/* This pure virtual method gives the cost of the beverage */
	virtual float getCost() = 0;
};

