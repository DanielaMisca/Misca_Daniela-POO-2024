#include "pch.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Console::WriteLine("Testing the CurrentAccount");
	CurrentAccount current("Jane", 100);
	current.Credit(500);

	//Should be accepted
	if (current.Debit(550) == true)
	{
		Console::WriteLine("Debit(550) ok");
	}
	else
	{
		Console::WriteLine("Debit(550) failed");
	}

	//Should be declined
	if (current.Debit(100) == true)
	{
		Console::WriteLine("Debit(100) ok");
	}
	else
	{
		Console::WriteLine("Debit(100) failed");
	}
	Console::WriteLine(current.ToString());

	Console::WriteLine("\n Testing the SavingsAccount");
	SavingsAccount savings("Fred");
	savings.Credit(500);

	//should be accepted

	if (savings.Debit(50) == true)
	{
		Console::WriteLine("Debit(50) ok");
	}
	else
	{
		Console::WriteLine("Debit(50) failed");
	}

	//should be declined

	if (savings.Debit(46) == true)
	{
		Console::WriteLine("Debit(46) ok");
	}
	else
	{
		Console::WriteLine("Debit(46) failed");
	}

	Console::WriteLine(savings.ToString());
	return 0;


}

