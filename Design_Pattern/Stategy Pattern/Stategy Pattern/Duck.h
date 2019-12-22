#pragma once
#include "QuackBehaviour.h"
#include "FlyBehaviour.h"

class Duck
{

public:
	Duck(void);
	~Duck(void);

	QuackBehaviour *quackObj;
	FlyBehaviour   *flyObj;
	
	void action();
};

