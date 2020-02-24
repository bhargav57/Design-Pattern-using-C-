#pragma once
#include "PizzaStore.h"
#include "Pizza.h"
#include "ChicagoStyleCheesePizaa.h"
#include "ChicagoStylePeproniPizza.h"
using namespace std;
class ChicagoPizzaStore :
	public PizzaStore
{
public:
	ChicagoPizzaStore() = default;
	Pizza* createPizza(std::string name);
};

