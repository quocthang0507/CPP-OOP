#pragma once
class Complex
{
private:
	float Imaginary;
	float Real;

public:
	Complex();
	Complex(float img, float r);
	float& GetImaginary();
	float& GetReal();
	void Display();
};

