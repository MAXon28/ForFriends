#pragma once
#include <string>
#include <iostream>
using namespace std;
class Address
{
private:
	string Name;
	string Surname;
public:
	Address();
	void SetName();
	void SetSurname();
	string GetName();
	string GetSurname();
	virtual void toString();
};