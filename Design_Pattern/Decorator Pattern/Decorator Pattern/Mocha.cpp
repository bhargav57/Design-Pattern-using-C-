#include "Mocha.h"


Mocha::Mocha(Beverage *tempBevarageObj)
{
	beveragesObj = tempBevarageObj;
}


Mocha::~Mocha(void)
{
}

/* This method gives the description of the expresso */
void Mocha::getDescription()
{
	beveragesObj->getDescription();
	std::cout<<"Mocha ";
}

/* This method gives the cost of the expresso */
float Mocha::getCost()
{
	return 0.20 + beveragesObj->getCost();
}