#ifndef BOX_H
#define BOX_H

#include <iostream>

class Box
{
private:
	double length;
	double breadth;
	double height;
public:
	Box();

	Box(double l, double b, double h);

	Box(const Box&);

	double GetBreadth();

	double GetHeight();

	double GetLength();

	~Box();

	void Display() const;

};

#endif