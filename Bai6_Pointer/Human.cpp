#include <iostream>

using namespace std;

#include "Human.h"

Human::Human(string name, int age)
{
	this->name = name;
	this->age = age;
}

Human::~Human(void)
{
	cout << "Deleted this object\n";
}

string& Human::GetName(void)
{
	return this->name;
}

int& Human::GetAge(void)
{
	return this->age;
}

void Human::Display(void)
{
	cout << "Name: " << this->name << ", age: " << this->age << endl;
}
