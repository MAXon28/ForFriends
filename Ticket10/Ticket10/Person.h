#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string Name;
	int Age;
	string Gender;
	double Weight;
public:
	void SetName();
	void SetAge();
	void SetWeight();
};