// Bai4_OverloadingCout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/// <summary>
/// Box class
/// </summary>
class Box
{
private:
	double length;
	double breadth;
	double height;

public:
	void SetLength(double length)
	{
		this->length = length;
	}

	void SetBreadth(double breadth)
	{
		this->breadth = breadth;
	}

	void SetHeight(double height)
	{
		this->height = height;
	}

	double GetVolume(void)
	{
		return length * height * breadth;
	}

	Box()
	{
		this->length = 20;
		this->breadth = 5;
		this->height = 7;
	}

	Box(double l, double b, double h)
	{
		this->breadth = b;
		this->height = h;
		this->length = l;
	}

	Box operator + (const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;
		return box;
	}

	Box operator - (const Box& b)
	{
		Box box;
		box.length = this->length - b.length;
		box.breadth = this->breadth - b.breadth;
		box.height = this->height - b.height;
		return box;
	}

	/// <summary>
	/// https://stackoverflow.com/questions/16291623/operator-overloading-c-too-many-parameters-for-operation
	/// </summary>
	/// <param name="os"></param>
	/// <param name="box"></param>
	/// <returns></returns>
	friend ostream& operator << (ostream& os, const Box& box)
	{
		os << "height " << box.height << ", breadth " << box.breadth << ", length " << box.length;
		return os;
	}
};

int main()
{
	Box box1;

	Box box2;
	box2.SetLength(12.0);
	box2.SetBreadth(13.0);
	box2.SetHeight(10.0);

	Box box3 = box1 + box2;
	cout << "Box1 " << box1 << endl;
	cout << "Box1 with volume: " << box1.GetVolume() << endl;
	cout << "Box2 " << box2 << endl;
	cout << "Box2 with volume: " << box2.GetVolume() << endl;
	cout << "Box3 " << box3 << endl;
	cout << "Box3 = Box1 + Box2 with volume: " << box3.GetVolume();
	return 0;
}