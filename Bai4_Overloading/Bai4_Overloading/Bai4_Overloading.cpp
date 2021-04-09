// Bai4_Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chồng chất hàm/ quá tải hàm
// Trong C++ cho phép chồng chất hàm, trong đó có hàm tạo. Mỗi hàm chồng chất có cùng tên nhưng khác kiểu dữ liệu hoặc số lượng tham số,
// khi sử dụng hàm nào thì sẽ gọi tương ứng hàm đó.

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
	// Human() hoặc Human(void) đều được
	Human(void)
	{
		this->name = "Nguyen Van A";
		this->age = 20;
	}

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

	// Sao chép hàm tạo qua tham chiếu hằng
	// Nếu không định nghĩa thì C++ sẽ tự động làm giúp, vì vậy hàm tạo sao chép là mặc định với đại đa số trình biên dịch ANSI C++ hiện đại
	// Từ khóa const ngăn sự thay đổi dữ liệu của đối tượng tham chiếu ảnh hưởng đến đối tượng mới, từ đó tránh được vi phạm tính đóng gói
	Human(const Human& man){
		this->name = man.name;
		this->age = man.age;
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
	Human man("La Quoc Thang", 22);
	// Sao chép trực tiếp
	Human man1 = man;
	cout << "The man: " << man.GetName() << ", age: " << man.GetAge() << endl;
	cout << "The man 1: " << man1.GetName() << ", age: " << man1.GetAge() << endl;
	return 0;
}

/*
	Lưu ý cách gọi:
		Human man(); // Sai
		Human man; // Đúng
		Lúc này, nếu trong lớp đó không có hàm tạo không có tham số mà chỉ có hàm tạo có tham số thì cách gọi này là không được phép
		Human man = Human(); // Đúng

	Có ba cách truyền tham số cho đối tượng trong một phương thức:
		* Truyền theo tham trị: Dữ liệu của đối tượng được truyền có thể thay đổi nhưng không được lưu lại
		* Truyền theo tham chiếu: Dữ liệu của đối tượng được truyền có thể thay đổi và được lưu lại, thông qua một cách gián tiếp nên phức tạp (con trỏ)
		* Tham chiếu hằng: không cho phép thay đổi dữ liệu của đối tượng được tham chiếu, ngay cả bên trong phương thức đó
*/

/*
	Tính đóng gói là tính chất không cho phép người dùng hay đối tượng khác thay đổi dữ liệu thành viên của đối tượng nội tại. Chỉ có các hàm thành viên của đối tượng đó mới có quyền thay đổi trạng thái nội tại của nó mà thôi.
	Các đối tượng khác muốn thay đổi thuộc tính thành viên của đối tượng nội tại thì cần phải truyền thông điệp cho đối tượng, và việc quyết định hay không vẫn do đỐi tượng nội tại quyết định.
*/