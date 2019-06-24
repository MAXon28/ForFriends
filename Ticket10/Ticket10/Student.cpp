#include "Student.h"

void Student::SetYearOfStudy()
{
	cin >> YearOfStudy;
}

Student& Student::operator++(int)
{
	YearOfStudy++;
	return *this;
}