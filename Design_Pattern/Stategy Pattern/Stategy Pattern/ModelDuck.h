#pragma once
#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

class ModelDuck:public Duck
{
public:
	ModelDuck(void);
	~ModelDuck(void);
	virtual void action();
};

