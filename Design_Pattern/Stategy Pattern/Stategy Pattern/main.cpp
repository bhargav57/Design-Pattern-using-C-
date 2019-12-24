#include "MallardDuck.h"
#include "ModelDuck.h"
#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "FlyWithWings.h"
#include "MuteQuack.h"
#include "Quack.h"
#include "Squeck.h"
#include <iostream>
using namespace std;

int main()
{
	/* all kind of the duck objects  */
	MallardDuck mallardDuckobj;
	ModelDuck modelDuckObj;
	RubberDuck rubberDuckObj;

	/* all the fly related objects   */
	FlyNoWay flynowayObj;
	FlyWithWings flywithwingsObj;

	/* all the sound related objects */
	MuteQuack muteQuackObj;
	Quack     quackObj;
	Squeck   squeakObj;

	/* different types if ducks along wiht their behaviour*/
	std::cout<<"Mallard Duck......\n";
	mallardDuckobj.setFlyBehaviour(&flywithwingsObj);
	mallardDuckobj.setQuackBehaviour(&quackObj);
	mallardDuckobj.action();

	std::cout<<"\n\nModel Duck......\n";
	modelDuckObj.setFlyBehaviour(&flywithwingsObj);
	modelDuckObj.setQuackBehaviour(&squeakObj);
	modelDuckObj.action();

	std::cout<<"\n\nRubber Duck......\n";
	rubberDuckObj.setFlyBehaviour(&flynowayObj);
	rubberDuckObj.setQuackBehaviour(&squeakObj);
	rubberDuckObj.action();

	return 0;
}