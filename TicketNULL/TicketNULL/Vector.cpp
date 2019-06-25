#include "Vector.h"

Vector::Vector()
{
	Size = 0;
}

Vector::~Vector()
{
	delete[] Array;
}

void Vector::PushBack(int number)
{
	if (Size > 0)
	{
		int *array = new int [Size];
		for (int i = 0; i < Size; i++)
		{
			array[i] = Array[i];
		}
		delete[] Array;
		Size++;
		Array = new int[Size];
		for (int i = 0; i < Size - 1; i++)
		{
			Array[i] = array[i];
		}
		Array[Size - 1] = number;
		delete[] array;
	}
	else
	{
		Size++;
		Array = new int[Size];
		Array[0] = number;
	}
}

void Vector::Clear()
{
	delete[] Array;
	Size = 0;
}

void Vector::InsertElement(int number, int iterator)
{
	int* array = new int[Size + 1];
	for (int i = 0; i < Size + 1; i++)
	{
		if (i < iterator)
		{
			array[i] = Array[i];
		}
		else if (i == iterator)
		{
			array[i] = number;
		}
		else
		{
			array[i] = Array[i - 1];
		}
	}
	delete[] Array;
	Size++;
	Array = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		Array[i] = array[i];
	}
	delete[] array;
}

void Vector::DeleteElement(int iterator)
{
	int* array = new int[Size - 1];
	for (int i = 0; i < Size; i++)
	{
		if (i < iterator)
		{
			array[i] = Array[i];
		}
		else if (i > iterator)
		{
			array[i - 1] = Array[i];
		}
	}
	delete[] Array;
	Size--;
	if (Size != 0)
	{
		Array = new int[Size];
		for (int i = 0; i < Size; i++)
		{
			Array[i] = array[i];
		}
	}
	delete[] array;
}

void Vector::Print()
{
	for (int i = 0; i < Size; i++)
	{
		cout << Array[i] << endl;
	}
}

bool Vector::OutOfArray(int iterator)
{
	if (iterator >= Size)
	{
		return false;
	}
	else
	{
		return true;
	}
}