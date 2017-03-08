#include "Account.h"



Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}


Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	_log.push_back("Deposited " + to_string(numberOfPennies) + " to account number " + to_string(_accountNumber) + ".");
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	_log.push_back("Withdrew " + to_string(numberOfPennies) + " from account number " + to_string(_accountNumber) + ".");
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

string Account::getCustomerName()
{
	return _accountOwner.getFullName();
}

string Account::getLog()
{
	string output;
	for (auto log : _log)
	{
		output += log + "\n";
	}
	return output;
}
