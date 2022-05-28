#pragma once
#include "IRun.h"
class Animal{
	IRun* runStrategy;
public:
	Animal(IRun*);
	void run();
};

