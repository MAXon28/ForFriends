#include "Visitor.h"
#include <iostream>

void Visitor::Set_Name()
{
	cin >> Name;
}

void Visitor::Set_Age()
{
	cin >> Age;
}

string Visitor::Get_Name()
{
	return Name;
}

int Visitor::Get_Age()
{
	return Age;
}