#pragma once
#include "Bank.h"
#include <iostream>
using namespace std;

Bank bank = Bank("Awesome Bank");

void DisplayMenu();
void AddAccountMenu();
void TransactMenu();
void DisplayAccountsMenu();

int main()
{
	DisplayMenu();

	system("pause");

	return 0;
}

void DisplayMenu()
{
	int choice = 0;

	do
	{
		system("cls");
		cout << "Welcome to " << bank.getName() << endl;
		cout << "1) Add Account" << endl;
		cout << "2) Transact" << endl;
		cout << "3) Display accounts" << endl;
		cout << "What would you like to do?" << endl;


		cin >> choice;

		switch (choice)
		{
		case 1: AddAccountMenu(); break;
		case 2: TransactMenu(); break;
		case 3: DisplayAccountsMenu(); break;
		default: break;
		}
	} while (choice != 10);
}

void AddAccountMenu()
{
	system("cls:");
	cout << "Customer firstname: ";
	string firstName;
	cin >> firstName;
	
	cout << "Customer lastname: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account newAccount = Account(customer, accountNumber);
	bank.CreateAccount(newAccount);
}

void TransactMenu()
{
	//Get the account
	system("cls");
	cout << "Which account?" << endl;
	cout << bank.ListAccounts() << endl;

	int chosenAccount;
	cin >> chosenAccount;

	//Get the transaction type
	system("cls");
	cout << "1) Deposit" << endl;
	cout << "2) Withdraw" << endl;

	int transactionType;
	cin >> transactionType;

	//Get the amount
	cout << "How many pennies?" << endl;
	int pennies;
	cin >> pennies;

	switch (transactionType)
	{
	case 1: bank.Deposit(chosenAccount, pennies); break;
	case 2: bank.Deposit(chosenAccount, pennies); break;
	default: break;
	}
}

void DisplayAccountsMenu()
{
	system("cls");
	cout << bank.showAccounts();
	system("pause");
}
