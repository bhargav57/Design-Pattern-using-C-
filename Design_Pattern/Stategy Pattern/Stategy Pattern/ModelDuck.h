#pragma once
#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

class ModelDuck:public Duck
{
public:
	ModelDuck(void);
	~ModelDuck(void);
	void action();
	void setFlyBehaviour(FlyBehaviour *flyBehObj);
	void setQuackBehaviour(QuackBehaviour *quckBehvObj);
};

