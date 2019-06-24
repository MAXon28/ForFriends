#pragma once
#include <iostream>
#include "Person.h"
class Student : public Person
{
private:
	int YearOfStudy;
public:
	void SetYearOfStudy();
	Student& operator++(int);
};