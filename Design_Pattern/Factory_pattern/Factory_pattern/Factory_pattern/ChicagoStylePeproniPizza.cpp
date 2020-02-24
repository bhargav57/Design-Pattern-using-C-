#include "ChicagoStylePeproniPizza.h"

ChicagoStylePeproniPizza::ChicagoStylePeproniPizza()
{
	m_name = "Chicago Style Sauce and Peproni Pizza";
	m_dough = "Thick Crust Dough";
	m_sauce = "Marinara Sauce with Peprica";
	m_topping = { "Grated", "Reggiano", "Cheese","Peprica","Oregano" };
}
void ChicagoStylePeproniPizza::cut()
{
	std::cout << "Cut pizaa in a square shape......\n";
}