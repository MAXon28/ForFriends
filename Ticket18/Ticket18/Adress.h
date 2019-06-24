#pragma once
#include <string>
#include <iostream>
using namespace std;
class Address
{
protected:
	static string Name;
	static string Surname;
public:
	static void SetName();
	static void SetSutname();
	virtual void toString();
};