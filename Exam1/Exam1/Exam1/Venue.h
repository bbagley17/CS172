/* I affirm that all code given below was written solely by me, Bryce Bagley, 
and that any help I received adhered to the rules stated for this exam. */
#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

#ifndef Venue_H_
#define Venue_H_
class Venue
{
	//Creating an array for the events contained by the venue, and a counter to keep track of where to put new events.
private:
	Event scheduledEvents[12];
	int numEvents = 0;

public:
	bool validTime(int time);
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);

};
#endif 

