#include <iostream>
#include <string>

using namespace std;

#include "Cat.h"

Cat::Cat(string name, int weight, string colorf, string colore)
{
	this->name = name;
	this->weight = weight;
	this->colorf = colorf;
	this->colore = colore;
}

void Cat::CatchMouse(void)
{
	cout << "Cat can catch mouse" << endl;
}

void Cat::Climb(void)
{
	cout << "Cat can climb tree" << endl;
}
