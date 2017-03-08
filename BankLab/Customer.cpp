#include "Customer.h"


Customer::Customer(string firstName, string lastName) : _firstName(firstName), _lastName(lastName)
{
}

Customer::~Customer()
{
}

string Customer::getFullName()
{
	return _lastName + ", " + _firstName;
}
