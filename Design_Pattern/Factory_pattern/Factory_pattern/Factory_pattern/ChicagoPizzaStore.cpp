#include "ChicagoPizzaStore.h"

Pizza* ChicagoPizzaStore::createPizza(std::string name)
{
	if (name.compare("cheese") == 0)
	{
		ChicagoStyleCheesePizaa* cscp = new ChicagoStyleCheesePizaa();
		std::cout << cscp->getName() << "\n";
		return cscp;
	}
	else if (name.compare("peproni") == 0)
	{
		ChicagoStylePeproniPizza* cspp = new ChicagoStylePeproniPizza();
		std::cout << cspp->getName() << "\n";
		return cspp;
	}
	else
	{
		Pizza* pizzaPtr = nullptr;
		return pizzaPtr;
	}
}
