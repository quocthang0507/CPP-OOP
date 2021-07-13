#pragma once
/*
* Phạm vi			public			protected		private
* Trong lớp đó		được phép		được phép		được phép
* Lớp kế thừa		được phép		được phép		không được phép
* Còn lại			được phép		không được phép	không được phép
*/
class Animal
{
protected:
	string name;
	int weight;
public:
	/* Hàm tạo không có đối số bắt buộc phải có, mặc dù là lớp con không thừa kế 
	các hàm tạo này ở lớp cha
	*/
	Animal(void);
	Animal(string, int);
	void Move(void);
	void Eat(void);
};

