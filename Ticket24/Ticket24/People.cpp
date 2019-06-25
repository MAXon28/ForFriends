#include "People.h"
People::People()
{
	Condition = "Спокоен";
}

void People::CauseConcern()
{
	Condition = "Беспокоится";
}

void People::CallCalm()
{
	Condition = "Спокоен";
}

string People::GetCondition()
{
	return Condition;
}