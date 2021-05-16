#pragma once
class Complex
{
	float real;
	float img;

public:
	Complex(float, float);
	Complex operator +(const Complex&);
	Complex operator ++(void);
	Complex operator -(const Complex&);
	Complex operator --(void);
	void toString(void);
};

