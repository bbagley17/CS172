/* I affirm that all code given below was written solely by me, Bryce Bagley,
and that any help I received adhered to the rules stated for this exam. */
#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

int Event::getTime()
{
	return Time;
}
string Event::getTitle()
{
	return Title;
}
void Event::setTime(int t)
{
	Time = t;
}
void Event::setTitle(string name)
{
	Title = name;
}