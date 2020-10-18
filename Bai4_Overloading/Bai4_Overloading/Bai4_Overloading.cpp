// Bai4_Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/// <summary>
/// Human class
/// </summary>
class Box
{
	string name;
	int age;

public:
	Box()
	{
		this->name = "Nguyen Van A";
		this->age = 20;
	}

	/// <summary>
	/// A constructor in C++ is a special method that is automatically called when an object of a class is created.
	/// </summary>
	/// <param name="name">Full name</param>
	/// <param name="age">Age</param>
	Box(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	~Box()
	{
		// Do something
		cout << "Deleted object" << endl;
	}

	void SetName(string name)
	{
		this->name = name;
	}

	void SetAge(int age)
	{
		this->age = age;
	}

	string GetName(void)
	{
		return this->name;
	}

	int GetAge(void)
	{
		return this->age;
	}
};

int main()
{
	Box man("La Quoc Thang", 22);
	Box man1;
	cout << "The man: " << man.GetName() << ", age: " << man.GetAge() << endl;
	cout << "The man 1: " << man1.GetName() << ", age: " << man1.GetAge() << endl;
	return 0;
}