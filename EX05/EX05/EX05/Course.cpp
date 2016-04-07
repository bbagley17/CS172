#include <iostream>
#include "Course.h"
#include <string>
using namespace std;

//Constructor for course objects, taking in the name of the course and the number of seats to be offered
Course::Course(const string& courseName, int capacity)
{
	//Initialize with no students in the course
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
//function for removing all students from a course
Course::~Course()
{
	delete[] students;
}

//Function which returns the name of the course
string Course::getCourseName() const
{
	return courseName;
}

//Function for adding a student to the class
void Course::addStudent(const string& name)
{
	//Establishing variables for adding slots to the class and setting them to non-use values
	string yesNo = "no";
	int newSpots = 0;
	//If there are open spots, a student is simply added to the class
	if (numberOfStudents < capacity)
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	//If the class is full, the option is given to add more seats
	else
	{
		cout << "The class is full. Would you like to expand the class' capacity? (enter 'yes' or 'no')" << endl;
		cin >> yesNo;
	}
	//If yesNo has been set to yes, give the option to add a desired number of open seats to the class.
	if (yesNo == "yes")
	{
		//Informing user how many seats are open, and then allowing them to enter the desired number of extra seats
		cout << "How many extra seats would you like to add?" << endl;
		cout << "There are presently " << capacity << "spots. (please enter a number)" << endl;
		cin >> newSpots;
		cout << endl;
		//checking to make sure a valid number was input
		if (newSpots <= 0)
		{
			cout << "Please enter a positive number." << endl;
			cin >> newSpots;
			cout << endl;
		}
	}
	//Replacing students array with a new array with the extra slots added
	students = expandCapacity(students, capacity, newSpots);
	//Updating the capacity variable
	capacity = capacity + newSpots;
	//Now that there are extra spots, add the student as would have been done originally
	if ((yesNo == "yes") && (numberOfStudents < capacity))
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
}
//Function for enlarging a class size
string* Course::expandCapacity(const string* list, int capacity, int newSpots)
{
	//creating a new, larger array of desired size which will replace the original student list
	string* new_list = new string[capacity + newSpots];

	//filling in the students up to the prior capacity with the students from the original list
	for (int count = 0; count < capacity; count++)
	{
		new_list[count] = list[count];
	}

	return new_list;
}

//Function for removing a student from a class
void Course::dropStudent(const string& name)
{
	//Locates the student in the roster, then deletes them from the roster. 
	for (int count = 0; count < capacity; count++)
	{
		if (students[count] == name)
		{

			for (int n = count; n < capacity-1; n++)
			{
				//Shifting all student entries back one space in the list
				students[n] = students[n + 1];
			}
			//Reducing the student count by one to reflect the dropped student
			numberOfStudents = numberOfStudents - 1; 
		}
	}

}
//Function for deleting all students from the course
void Course::clear()
{
	//Iterating through the entire student array and deleting every entry
	for (int count = 0; count < capacity; count++)
	{
		delete &students[count];
	}
}
//Returning the list of students
string* Course::getStudents() const
{
	return students;
}
//Returning the number of students in the course
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

Course::Course(const Course&)
{

}