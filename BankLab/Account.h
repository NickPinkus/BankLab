#pragma once
#include <vector>
#include "Customer.h"

class Account
{
private:
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;
	vector<string> _log;
public:
	Account(Customer customer, int accountNumber);
	~Account();

	void Deposit(int numberOfPennies);
	void Withdraw(int numberOfPennies);
	int getBalance();
	int getAccountNumber();
	string getCustomerName();

	string getLog();
};

