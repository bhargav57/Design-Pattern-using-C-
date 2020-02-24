#pragma once
#include "Pizza.h"
using namespace std;

class PizzaStore
{
	Pizza *m_pizza;
public:
	virtual Pizza* createPizza(std::string name)
	{
		return m_pizza;
	}
	Pizza* orderPizza(std::string name);
};

