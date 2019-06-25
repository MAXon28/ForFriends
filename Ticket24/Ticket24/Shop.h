#pragma once
#include <iostream>
#include <vector>
#include "People.h"
class Shop
{
private:
	vector <People> people;
	int CountWorry;
public:
	Shop();
	void ComeIn(int count);
	void ComeOut(int count);
	void Worry(int numberPerson);
	void Quiet(int numberPerson);
	int WorryCount();
};