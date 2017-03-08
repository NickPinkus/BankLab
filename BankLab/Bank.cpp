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
