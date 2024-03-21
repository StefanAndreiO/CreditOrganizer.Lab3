#include "pch.h"
#include "stdafx.h"
#include "CreditCardAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    CreditCardAccount^ myAccount; // Declare a handle
    myAccount = gcnew CreditCardAccount(12345, 2500);  // Create a new CreditCardAccount object
    myAccount->SetCreditLimit(1000);
    myAccount->MakePurchase(1000); // Use the -> operator to invoke member functions
    myAccount->MakeRepayment(700);
    myAccount->PrintStatement();
    long num = myAccount->GetAccountNumber();
    Console::Write("Account number: ");
    Console::WriteLine(num);
    return 0;
}
