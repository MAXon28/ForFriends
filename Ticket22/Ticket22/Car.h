#pragma once
#include <iostream>
#include "IMeansOfTransportration.h"
using namespace std;
class Car : public IMeansOfTransportration
{
public:
	void Movement() override;
};

