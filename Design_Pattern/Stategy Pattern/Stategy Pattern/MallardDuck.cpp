#include "MallardDuck.h"


MallardDuck::MallardDuck()
{
}

MallardDuck::~MallardDuck(void)
{
}

void MallardDuck::action()
{
	flyObj->fly();
	quackObj->quack();
}

void MallardDuck::setFlyBehaviour(FlyBehaviour *flyBehObj)
{
	flyObj = flyBehObj;
}
void MallardDuck::setQuackBehaviour(QuackBehaviour *quckBehvObj)
{
	quackObj = quckBehvObj;
}