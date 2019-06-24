#include "AddressEmail.h"

AddressEmail::AddressEmail()
{
	Email = "Неизвестно";
}

void AddressEmail::SetEmail()
{
	cin >> Email;
}

string AddressEmail::GetEmail()
{
	return Email;
}

void AddressEmail::toString()
{
	Address::toString();
	cout << " Электронная почта: " << Email;
}