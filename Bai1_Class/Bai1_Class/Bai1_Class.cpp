// Bai1_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lớp là sự biểu diễn của đối tượng trong lập trình và ngược lại, đối tượng là sự thể hiện của lớp.
// Một đối tượng gồm có: thuộc tính và phương thức. Chúng ta có thể xem một lớp là kiểu dữ liệu còn đối tượng là biến.

/*
	class tên_lớp {
		các_thuộc_tính;
		các_phương_thức;
	} [tên_đối_tượng];
	Nhìn giống khai báo struct nhỉ!
*/

#include <iostream>

using namespace std;

class Human
{
	// Mặc định là private
	string Name;
	int Age;
public:
	// Khai báo nguyên mẫu hàm
	// Các hàm nhập giá trị setter và nhận giá trị getter
	void SetName(string);
	void SetAge(int);
	string GetName(void);
	int GetAge(void);
};

// Để xác định phương thức thuộc một lớp nào đó, ta sử dụng toán tử phạm vi :: theo sau tên lớp
void Human::SetName(string name)
{
	this->Name = name;
}

void Human::SetAge(int age)
{
	this->Age = age;
}

string Human::GetName(void)
{
	return this->Name;
}

int Human::GetAge(void) 
{
	return this->Age;
}

int main()
{
	Human man;
	man.SetName("La Quoc Thang");
	man.SetAge(22);
	cout << "The man: " << man.GetName() << ", age: " << man.GetAge();
	return 0; // run ok
}

/*
	* Phạm vi truy cập của phương thức là: private, protected, public
	** private: các thành viên của cùng một lớp hoặc từ hàm bạn của nó có thể truy cậP.
	** protected: các thành viên của cùng một lớp hoặc từ hàm bạn của nó hoặc từ một lớp dẫn xuất của nó hoặc 
	bạn của một lớp dẫn xuất của nó đều có thể truy cập.
	** public: các thành viên có thể truy cập lẫn nhau từ mọi lớp.
*/