/* I affirm that all code given below was written solely by me, Bryce Bagley, 
and that any help I received adhered to the rules stated for this exam. */
#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

int main()
{
	Venue theSpot;
	theSpot.addEvent(10, "Coffee Hour");    //Should work
	theSpot.addEvent(11, "Brunch w/ Bob");  //Should work
	theSpot.addEvent(11, "Bingo"); //Shouldn't work

	cout << theSpot.findEvent(10).getTitle() << endl; //Should find Coffee Hour
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;  //Should find 11 o'clock
	cout << theSpot.findEvent("Bingo").getTime() << endl; //Should print -1, because Bingo ain't there!

	theSpot.addEvent(12, "Swordfighting");
	theSpot.addEvent(9, "29th Annual Android-Human Relations Banquet");
	theSpot.addEvent(8, "Sheep Wrestling World Championship");
	theSpot.addEvent(7, "Indoor Waterskiing Club");
	theSpot.addEvent(6, "Chandelier Demolishing Party");
	theSpot.addEvent(5, "Early Risers Breakfast");
	theSpot.addEvent(4, "Early Risers Who Rise So Early the Hotel Staff Hate Their Guts Breakfast");
	theSpot.addEvent(13, "Debate for Presidency of the American Conference of Mime Enthusiasts");
	theSpot.addEvent(14, "Cleaning up the inevitable grime of the mime enthusiasts...");
	theSpot.addEvent(15, "Alright, I admit it. At this point I'm really just making sure the vector is working.");
	theSpot.addEvent(16, "I'm convinced now.");
	return 0;
}
