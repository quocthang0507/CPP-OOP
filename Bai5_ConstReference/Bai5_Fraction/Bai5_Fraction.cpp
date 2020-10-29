// Bai5_Fraction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "Fraction.h"

int main()
{
    Fraction f1;
    f1.Display();
    Fraction const f2 = Fraction();
    // Chi phuong thuc hang moi goi duoc trong f2
    f2.Display();
    Fraction f3 = f1.Multiply(f2);
    f3.Display();
    return 0;
}
