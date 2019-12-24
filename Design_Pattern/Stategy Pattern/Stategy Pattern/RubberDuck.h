#pragma once
#include "Duck.h"
class RubberDuck: public Duck
{
public:
	RubberDuck(void);
	~RubberDuck(void);

	void action();
	void setFlyBehaviour(FlyBehaviour *flyBehObj);
	void setQuackBehaviour(QuackBehaviour *quckBehvObj);
};

