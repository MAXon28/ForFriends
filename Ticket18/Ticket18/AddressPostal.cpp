#include "AddressPostal.h"

AddressPostal::AddressPostal()
{
	addressPostal = 0;
}

void AddressPostal::Set_addressPostal()
{
	cin >> addressPostal;
}

long int AddressPostal::Get_adressPostal()
{
	return addressPostal;
}

void AddressPostal::toString()
{
	Address::toString();
	cout << " Почтовый адрес: " << addressPostal;
}