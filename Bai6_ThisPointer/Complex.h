#pragma once
class Complex
{
private:
	float real;
	float img;
public:
	Complex(float, float);
	bool IsMe(const Complex&);
	void ItsMe(const Complex&);
};

