#include "ModelDuck.h"


ModelDuck::ModelDuck(void)
{
	flyObj   = new FlyNoWay();
	quackObj = new MuteQuack();
}


ModelDuck::~ModelDuck(void)
{
}

void ModelDuck::action()
{
	flyObj->fly();
	quackObj->quack();
}