#pragma once
#include <string>
#include <vector>
#include "Account.h"
using namespace std;

class Bank
{
private:
	string _name;
	vector<Account> _accounts;
public:
	Bank(string name);
	~Bank();

	string getName();
	void CreateAccount(Account newAccount);
	string showAccounts();
	string ListAccounts();
	void Deposit(int accountNumber, int amount);
	void Withdraw(int accountNumber, int amount);
	string GetTransactionLog(int accountNumber);
};

