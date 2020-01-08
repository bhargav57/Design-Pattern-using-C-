#include "CondimentDecorator.h"


CondimentDecorator::CondimentDecorator(void)
{
}


CondimentDecorator::~CondimentDecorator(void)
{
}


/* this overridden methood gives the description of the beverage */
void CondimentDecorator::getDescription()
{
	std::cout<<"This is Condiment Decorator class\n";
}


float CondimentDecorator::getCost()
{
	return 0.0;
}