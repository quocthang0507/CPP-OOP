#pragma once
class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle(int, int);
	friend int Area(Rectangle);
};

