// Bai11_MultipleInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "A.h"
#include "B.h"
#include "C.h"

int main()
{
    C c;
    c.ShowA();
    c.ShowB();
    c.ShowC();
    return 0;
}

/*
* Đơn kế thừa: Một lớp chỉ có thể kế thừa từ một lớp cơ sở duy nhất. Nếu muốn sử dụng
đa kế thừa trong C++, cần sử dụng khái niệm interface. Chẳng hạn ngôn ngữ C#, Java.
* Đa kế thừa: Một lớp có thể kế thừa từ nhiều lớp cơ sở. C++ hỗ trợ đa kế thừa class A: phạm vi truy cập B, phạm vi truy cập C
*/