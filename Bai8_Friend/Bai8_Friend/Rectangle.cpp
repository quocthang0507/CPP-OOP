#include "Rectangle.h"

Rectangle::Rectangle(int w, int h)
{
	this->width = w;
	this->height = h;
}

/// <summary>
/// Hàm rectangle là một hàm toàn cục, không phải là thành viên của lớp (vì không sử dụng toán tử phạm vi khi khai báo)
/// </summary>
/// <param name="r"></param>
/// <returns></returns>
int Area(Rectangle r)
{
	return r.width * r.height;
}
