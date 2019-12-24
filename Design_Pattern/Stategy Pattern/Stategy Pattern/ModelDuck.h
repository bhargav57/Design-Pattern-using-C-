#pragma once
#include "Duck.h"


class ModelDuck:public Duck
{
public:
	ModelDuck(void);
	~ModelDuck(void);
	void action();
	void setFlyBehaviour(FlyBehaviour *flyBehObj);
	void setQuackBehaviour(QuackBehaviour *quckBehvObj);
};

