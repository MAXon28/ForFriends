#pragma once
#include "IMeansOfTransportration.h"
#include <iostream>
using namespace std;
class Plane : public IMeansOfTransportration
{
public:
	void Movement() override;
};

