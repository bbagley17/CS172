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
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction(char enteredType, double enteredAmount, double enteredBalance, double enteredDescription)
	{
		type = enteredType;
		amount = enteredAmount;
		balance = enteredBalance;
		description = enteredDescription;
	}
};
#endif;