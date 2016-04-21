#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

#ifndef Account_H_
#define Account_H_
class Account
{
	//Variables for account ID, account balance, the interest rate, the name of the account owner, and the full history of transactions
private:
	int id;
	double balance;
	double annualInterestRate;
	string name;
	vector<Transaction> transactions;

public:
	//Default constructor
	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}

	//Constructor which takes the account owner's name, their ID number, and their initial balance
	Account(string enteredName, int enteredID, double enteredBalance)
	{
		name = enteredName;
		id = enteredID;
		balance = enteredBalance;
	}

	//Function which returns the user ID
	int getID()
	{
		return id;
	}
	//Function which changes the user ID for an  account
	void setID(int newID)
	{
		id = newID;
	}
	//Function which returns the current account balance
	int getBalance()
	{
		return balance;
	}
	//Function which modifies the balance (without filing a deposit or withdrawal)
	void setBalance(double newBalance)
	{
		balance = newBalance;
	}
	//Function which returns the account's annual interest rate
	double getAnnualInterestRate()
	{
		return annualInterestRate;
	}
	//Function which modifies the annual interest rates for all accounts
	void setAnnualInterestRate(double newAnnualInterestRate)
	{
		annualInterestRate = newAnnualInterestRate;
	}
	//Function which, quite pointlessly, calculates the monthly interest rate and outputs it
	double getMonthlyInterestRate()
	{
		return (annualInterestRate / 12);
	}
	//Function which withdraws a certain amount from the account, and creates a record of this withdrawal
	void withdraw(double amount)
	{
		//Modifying the balance
		balance = balance - amount;
		//Creating the record of the change in the transactions vector, stored as a transaction object
		char type = 'w';
		string description = "Withdrawal";
		transactions.push_back(Transaction(type, amount, balance, description));
	}
	//Same as the withdraw function, but deposits a certain amount
	void deposit(double amount)
	{
		balance = balance + amount;
		char type = 'd';
		string description = "Deposit";
		transactions.push_back(Transaction(type, amount, balance, description));
	}
	//Function which prints all information on the account
	void printHistory()
	{
		//Printing name, annual interest rate, and balance history
		cout << "This account is under " << name << "'s name." << endl;
		cout << "The annual interest rate is " << annualInterestRate << "." << endl;
		cout << "Present balance is " << balance << "." << endl;
		//Printing the account history
		cout << "A full history of this account's transactions is as follows:" << endl;
		for (int n = 0; n < transactions.size(); n++)
		{
			cout << transactions[n].getDescription() << " of amount:" << transactions[n].getAmount() << endl;
		}
	}

};
#endif