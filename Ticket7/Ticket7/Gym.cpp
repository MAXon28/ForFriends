#include "Gym.h"
#include <iostream>

Gym::Gym()
{
	NumberVisitorsInDay = 0;
	YoungestAge = 1000;
	OldestAge = -1;
	MeanAge = 0;
}

int Gym::Work_gym_in_day()
{
	string Answer;
	cout << "Есть сегодня посетители? ";
	cin >> Answer;
	Visitor visitor;
	if (Answer == "Да")
	{
		do
		{
			cout << "Имя посетителя: ";
			visitor.Set_Name();
			cout << "Возраст посетителя: ";
			visitor.Set_Age();
			Visitors.push_back(visitor);
			NumberVisitorsInDay++;
			cout << "Есть ещё посетители сегодня? ";
			cin >> Answer;
		} while (Answer != "Нет");
		return NumberVisitorsInDay;
	}
	else
	{
		return NumberVisitorsInDay;
	}
	return 0;
}

int Gym::Get_age_youngest_visitor()
{
	for (int i = 0; i < Visitors.size(); i++)
	{
		if (YoungestAge > Visitors[i].Get_Age())
		{
			YoungestAge = Visitors[i].Get_Age();
		}
	}
	return YoungestAge;
}

int Gym::Get_age_oldest_visitor()
{
	for (int i = 0; i < Visitors.size(); i++)
	{
		if (OldestAge < Visitors[i].Get_Age())
		{
			OldestAge = Visitors[i].Get_Age();
		}
	}
	return OldestAge;
}

double Gym::Calculate_mean_age_visitors()
{
	int sumAges = 0;
	for (int i = 0; i < Visitors.size(); i++)
	{
		sumAges += Visitors[i].Get_Age();
	}
	MeanAge = sumAges / NumberVisitorsInDay;
	return MeanAge;
}