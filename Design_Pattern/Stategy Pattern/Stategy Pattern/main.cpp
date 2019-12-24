#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "FlyWithWings.h"
#include "MuteQuack.h"
#include "Quack.h"
#include "Squeck.h"

int main()
{
	/* all kind of the duck objects  */
	MallardDuck mallardDuckobj;
	ModelDuck modelDuckObj;

	/* all the fly related objects   */
	FlyNoWay flynowayObj;
	FlyWithWings flywithwingsObj;

	/* all the sound related objects */
	MuteQuack muteQuackObj;
	Quack     quackObj;
	Squeck   squeakObj;

	/* different types if ducks along wiht their behaviour*/
	mallardDuckobj.setFlyBehaviour(&flywithwingsObj);
	mallardDuckobj.setQuackBehaviour(&quackObj);
	mallardDuckobj.action();


	
	modelDuckObj.setFlyBehaviour(&flywithwingsObj);
	modelDuckObj.setQuackBehaviour(&squeakObj);
	modelDuckObj.action();
	return 0;
}