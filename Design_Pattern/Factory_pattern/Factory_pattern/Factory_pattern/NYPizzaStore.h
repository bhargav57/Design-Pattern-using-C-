#pragma once
#include "PizzaStore.h"
#include "Pizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePeproniPizza.h"
using namespace std;

class NYPizzaStore :
	public PizzaStore
{
public:
	NYPizzaStore() = default;
	Pizza* createPizza(std::string name);
};

