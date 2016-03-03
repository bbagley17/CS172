
#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

//Checks to see if the time is already occupied.
bool Venue::validTime(int time)
{
	//Initially assume the time slot to be available
	bool available = true;
	//Check each existing event to ensure none fill the desired time slot
	for (int n = 0; n < numEvents; n++)
	{
		//If the time slot is taken, set "available" to false.
		if (time == scheduledEvents[12].getTime())
			available = false;
	}
	return available;
}
//Adds an event at a desired time with a given name.
void Venue::addEvent(int time, string name)
{
	//First, sets the time slot as available.
	bool available = true;
	//Then checks all previously scheduled events to ensure the time slot is not taken
	for (int n = 0; n < numEvents; n++)
	{
		//If any existing event occupies the desired time slot, set available to false. 
		if (time == scheduledEvents[n].getTime())
			available = false;
	}
	//If the time slot is available, create the desired event
	if (available == true)
	{
		scheduledEvents[numEvents] = Event(time, name);
		cout << scheduledEvents[numEvents].getTitle() << " is now scheduled for " 
			<< scheduledEvents[numEvents].getTime() << "." << endl;
		numEvents++;
	}
	//If the time slot is occupied, make 2001 reference and do not create a new event at that time slot. 
	else
	{
		cout << "I'm sorry Dave, I can't let you schedule that event. (Time occupied)" << endl;
	}
}
//Check an entered time slot to see if an event is scheduled there. 
Event Venue::findEvent(int time)
{
	//Assume time slot to be open.
	bool available = true;
	//A variable to be set equal to the location (in the array) of the event occupying that time.
	int occupied;
	//Check each event to see if any are scheduled at the time slot of interest.
	for (int n = 0; n < numEvents; n++)
	{
		//If an event is scheduled at that time, inform the user and declare that time slot unavailable.
		if (time == scheduledEvents[n].getTime())
		{
			cout << "The event titled " << scheduledEvents[n].getTitle() << " is scheduled for " << time << "." << endl;
			available = false;
			occupied = n;
		}
	}
	//If none of the events match the queried time, inform the user of this. 
	if (available == false)
	{
		cout << "There is no event currently scheduled at that time." << endl;
		return scheduledEvents[occupied];
	}

	if (available == true)
		return Event();

}
//Checks an entered name to see if any existing events have that name.
Event Venue::findEvent(string name)
{
	//Assume the name to be unused ("available").
	bool available = true;
	//A variable to be set equal to the location (in the array) of the event occupying that name.
	int occupied;
	//Check each event to see if any are scheduled under the name of interest.
	for (int n = 0; n < numEvents; n++)
	{
		//If an event is scheduled under that name, inform the user and declare available as false.
		if (name == scheduledEvents[n].getTitle())
		{
			cout << "The event titled " << scheduledEvents[n].getTitle() << " has already been scheduled for "
				<< scheduledEvents[n].getTime() << "." << endl;
			available = false;
			occupied = n;
		}
	}
	//If none of the events match the queried name, inform the user of this. 
	if (available == false)
	{
		cout << "There is no event with that name currently scheduled." << endl;
		return scheduledEvents[occupied];
	}
	if (available == true)
		return Event();
}

