#pragma once
#include <string>
using namespace std;
class Visitor
{
private:
	string Name;
	int Age;
public:
	void Set_Name();
	void Set_Age();
	string Get_Name();
	int Get_Age();
};