#include <iostream>
using namespace std;

#ifndef COURSE_H_
#define COURSE_H_
class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;

public:
	Course(const string& courseName, int capacity);
	~Course();
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	string* expandCapacity(const string* students, int capacity, int newSpots);
	int getNumberOfStudents() const;
	void clear();
};
#endif