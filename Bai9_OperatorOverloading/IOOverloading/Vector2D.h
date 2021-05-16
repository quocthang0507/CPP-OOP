#pragma once

class Vector2D
{
	int x, y;
public:
	Vector2D(void)
	{
		x = 0;
		y = 0;
	}

	Vector2D(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	ostream& operator <<(ostream& os) {
		os << "(" << x << "; " << y << ")";
		return os;
	}
};
