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
};

