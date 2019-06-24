#include "Address.h"

Address::Address()
{
	Name = "Неизвестно";
	Surname = "Неизвестно";
}

void Address::SetName()
{
	cin >> Name;
}

void Address::SetSurname()
{
	cin >> Surname;
}

string Address::GetName()
{
	return Name;
}

string Address::GetSurname()
{
	return Surname;
}

void Address::toString()
{
	cout << "Имя: " << Name << " Фамилия: " << Surname;
}