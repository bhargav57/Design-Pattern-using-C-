#include "MallardDuck.h"


MallardDuck::MallardDuck(void)
{
	flyObj   = new FlyWithWings();
	quackObj = new Quack();
}


MallardDuck::~MallardDuck(void)
{
}

void MallardDuck::action()
{
	flyObj->fly();
	quackObj->quack();
}

