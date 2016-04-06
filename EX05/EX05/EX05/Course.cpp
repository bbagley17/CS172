#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	string yesNo = "no";
	int newSpots = 0;
	if (numberOfStudents < capacity)
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	else
	{
		cout << "The class is full. Would you like to expand the class' capacity? (enter 'yes' or 'no')" << endl;
		cin >> yesNo;
	}
	if (yesNo == "yes")
	{
		cout << "How many extra seats would you like to add?" << endl;
		cout << "There are presently " << capacity << "spots. (please enter a number)" << endl;
		cin >> newSpots;
	}
	students = expandCapacity(students, capacity, newSpots);
	capacity = capacity + newSpots;
	if (numberOfStudents < capacity)
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
}

string* Course::expandCapacity(const string* list, int capacity, int newSpots)
{
	string* new_list = new string[capacity + newSpots];

	for (int count = 0; count < capacity; count++)
	{
		new_list[count] = list[count];
	}

	return new_list;
}


void Course::dropStudent(const string& name)
{
	for (int count = 0; count < capacity; count++)
	{
		if (students[count] == name)
		{
			delete &students[count];
		}
	}
}

void Course::clear()
{
	for (int count = 0; count < capacity; count++)
	{
		delete &students[count];
	}
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}


//
//
//
//
//
//
//
//Ask what the "destructor and copy constructor" are, and what a "deep" copy means
	