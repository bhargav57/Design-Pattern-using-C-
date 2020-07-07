#include<iostream>
#include<vector>
#include<array>
#include<thread>
#include<mutex>
using namespace std;
class Vdat
{
public:
	void open();

};


class FDataB :public Vdat
{
 //private variable
public:

};

class FDataD :public Vdat
{
	//private variable
public:
};


class MDataB :public Vdat
{
	//private variable
public:

};

class MDataD :public Vdat
{
	//private variable
public:
};

class parser
{
public:
	virtual Vdat* parse(string type) = 0;
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
	
	Vdat* parse(string type)
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

class parseMdata :public parser
{
public:
	Vdat* parse(string type)
	{
		if (type == "B")
		{
			return new MDataB();
		}
		else if (type == "D")
		{
			return new MDataD();
		}
	}
};


int main()
{
	
	return 0;
}