#include<iostream>
#include<vector>
#include<array>
#include<thread>
#include<mutex>
using namespace std;

class observer
{
public:
	virtual void update(int temp,int press) = 0;
};


class mobapp : public observer
{
public:
	void update(int temp, int press)
	{
		std::cout << "temp =" << temp << " Pressure = " << press<<"\n";
	}
};


class deskapp : public observer
{
public:
	void update(int temp, int press)
	{
		std::cout << "temp square =" << temp*temp << " Pressure square = " << press*press << "\n";
	}
};


class monitor
{

public:
	virtual void addObserver(observer* obj)=0;
	virtual void removeObserver(observer* obj) = 0;
	virtual void modify() = 0;
	virtual void change(int temp, int presr) = 0;
};


class weatherstation : public monitor
{
	vector<observer*> dataset;
	int t;
	int p;
public:
	weatherstation()
	{
		t = 0;
		p = 0;
	}
	void addObserver(observer* obj)
	{
		dataset.push_back(obj);
	}
	void removeObserver(observer* obj)
	{
		vector<observer*>::iterator itr = find(begin(dataset), end(dataset), obj);

		if (itr != end(dataset))
		{
			dataset.erase(itr);
		}
	}
	void change(int temp, int presr)
	{
		t = temp;
		p = presr;
		modify();
	}

	void modify()
	{
		for (auto const& e : dataset)
		{
			e->update(t, p);
		}
	}
};
int main()
{
	weatherstation weBaroda;

	observer* d1= new deskapp();
	mobapp m1;
	mobapp m2;

	weBaroda.addObserver(d1);
	weBaroda.addObserver(&m1);
	weBaroda.addObserver(&m2);

	weBaroda.change(5, 6);

	weBaroda.removeObserver(&m1);
	weBaroda.change(8, 9);

	return 0;
}