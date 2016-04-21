#include<iostream>
#include<string>
using namespace std;
#pragma once

#ifndef Date_H_
#define Date_H_
class Date
{
	//Naturally, any date is composed of the day, month, and year. Thus, int variables for these. 
private:
	int year;
	int month;
	int day;
public:
	//Constructor which takes int values for year, month, and day, then creates a Date object with these values
	Date(int enteredYear, int enteredMonth, int enteredDay)
	{
		year = enteredYear;
		month = enteredMonth;
		day = enteredDay;
	}
	//Default constructor, because Visual Studio became angry if one wasn't present
	Date()
	{
		year = 2001;
		month = 13;
		day = 32;
	}
};
#endif
