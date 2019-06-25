#include <iostream>
#include "Shop.h"
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Shop queue;
	cout << "Сколько покупателей пришло на кассу: ";
	int count;
	cin >> count;
	queue.ComeIn(count);
	cout << "Какой по счету в очереди покупатель начал беспокоиться: ";
	int number;
	cin >> number;
	queue.Worry(number);
	cout << "Какой по счету в очереди покупатель успокоился: ";
	cin >> number;
	queue.Quiet(number);
	cout << "Сколько людей ушли из очереди: ";
	cin >> count;
	queue.ComeOut(count);
	cout << "Количество посетителей, которые беспокоятся, достигает " << queue.WorryCount();
}