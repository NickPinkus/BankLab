#pragma once
#include <string>
using namespace std;

class Customer
{
private:
	string _firstName;
	string _lastName;
public:
	Customer(string firstName, string lastName);
	~Customer();

	string getFullName();
};

