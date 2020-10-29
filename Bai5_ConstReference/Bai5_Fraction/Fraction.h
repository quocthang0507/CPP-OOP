#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
	/// <summary>
	/// Tu so
	/// </summary>
	int Numerator;
	/// <summary>
	/// Mau so
	/// </summary>
	int Denominator;

public:
	Fraction();
	Fraction(int numerator, int denominator);
	int GetNumerator(void) const;
	int GetDenominator(void) const;
	Fraction Multiply(Fraction&);
	Fraction Multiply(const Fraction&);
	void Display(void);
	void Display(void) const;
};

#endif // !FRACTION_H