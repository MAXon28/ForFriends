#pragma once
#include <iostream>
using namespace std;
class BankDeposit
{
private:
	long int AmountOfMoney;
	long int TimeOfDeposit;
public:
	void SetAmountOfMoney();
	void SetTimeOfDeposit();
	long int GetAmountOfIncome();
};