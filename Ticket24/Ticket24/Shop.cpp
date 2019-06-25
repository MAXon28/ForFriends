#include "Shop.h"

Shop::Shop()
{
	CountWorry = 0;
}

void Shop::ComeIn(int count)
{
	while (count != 0)
	{
		People Person;
		people.push_back(Person);
		count--;
	}
}

void Shop::ComeOut(int count)
{
	while (count != 0)
	{
		auto i = people.size();
		if (people[i - 1].GetCondition() == "Беспокоится")
		{
			CountWorry--;
		}
		people.pop_back();
		count--;
	}
}

void Shop::Worry(int numberPerson)
{
	if (people[numberPerson - 1].GetCondition() == "Спокоен")
	{
		people[numberPerson - 1].CauseConcern();
		CountWorry++;
	}
}

void Shop::Quiet(int numberPerson)
{
	if (people[numberPerson - 1].GetCondition() == "Беспокоится")
	{
		people[numberPerson - 1].CallCalm();
		CountWorry--;
	}
}

int Shop::WorryCount()
{
	return CountWorry;
}