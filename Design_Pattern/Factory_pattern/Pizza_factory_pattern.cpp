#include<iostream>
#include<vector>
#include<array>
#include<thread>
#include<mutex>
using namespace std;

class pizza
{
	std::string name;
	string dough;
	string sauce;
	vector<string> toopings;
public:
	pizza() = default;
	pizza(string idough,string isauce, vector<string> itoopings):
		dough(idough),sauce(isauce), toopings(itoopings)
	{
		//std::cout << "This is a basic pizza\n";
	}
	void prepare()
	{
		std::cout << "Preparing the pizza with various topping\n";
		std::cout << "Tossing the " << dough << " dough ....\n";
		std::cout << "Adding " << sauce << " sauce ....\n";
		std::cout << "Adding thetoppings ....\n";

		for (auto const& e : toopings)
		{
			std::cout << e << " ";
		}
		std::cout << "\n";
	}
	void bake()
	{
		std::cout << "Baking the pizza\n";
	}
	void cut()
	{
		std::cout << "Cutting the pizza\n";
	}
	void box()
	{
		std::cout << "Packing the pizza\n";
	}
};

class NYcheesePizza :public pizza
{
public:
	NYcheesePizza() :pizza("Thin crust", "Sweet Tomoto", {"capcicum","olive","onion"})
	{
		std::cout<<"New York Cheese Pizza\n";
	}
};

class NYPeproniPizza :public pizza
{
public:
	NYPeproniPizza() :pizza("Thin crust", "Sweet Tomoto", { "peproni","olive","onion" })
	{
		std::cout << "New York Peproni Pizza\n";
	}
};

class ChicagocheesePizza :public pizza
{
public:
	ChicagocheesePizza() :pizza("Thick crust", "Hot and spicy Tomoto", { "Peprica","olive","onion" })
	{
		std::cout << "Chicago Cheese Pizza\n";
	}
};

class ChicagoFarmeVillePizza :public pizza
{
public:
	ChicagoFarmeVillePizza() :pizza("Thick crust", "Hot and spicy Tomoto", { "Panner","Tomoato","Peprica","olive","onion" })
	{
		std::cout << "Chicago Farm Pizza\n";
	}
};

class pizzaStore
{
public:
	pizza orderPizza(string type)
	{
		pizza p = createPizza(type);
		p.prepare();
		p.bake();
		p.cut();
		p.box();
		return p;
	}
	virtual pizza createPizza(string type) = 0;
};

class NYstylePizzaStore : public pizzaStore
{
	pizza p;
public:
	pizza createPizza(string type)
	{
		if (type.compare("cheese") == 0)
		{
			 p = NYcheesePizza();
			 return p;
		}
		else if (type.compare("peproni") == 0)
		{
			p = NYPeproniPizza();
			return p;
		}

	}
};

class ChicagoStylePizzaStore :public pizzaStore
{
public:
	pizza createPizza(string type)
	{
		if (type.compare("cheese") == 0)
		{
			return ChicagocheesePizza();
		}
		else if (type.compare("farm") == 0)
		{
			return ChicagoFarmeVillePizza();
		}
	}
};

int main()
{
	pizzaStore* nyPizzastore = new NYstylePizzaStore();
	nyPizzastore->orderPizza("cheese");

	std::cout << "Here comes the second pizza ------> \n\n\n\n\n";

	pizzaStore* chicagoPizzaStore = new ChicagoStylePizzaStore();
	chicagoPizzaStore->orderPizza("farm");

	return 0;
}