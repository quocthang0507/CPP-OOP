#include "Box.h"
#include <iostream>

using namespace std;

Box::Box() :Box(1, 2, 3) {}

Box::Box(double l, double b, double h) 
{
	this->breadth = b;
	this->height = h;
	this->length = l;
}

Box::Box(const Box& b)
{
	this->breadth = b.breadth;
	this->height = b.height;
	this->length = b.length;
}

double Box::GetBreadth()
{
	return breadth;
}

double Box::GetHeight()
{
	return height;
}

double Box::GetLength()
{
	return length;
}

Box::~Box()
{
	cout << "Deleted object!" << endl;
}

void Box::Display() const
{
	cout << "Height: " << height << ", Breadth: " << breadth << ", Length: " << length << endl;
}
