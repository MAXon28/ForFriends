#pragma once
#include "Visitor.h"
#include <vector>
class Gym
{
private:
	vector <Visitor> Visitors;
	int NumberVisitorsInDay;
	int YoungestAge;
	int OldestAge;
	double MeanAge;
public:
	Gym();
	int Work_gym_in_day(); // Работа спортзала за определенный день, возвращает количество посетителей за этот день
	int Get_age_youngest_visitor(); // Поиск самого молодого посетителя в этот день, возвращает его возраст
	int Get_age_oldest_visitor(); // Поиск самого старшего посетителя в этот день, возвращает его возраст
	double Calculate_mean_age_visitors(); // Подсчет среднего возраста посетителей за день, возвращает средний возраст
};