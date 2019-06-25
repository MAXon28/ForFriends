#include "Human.h"

void Human::SetName()
{
	cin >> Name;
}

void Human::MovementOn(IMeansOfTransportration& Transport)
{
	cout << Name << " ";
	Transport.Movement();
}
