#pragma once
#include <iostream>
#include "GeometricalFigure.h"
using namespace std;
class Rectangles : public GeometricalFigure
{
private:
	int x1;
	int y1;
	int x2;
	int y2;
public:
	void Set_x1();
	void Set_y1();
	void Set_x2();
	void Set_y2();
	bool CheckAccessory();
};