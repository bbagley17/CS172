#pragma once
#include<iostream>
#include<string>
#include "Date.h"
using namespace std;


#ifndef Transaction_H_
#define Transaction_H_
class Transaction
{
	
private:
	//Date of transaction
	Date date;
	//Type of transaction (withdrawal or deposit)
	char type;
	//Amount of withdrawal or deposit
	double amount;
	//Balance after transaction
	double balance;
	//Description of transaction
	string description;
public:
	//Constructor which takes in a type, amount, balance post-transaction, and description of transaction
	Transaction(char enteredType, double enteredAmount, double enteredBalance, string enteredDescription)
	{
		type = enteredType;
		amount = enteredAmount;
		balance = enteredBalance;
		description = enteredDescription;
	}
	//Function which returns the transaction's description so that account histories can be printed
	string getDescription()
	{
		return description;
	}
	//Same as above, but for the amount of the withdrawal/deposit
	double getAmount()
	{
		return amount;
	}
};
#endif;