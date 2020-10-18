// Bai3_ConstructorAndDisposing_New.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	/// <summary>
	/// A constructor in C++ is a special method that is automatically called when an object of a class is created.
	/// </summary>
	/// <param name="name">Full name</param>
	/// <param name="age">Age</param>
	Human(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	~Human()
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