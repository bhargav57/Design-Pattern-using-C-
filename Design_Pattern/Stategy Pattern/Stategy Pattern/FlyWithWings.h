#pragma once
#include <iostream>
#include "FlyBehaviour.h"
using namespace std;

class FlyWithWings:public FlyBehaviour
{
public:
	FlyWithWings(void);
	~FlyWithWings(void);
	virtual void fly();
};