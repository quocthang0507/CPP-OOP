#include <iostream>
#include "Complex.h"

Complex::Complex()
{
	Real = 0;
	Imaginary = 0;
}

Complex::Complex(float img, float r)
{
	this->Imaginary = img;
	this->Real = r;
}

/// <summary>
/// Khai bao phuong thuc tham chieu, vua la getter, vua la setter
/// </summary>
/// <returns></returns>
float& Complex::GetImaginary()
{
	return Imaginary;
}

/// <summary>
/// Khai bao phuong thuc tham chieu, vua la getter, vua la setter
/// </summary>
/// <returns></returns>
float& Complex::GetReal()
{
	return Real;
}

void Complex::Display()
{
	std::cout << Real << " + " << Imaginary << "i" << std::endl;
}
