#include "Pizza.h"
#include "NYStyleCheesePizza.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
using namespace std;
int main()
{
	NYPizzaStore obj;
	obj.orderPizza("cheese");
	std::cout << "\n";
    obj.orderPizza("peproni");

	std::cout << "\n \n \n";
	std::cout << "Chiacgo order" << "\n";
	std::cout << "\n";
	ChicagoPizzaStore *obj1 = new ChicagoPizzaStore();
	obj1->orderPizza("cheese");

	std::cout<<"\n";
	std::cout << "Second order" << "\n";
	obj1->orderPizza("peproni");


	return 0;
}