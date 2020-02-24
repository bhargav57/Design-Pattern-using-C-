#include "NYPizzaStore.h"


Pizza* NYPizzaStore::createPizza(std::string name)
{
	if (name.compare("cheese") == 0)
	{
		NYStyleCheesePizza* nscp = new NYStyleCheesePizza();
		std::cout << nscp->getName() << "\n";
		return nscp;
	}
	else if (name.compare("peproni") == 0)
	{
		NYStylePeproniPizza* nspp = new NYStylePeproniPizza();
		std::cout << nspp->getName() << "\n";
		return nspp;
	}
	else
	{
		Pizza* pizzaPtr = nullptr;
		return pizzaPtr;
	}
}