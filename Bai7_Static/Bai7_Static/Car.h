#pragma once
class Car
{
public:
	string Name;
	int Serial;
public:
	static int Count;
	static void Show() {
		Car vehicle;
		vehicle.Name = "Ford";
		vehicle.Serial = 123;
		cout << "\nName: " << vehicle.Name;
		cout << "\nSerial: " << vehicle.Serial;
	}
	static void CallShowStatic() {
		Show();
	}
	void CallShowNonStatic() {
		Show();
	}
};

