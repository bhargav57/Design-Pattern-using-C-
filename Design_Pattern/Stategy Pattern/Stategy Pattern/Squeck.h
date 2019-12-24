#pragma once
#include "QuackBehaviour.h"
#include <iostream>
using namespace std;
class Squeck:public QuackBehaviour
{
public:
	Squeck(void);
	~Squeck(void);
	virtual void quack();
};

