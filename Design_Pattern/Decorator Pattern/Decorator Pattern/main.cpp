#pragma once
#include "Beverage.h"
#include "Mocha.h"
#include "Expresso.h"
#include "HouseBlend.h"
#include <iostream>

using namespace std;

int main()
{
	Beverage* bv = new Expresso();
	Beverage* bv2 = new Mocha(bv);
	
	bv2->getDescription();
	std::cout<<"\n";
	std::cout<<bv2->getCost();
	std::cout<<"\n";

	Beverage *bv3 = new HouseBlend(bv);
	bv3->getDescription();
	std::cout<<"\n";
	std::cout<<bv3->getCost();
	std::cout<<"\n";


	return 0;
}