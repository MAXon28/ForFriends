#include "Rectangle.h"

void Rectangles::Set_x1()
{
	cin >> x1;
}

void Rectangles::Set_y1()
{
	cin >> y1;
}

void Rectangles::Set_x2()
{
	cin >> x2;
}

void Rectangles::Set_y2()
{
	cin >> y2;
}

bool Rectangles::CheckAccessory()
{
	if (X >= x1 && X <= x2 && Y >= y2 && Y <= y1)
	{
		return true;
	}
	else
	{
		return false;
	}
}