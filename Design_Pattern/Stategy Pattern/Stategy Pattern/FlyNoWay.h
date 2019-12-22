#include "FlyBehaviour.h"
#include<iostream>
#pragma once
using namespace std;

class FlyNoWay: public FlyBehaviour
{
public:
	FlyNoWay(void);
	~FlyNoWay(void);
	virtual void fly();
};

