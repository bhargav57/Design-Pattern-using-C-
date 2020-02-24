#include "Pizza.h"

void Pizza::prepare()
{
	std::cout << "preparing " << m_name << "\n";
	std::cout << "Tossing dough ...." << m_dough << "\n";
	std::cout << "Adding souce" << m_sauce << "\n";
	std::cout << "Adding tooping";
	for (const auto& e : m_topping)
	{
		std::cout << e << " ";
	}
}

void Pizza::bake()
{
	std::cout << "bake for 25 miniute......" << "\n";
}
void Pizza::box()
{
	std::cout << "Place pizza in official PizzaStore box" << "\n";
}
void Pizza::cut()
{
	std::cout << "Cutting the pizza into diagonal slices" << "\n";
}
std::string Pizza::getName()
{
	return m_name;
}