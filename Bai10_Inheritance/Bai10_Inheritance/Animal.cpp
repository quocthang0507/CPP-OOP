#include <iostream>
#include <string>

using namespace std;

#include "Animal.h"

Animal::Animal(void)
{
	this->name = "";
	this->weight = 0;
}

Animal::Animal(string name, int weight)
{
	this->name = name;
	this->weight = weight;
}

void Animal::Move(void)
{
	cout << "Animal can move" << endl;
}

void Animal::Eat(void)
{
	cout << "Animal can eat" << endl;
}
