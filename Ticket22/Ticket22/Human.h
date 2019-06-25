#pragma once
#include <iostream>
#include <string>
#include "IMeansOfTransportration.h"
using namespace std;
class Human
{
private:
	string Name;
public:
	void SetName();
	void MovementOn(IMeansOfTransportration& Transport);
};

