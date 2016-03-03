/* I affirm that all code given below was written solely by me, Bryce Bagley,
and that any help I received adhered to the rules stated for this exam. */
#include <iostream>
#include <string>

using namespace std;

#ifndef Event_H_
#define Event_H_
class Event
{
private:
	int Time;
	string Title;

public:
	Event()
	{
		Time = -1;
		Title = "free";
	}

	Event(int time, string name)
	{
		Time = time;
		Title = name;
	}
	int getTime();
	string getTitle();
	void setTime(int t);
	void setTitle(string name);
};
#endif
