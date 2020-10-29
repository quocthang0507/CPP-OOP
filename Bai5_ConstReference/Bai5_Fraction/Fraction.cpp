#include "Fraction.h"
#include <iostream>

Fraction::Fraction()
{
	this->Numerator = 1;
	this->Denominator = 2;
}

Fraction::Fraction(int numerator, int denominator)
{
	this->Denominator = denominator;
	this->Numerator = numerator;
}

/// <summary>
/// Khai bao phuong thuc hang
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int Fraction::GetNumerator(void) const
{
	return this->Numerator;
}

/// <summary>
/// Khai bao phuong thuc hang
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int Fraction::GetDenominator(void) const
{
	return this->Denominator;
}

Fraction Fraction::Multiply(Fraction& f)
{
	return Fraction(Numerator * f.GetNumerator(), Denominator * f.GetDenominator());
	//return Fraction(Numerator * f.Numerator, Denominator * f.Denominator);
}

Fraction Fraction::Multiply(const Fraction& f)
{
	return Fraction(Numerator * f.GetNumerator(), Denominator * f.GetDenominator());
	//return Fraction(Numerator * f.Numerator, Denominator * f.Denominator);
}

void Fraction::Display(void)
{
	std::cout << Numerator << "/" << Denominator << std::endl;
}

void Fraction::Display(void) const
{
	std::cout << Numerator << "/" << Denominator << std::endl;
}
