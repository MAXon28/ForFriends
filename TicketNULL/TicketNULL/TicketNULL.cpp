#include <iostream>
#include <Windows.h>
#include "Vector.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector numbers;
	cout << "Сколько хотите чисел доабвить: ";
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "Введите число: ";
		int number;
		cin >> number;
		numbers.PushBack(number);
	}
	numbers.Clear();
	cout << "Сколько хотите чисел доабвить: ";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "Введите число: ";
		int number;
		cin >> number;
		numbers.PushBack(number);
	}
	cout << "Введите число, которые хотите вставить в массив: ";
	int number;
	cin >> number;
	cout << "Введите позицию, на которую хотите вставить это число: ";
	int iterator;
	cin >> iterator;
	auto check = numbers.OutOfArray(iterator);
	if (check == true)
	{
		numbers.InsertElement(number, iterator);
	}
	else
	{
		cout << "Выход за пределы массива!" << endl;;
	}
	cout << "Введите номер элемента, который хотите удалить: ";
	cin >> iterator;
	check = numbers.OutOfArray(iterator);
	if (check == true)
	{
		numbers.DeleteElement(iterator);
	}
	else
	{
		cout << "Выход за пределы массива!" << endl;
	}
	cout << "Вывод элементов вектора: " << endl;
	numbers.Print();
}