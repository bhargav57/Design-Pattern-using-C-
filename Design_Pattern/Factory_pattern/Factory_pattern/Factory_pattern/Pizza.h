#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Pizza
{
public:
	std::string m_name;
	std::string m_dough;
	std::string m_sauce;
	vector<std::string> m_topping;
	Pizza() = default;
	~Pizza() = default;
	void prepare();
	void bake();
	void box();
	virtual void cut();
	std::string getName();
};

