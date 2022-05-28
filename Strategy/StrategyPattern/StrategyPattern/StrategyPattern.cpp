#include <iostream>
#include "Human.h"
#include "Animal.h"
#include "Dog.h"
#include "FourLegsRun.h"
#include "TwoLegsRun.h"
int main(){
	Animal* human = new Human(new TwoLegsRun());
	Animal* dog = new Dog(new FourLegsRun());
	human->run();
	dog->run();
}
