// Bai3_ConstructorAndDisposing.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chúng ta có thể khởi tạo giá trị cho một đối tượng bằng phương thức setter.
// Một cách đơn giản hơn, chúng ta có thể sử dụng hàm khởi tạo/ phương thức khởi tạo
// Hàm hủy để thu hòi bộ nhớ, hủy bỏ dữ liệu của các thành viên của nó, phía trước hàm hủy là dấu ~

#include <iostream>

using namespace std;

/// <summary>
/// Human class
/// </summary>
class Human
{
	string name;
	int age;

public:
	// Phương thức khởi tạo, không có kiểu dữ liệu trả về - tương ứng với kiểu void nhưng lại không dùng từ void vào hàm tạo
	Human(string, int);
	// Hàm hủy
	~Human();
	void SetName(string);
	void SetAge(int);
	string GetName(void);
	int GetAge(void);
};

/// <summary>
/// A constructor in C++ is a special method that is automatically called when an object of a class is created.
/// </summary>
/// <param name="name">Full name</param>
/// <param name="age">Age</param>
Human::Human(string name, int age)
{
	this->name = name;
	this->age = age;
}

Human::~Human()
{
	// Do something
	cout << "Deleted object" << endl;
}

void Human::SetName(string name)
{
	this->name = name;
}

void Human::SetAge(int age)
{
	this->age = age;
}

string Human::GetName(void)
{
	return this->name;
}

int Human::GetAge(void)
{
	return this->age;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		Human man("La Quoc Thang", 22);
		cout << "The man: " << man.GetName() << ", age: " << man.GetAge() << endl;
	}
	return 0;
}

/* Output result:
The man: La Quoc Thang, age: 22
Deleted object
The man: La Quoc Thang, age: 22
Deleted object
The man: La Quoc Thang, age: 22
Deleted object
The man: La Quoc Thang, age: 22
Deleted object
The man: La Quoc Thang, age: 22
Deleted object
*/