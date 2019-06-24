#include <iostream>
#include <Windows.h>
#include "Rectangle.h"
using namespace std;
int main()
{
	// Для кодировки
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rectangles rectangle;
	cout << "Введите x1: ";
	rectangle.Set_x1();
	cout << "Введите y1: ";
	rectangle.Set_y1();
	cout << "Введите x2: ";
	rectangle.Set_x2();
	cout << "Введите y2: ";
	rectangle.Set_y2();
	cout << "Введите координаты точки:" << endl << "Введите X: ";
	rectangle.SetX();
	cout << "Введите Y: ";
	rectangle.SetY();
	if (rectangle.CheckAccessory() == true)
	{
		cout << "Точка принадлежит данному прямоугольнику!";
	}
	else
	{
		cout << "Точка не принадлежит данному прямоугольнику!";
	}
}