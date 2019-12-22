#pragma once
#include "QuackBehaviour.h"
#include <iostream>
using namespace std;

class Quack:public QuackBehaviour
{
public:
	Quack(void);
	~Quack(void);
	virtual void quack();
};

