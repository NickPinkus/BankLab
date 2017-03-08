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
		output += to_string(account.getAccountNumber()) + ") " + account.getCustomerName() + " - " + to_string(account.getBalance()) + "\n";
	}
	return output;
}

string Bank::ListAccounts()
{
	string output = "Accounts for " + _name + "\n";
	for (auto account : _accounts)
	{
		output += to_string(account.getAccountNumber()) + ") " + account.getCustomerName() + ": " + to_string(account.getBalance()) + "\n";
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account &account : _accounts)
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
	for (Account &account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Withdraw(amount);
			return;
		}
	}
	return;
}

string Bank::GetTransactionLog(int accountNumber)
{
	string output = "Transaction Log for account number " + to_string(accountNumber) + ":\n\n";
	for (Account account : _accounts)
	{

		if (account.getAccountNumber() == accountNumber)
		{
			output += account.getLog();
			return output;
		}
	}
	return output;
}
