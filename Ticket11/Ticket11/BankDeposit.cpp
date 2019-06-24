#include "BankDeposit.h"

void BankDeposit::SetAmountOfMoney()
{
	cin >> AmountOfMoney;
}

void BankDeposit::SetTimeOfDeposit()
{
	cin >> TimeOfDeposit;
}

long int BankDeposit::GetAmountOfIncome()
{
	if (AmountOfMoney >= 5000)
	{
		return (AmountOfMoney * TimeOfDeposit * 13) / (365 * 100);
	}
	else
	{
		return (AmountOfMoney * TimeOfDeposit * 10) / (365 * 100);
	}
}