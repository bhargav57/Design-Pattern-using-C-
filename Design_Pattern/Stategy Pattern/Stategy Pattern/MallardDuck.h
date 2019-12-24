#pragma once
#include "Duck.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"
#include "Quack.h"

class MallardDuck: public Duck
{
public:
	MallardDuck();
	~MallardDuck(void);

	void action();
	void setFlyBehaviour(FlyBehaviour *flyObj);
	void setQuackBehaviour(QuackBehaviour *quckBehvObj);
};

