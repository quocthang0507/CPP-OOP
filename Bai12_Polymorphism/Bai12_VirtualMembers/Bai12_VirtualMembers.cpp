// Bai12_VirtualMembers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	Rectangle rect;
	Triangle tri;
	Polygon pol;
	Polygon* pol1 = &rect;
	Polygon* pol2 = &tri;
	Polygon* pol3 = &pol;
	pol1->SetValue(4, 5);
	pol2->SetValue(4, 5);
	pol3->SetValue(4, 5);
	cout << "Dien tich hinh chu nhat la: " << rect.GetArea() << endl;
	cout << "Dien tich hinh tam giac la: " << tri.GetArea() << endl;
	cout << "Dien tich hinh da giac la: " << pol.GetArea() << endl;
	return 0;
}

/*
Trong C++, từ khóa virtual không mặc định cho các phương thức thành viên.
*/