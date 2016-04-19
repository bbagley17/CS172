#include<iostream>
#include<string>
using namespace std;
#pragma once

#ifndef Date_H_
#define Date_H_
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int enteredYear, int enteredMonth, int enteredDay)
	{
		year = enteredYear;
		month = enteredMonth;
		day = enteredDay;
	}
};
#endif
