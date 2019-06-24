#include <iostream>
#include <Windows.h>
#include "AddressResidence.h"
#include "AddressPostal.h"
#include "AddressEmail.h"
#include <string>
using namespace std;
int main()
{
	// Для кодировки
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	AddressResidence Residence;
	cout << "Введите имя: ";
	Residence.SetName();
	cout << "Введите фамилию: ";
	Residence.SetSurname();
	cout << "Введите страну: ";
	Residence.SetCountry();
	cout << "Введите город: ";
	Residence.SetCity();
	cout << "Введите улицу: ";
	Residence.SetStreet();
	cout << "Введите дом: ";
	Residence.SetNumberOfHouse();
	Residence.toString();

	AddressPostal Postal;
	cout << "Введите имя: ";
	Postal.SetName();
	cout << "Введите фамилию: ";
	Postal.SetSurname();
	cout << "Введите почтовый адрес: ";
	Postal.Set_addressPostal();
	cout << "Почтовый адрес: " << Postal.Get_adressPostal() << endl;
	Postal.toString();

	AddressEmail Email;
	cout << "Введите имя: ";
	Email.SetName();
	cout << "Введите фамилию: ";
	Email.SetSurname();
	cout << "Введите электронную почту: ";
	Email.SetEmail();
	cout << "Имя: " << Email.GetName() << " Фамилия: " << Email.GetSurname() << endl;
	Email.toString();
}