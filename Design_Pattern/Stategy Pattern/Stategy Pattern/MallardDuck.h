#pragma once
#include "Duck.h"

class MallardDuck: public Duck
{
public:
	MallardDuck();
	~MallardDuck(void);

	void action();
	void setFlyBehaviour(FlyBehaviour *flyObj);
	void setQuackBehaviour(QuackBehaviour *quckBehvObj);
};

