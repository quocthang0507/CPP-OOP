// Bai6_Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "Human.h"

int main()
{
	Human man("Andy", 22);
	// Khai báo con trỏ đối tượng giống như khai báo con trỏ dữ liệu
	// *x trỏ bởi x
	// &x địa chỉ của x
	Human* man0 = &man;
	Human* man1 = new Human("Jack", 21);
	man0->Display();
	man1->Display();
	return 0;
}
