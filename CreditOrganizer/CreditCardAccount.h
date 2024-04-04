#include "pch.h"
#include "LoyaltyScheme.h"
#pragma once
ref class CreditCardAccount
{
public:
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	void RedeemLoyaltyPoints();


private:
	static double interestRate;
	initonly long accountNumber;	
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object
};