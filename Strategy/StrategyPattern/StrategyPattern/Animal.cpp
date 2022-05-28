#include "Animal.h"

Animal::Animal(IRun* runStrategy) {
	this->runStrategy = runStrategy;
}

void Animal::run() {
	this->runStrategy->run();
}
