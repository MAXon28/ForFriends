#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Car.h"
#include "Plane.h"
#include "MotorBoat.h"
int main()
{
	// Для кодировки
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Human human;
	cout << "Введите имя: ";
	human.SetName();

	Car BMW;
	human.MovementOn(BMW);
	Plane Boing;
	human.MovementOn(Boing);
	MotorBoat Boat;
	human.MovementOn(Boat);
}