#include "ModelDuck.h"


ModelDuck::ModelDuck(void)
{	
}


ModelDuck::~ModelDuck(void)
{
}

void ModelDuck::action()
{
	flyObj->fly();
	quackObj->quack();
}

void ModelDuck::setFlyBehaviour(FlyBehaviour *flyBehObj)
{
	flyObj = flyBehObj;
}

void ModelDuck::setQuackBehaviour(QuackBehaviour *quckBehvObj)
{
	quackObj = quckBehvObj;
}