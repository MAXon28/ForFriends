#include <iostream>
#include "BankDeposit.h"
int main()
{
	BankDeposit Deposit;
	cout << "Введите сумму вклада: ";
	Deposit.SetAmountOfMoney();
	cout << "Введите срок вклада: ";
	Deposit.SetTimeOfDeposit();
	cout << "Доход по окончании вклада составит: " << Deposit.GetAmountOfIncome() << " рублей";
}