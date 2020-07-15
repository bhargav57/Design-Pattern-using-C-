#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class AbstractProductA
{
public:
	virtual ~AbstractProductA()
	{

	}
	virtual void usfulFun() = 0;
};

class productA1 :public AbstractProductA
{
public:
	void usfulFun()
	{
		std::cout << "Product A1\n";
	}
};

class productA2 :public AbstractProductA
{
public:
	void usfulFun()
	{
		std::cout << "Product A2\n";
	}
};

class AbstractProductB
{
public:
	virtual ~AbstractProductB()
	{

	}
	virtual void usfulFun() = 0;
};

class productB1 :public AbstractProductB
{
public:
	void usfulFun()
	{
		std::cout << "Product B1\n";
	}
};

class productB2 :public AbstractProductB
{
public:
	void usfulFun()
	{
		std::cout << "Product B2\n";
	}
};

/*
We need a pointer of the product class beciause we cannot create an object of the abstract class but
we can always create a pointer of the abstract class
*/
class abstractFactory
{
public:
	virtual ~abstractFactory()
	{

	}
	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;
};

class Factory1 :public abstractFactory
{
public:
	AbstractProductA* createProductA()
	{
		return new productA1();
	}

	AbstractProductB* createProductB()
	{
		return new productB1();
	}
};


class Factory2 :public abstractFactory
{
public:
	AbstractProductA* createProductA()
	{
		return new productA2();
	}

	AbstractProductB* createProductB()
	{
		return new productB2();
	}
};

class Factory3 :public abstractFactory
{
public:
	AbstractProductA* createProductA()
	{
		return new productA1();
	}

	AbstractProductB* createProductB()
	{
		return new productB2();
	}
};

class Factory4 :public abstractFactory
{
public:
	AbstractProductA* createProductA()
	{
		return new productA2();
	}

	AbstractProductB* createProductB()
	{
		return new productB1();
	}
};


void clientcode(abstractFactory& factory)
{
	AbstractProductA* a = factory.createProductA();
	a->usfulFun();

	AbstractProductB* b = factory.createProductB();
	b->usfulFun();
}




int main()
{
	vector<abstractFactory*> vec;
	
	Factory1 f1;
	vec.push_back(&f1);


	Factory2 f2;
	vec.push_back(&f2);

	Factory3 f3;
	vec.push_back(&f3);

	Factory4 f4;
	vec.push_back(&f4);

   

	for (auto e : vec)
	{
		clientcode(*e);
	}

	
}