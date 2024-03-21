#pragma once
ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
};
ref class CreditCardAccount
{
public:
	CreditCardAccount(long number, double limit);
	long accountNumber;
	double currentBalance;
	double creditLimit;
	// ... Other members, as before

};



