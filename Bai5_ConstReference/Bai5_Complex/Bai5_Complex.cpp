// Bai5_Complex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "Complex.h"

int main()
{
    Complex c1;
    c1.Display(); // 0 + 0i
    Complex c2 = Complex(1, 2);
    c2.Display(); // 2 + 1i
    c1.GetImaginary() = 3;
    c1.GetReal() = 4;
    c1.Display(); // 4 + 3i
    return 0;
}
