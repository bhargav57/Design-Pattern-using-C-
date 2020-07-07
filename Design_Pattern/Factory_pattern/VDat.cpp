#include<iostream>
#include<vector>
#include<array>
#include<thread>
#include<mutex>
using namespace std;
class Vdata
{
public:
	void open();

};


class FDataB :public Vdata
{
 //private variable
public:

};

class FDataD :public Vdata
{
	//private variable
public:
};


class CDataB :public Vdata
{
	//private variable
public:

};

class CDataD :public Vdata
{
	//private variable
public:
};

class parser
{
public:
	virtual Vdata* parse(string type) = 0;
	void open(string fname, string type)
	{
		//file open
		parse(type);
		//file close;
	}

};

class parseFdata :public parser
{
public:
	
	Vdata* parse(string type)
	{
		if (type == "B")
		{
			return new FDataB();
		}
		else if (type == "D")
		{
			return new FDataD();
		}
	}
};

class parseCdata :public parser
{
public:
	Vdata* parse(string type)
	{
		if (type == "B")
		{
			return new CDataB();
		}
		else if (type == "D")
		{
			return new CDataD();
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