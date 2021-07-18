// Bai12_Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	Polygon* pol1 = &rect;
	Polygon* pol2 = &tri;
	pol1->SetValue(4, 5);
	pol2->SetValue(4, 5);
	cout << "Dien tich hinh chu nhat la: " << rect.GetArea() << endl;
	cout << "Dien tich hinh tam giac la: " << tri.GetArea() << endl;
	return 0;
}

/*
Trong hàm main, chúng ta tạo ra hai con trỏ đối tượng của lớp Polygon là pol1 và pol2.
Chúng ta truy cập tham chiếu cho rect và tri đến hai con trỏ này.
Tuy nhiên, pol1 và pol2 không thể sử dụng phương thức GetArea() được vì đây không phải
là phương thức thành viên của lớp Polygon.

Tính đa hình thể hiện ở chỗ mỗi đối tượng có nhiều hình thái khác nhau, có các phương 
thức thực thi giống nhau nhưng cũng có các phương thức hoạt động riêng.
*/