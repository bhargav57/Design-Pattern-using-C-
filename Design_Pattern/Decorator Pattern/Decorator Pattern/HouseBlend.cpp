#include "HouseBlend.h"


HouseBlend::HouseBlend(Beverage *tempBevarageObj)
{
	beveragesObj = tempBevarageObj;
}


HouseBlend::~HouseBlend(void)
{
}

void HouseBlend::getDescription()
{
	beveragesObj->getDescription();
	std::cout<<"House Blend ";
}

/* This method gives the cost of the expresso */
float HouseBlend::getCost()
{
	return 0.89 + beveragesObj->getCost();
}