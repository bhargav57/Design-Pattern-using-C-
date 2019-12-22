#pragma once
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck: public Duck
{
public:
	MallardDuck(void);
	~MallardDuck(void);
	void action();
};

