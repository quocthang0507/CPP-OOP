// Bai2_ArrayOfObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Human
{
	string name;
	int age;
	string address;

public:
	void SetName(string);
	void SetAge(int);
	void SetAddress(string);
	string GetName(void);
	int GetAge(void);
	string GetAddress(void);
};

void Human::SetName(string name)
{
	this->name = name;
}

void Human::SetAge(int age)
{
	this->age = age;
}

void Human::SetAddress(string address)
{
	this->address = address;
}

string Human::GetName(void)
{
	return this->name;
}

int Human::GetAge(void)
{
	return this->age;
}

string Human::GetAddress(void)
{
	return this->address;
}

#define MAX 5

int main()
{
	Human man[MAX];
	for (int i = 0; i < MAX; i++)
	{
		string name, address;
		int age;
		cout << i + 1 << ". Name of student: ";
		getline(cin, name,'\n');
		cout << i + 1 << ". Age of student: ";
		cin >> age;
		cout << i + 1 << ". Address of student: ";
		cin.ignore();
		getline(cin, address,'\n');
		man[i].SetName(name);
		man[i].SetAge(age);
		man[i].SetAddress(address);
		cout << endl;
	}
	cout << "========== STUDENTS ==========\n";
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << " The man: " << man[i].GetName() << ", age: " << man[i].GetAge() << ", address: " << man[i].GetAddress() << endl;
	}
	return 0;
}
