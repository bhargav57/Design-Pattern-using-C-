#include "RubberDuck.h"


RubberDuck::RubberDuck(void)
{
}


RubberDuck::~RubberDuck(void)
{
}

void RubberDuck::action()
{
	flyObj->fly();
	quackObj->quack();
}

void RubberDuck::setFlyBehaviour(FlyBehaviour *flyBehObj)
{
	flyObj = flyBehObj;
}

void RubberDuck::setQuackBehaviour(QuackBehaviour *quckBehvObj)
{
	quackObj = quckBehvObj;
}
