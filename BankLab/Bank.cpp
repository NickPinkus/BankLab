#include "Bank.h"


Bank::Bank(string name) : _name(name)
{
}

Bank::~Bank()
{
}

string Bank::getName()
{
	return _name;
}

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

string Bank::showAccounts()
{
	string output = "Accounts for " + _name + "\n";
	for (auto account : _accounts)
	{
		output += to_string(account.getAccountNumber()) += "\n";
	}
	return output;
}

string Bank::ListAccounts()
{
	string output = "Accounts for " + _name + "\n";
	int index = 0;
	for (auto account : _accounts)
	{
		output += to_string(index) + ") "+ to_string(account.getAccountNumber()) + "\n";
		index++;
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Deposit(amount);
			return;
		}
	}
	return;
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (Account account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Withdraw(amount);
			return;
		}
	}
	return;
}
