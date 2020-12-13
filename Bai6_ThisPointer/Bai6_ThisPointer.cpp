// Bai6_ThisPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "Complex.h"

int main()
{
    Complex a(2, 3);
    Complex b(2, 2);
    Complex* c = &a;
    /*
    * cout << a.IsMe(*c) << endl;
    * cout << a.IsMe(b) << endl;
    */
    a.ItsMe(*c);
    a.ItsMe(b);
    return 0;
}
