#include "PizzaStore.h"
Pizza* PizzaStore::orderPizza(std::string name)
{
	Pizza* m_pizza = createPizza(name);
	m_pizza->prepare();
	m_pizza->bake();
	m_pizza->cut();
	m_pizza->box();
	return m_pizza;
}