#pragma once
#include "QuackBehaviour.h"
#include <iostream>
using namespace std;

class MuteQuack: public QuackBehaviour
{
public:
	MuteQuack(void);
	~MuteQuack(void);
	virtual void quack();
};

