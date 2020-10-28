// Bai5_ConstReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#include "Box.h"

int main()
{
    Box box1;
    Box box2 = Box(box1);
    //cout << "Box 1: " << box1 << endl;
    //cout << "Box 2: " << box2;
    box1.Display();
    return 0;
}
