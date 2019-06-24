#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
int main()
{
	Person person;
	cout << "Введите имя: ";
	person.SetName();
	cout << "Введите возраст: ";
	person.SetAge();
	cout << "Введите вес: ";
	person.SetWeight();
	Student student;
	cout << "Имя студента: ";
	student.SetName();
	cout << "Возраст студента: ";
	student.SetAge();
	cout << "Вес студента: ";
	student.SetWeight();
	cout << "Год обучения: ";
	student.SetYearOfStudy();
	student++;
}