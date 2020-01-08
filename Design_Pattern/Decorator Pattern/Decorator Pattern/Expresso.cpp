#include "Expresso.h"


Expresso::Expresso(void)
{
}


Expresso::~Expresso(void)
{
}

/* This pure virtual method gives the description of the expresso */
void Expresso::getDescription()
{
	std::cout<<"Expresso ";
}

/* This pure virtual method gives the cost of the expresso */
float Expresso::getCost()
{
	return 1.99;
}