#pragma once
#include "Animal.h"
/* Lớp Cat kế thừa từ lớp Animal. 
Mọi dữ liệu thành viên (thuộc tính) và hàm thành viên (phương thức) 
của lớp Animal được kế thừa nếu có phạm vi truy cập là protected hoặc public.
*/
class Cat : public Animal
{
private:
	string colorf;
	string colore;
public:
	Cat(string, int, string, string);
	void CatchMouse(void);
	void Climb(void);
};

