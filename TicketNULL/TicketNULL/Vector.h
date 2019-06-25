#pragma once
#include <iostream>
using namespace std;
class Vector
{
private:
	int Size;
	int *Array;
public:
	Vector();
	~Vector();
	void PushBack(int number);
	void Clear();
	void InsertElement(int number, int iterator);
	void DeleteElement(int iterator);
	void Print();
	bool OutOfArray(int iterator);
};