#include <iostream>
using namespace std;

#ifndef COURSE_H_
#define COURSE_H_
class Course
{
	//Establishing private variables for the name of the course, a pointer to an array of student names, the number of students,
	// and the course capacity
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;

public:
	//Constructor for course object
	Course(const string& courseName, int capacity);
	//Copy constructor
	Course(const Course&);
	//Destructor
	~Course();
	//Function which returns the name of the course
	string getCourseName() const;
	//Function for adding a student to the course. Input a name.
	void addStudent(const string& name);
	//Function for dropping a student of a particular name from the course. 
	void dropStudent(const string& name);
	//Function which returns the list of students in the course
	string* getStudents() const;
	//Function for expanding the class capacity by adding a desired number of additional slots
	string* expandCapacity(const string* students, int capacity, int newSpots);
	//Retrieves the number of students in the course
	int getNumberOfStudents() const;
	//Removes all students from the course. 
	void clear();
};
#endif