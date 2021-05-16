#include "Complex.h"

#include <iostream>
using namespace std;

Complex::Complex(float real, float img)
{
	this->real = real;
	this->img = img;
}

Complex Complex::operator+(const Complex& b)
{
	Complex c(0, 0);
	c.real = real + b.real;
	c.img = img + b.img;
	return c;
}

Complex Complex::operator++(void)
{
	Complex c(0, 0);
	c.real += ++real;
	c.img += ++img;
	return c;
}

Complex Complex::operator-(const Complex& b)
{
	return Complex(real - b.real, img - b.img);
}

Complex Complex::operator--(void)
{
	return Complex(--real, --img);
}

void Complex::toString(void)
{
	cout << real << " + " << img << "*i" << endl;
}
