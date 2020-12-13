#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(float real, float img)
{
	this->real = real;
	this->img = img;
}

bool Complex::IsMe(const Complex& c)
{
	if (&c == this)
		return true;
	return false;
}

void Complex::ItsMe(const Complex& c)
{
	if (this->IsMe(c))
		cout << "Same" << endl;
	else
		cout << "Not same" << endl;
}
