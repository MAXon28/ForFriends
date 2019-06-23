#include <iostream>
#include <Windows.h>
#include "Gym.h"
using namespace std;
int main()
{
	// Для кодировки
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numberVisitors;
	Gym gym;
	numberVisitors = gym.Work_gym_in_day();
	cout << "Число посетителей спортзала сегодня: " << numberVisitors << endl << "Возраст самого молодого посетителя: " << gym.Get_age_youngest_visitor() << endl
	<< "Возраст самого старшего посетителя: " << gym.Get_age_oldest_visitor() << endl << "Средний возраст посетителей: " << gym.Calculate_mean_age_visitors() << endl;
}