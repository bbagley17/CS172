#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef Account_H_
#define Account_H_
class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction>;

public:
	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}

	Account(string enteredName, int enteredID, double enteredBalance)
	{
		name = enteredName;
		id = enteredID;
		balance = enteredBalance;
	}

	int getID()
	{
		return id;
	}
	void setID(int newID)
	{
		id = newID;
	}

	int getBalance()
	{
		return balance;
	}
	void setBalance(double newBalance)
	{
		balance = newBalance;
	}

	double getAnnualInterestRate()
	{
		return annualInterestRate;
	}
	void setAnnualInterestRate(double newAnnualInterestRate)
	{
		annualInterestRate = newAnnualInterestRate;
	}

	double getMonthlyInterestRate()
	{
		return (annualInterestRate / 12);
	}
	void withdraw(double amount)
	{
		balance = balance - amount;
	}
	void deposit(double amount)
	{
		balance = balance + amount;
	}


};
#endif