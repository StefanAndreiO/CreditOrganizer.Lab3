#include "pch.h"
#include "stdafx.h"
#include "CreditCardAccount.h"
using namespace System;

void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		return true;
	}
}
{
	currentBalance -= amount;
}
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}
{
	return accountNumber;
}

CreditCardAccount::CreditCardAccount(long number, double limit)
{
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
}