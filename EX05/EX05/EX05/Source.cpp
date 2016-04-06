#include <iostream>
#include <string>
#include "Rectangle2D.h"
#include "Course.h"

using namespace std;



int* doubleCapacity(const int* list, int size)
{
	int* new_list = new int[2 * size];

	for (int count = 0; count < size; count++)
	{
		new_list[count] = list[count];
	}

	return new_list;
}

int findLowest(int* arrayIn, int size)
{
	int lowest;
	lowest = arrayIn[0];
	for (int count = 0; count < size; count++)
	{
		if (lowest > arrayIn[count])
			lowest = arrayIn[count];
	}
	return lowest;
}


int main()
{
	{
		//Code for Exercise 11.1


		//Creating integer for the array's size, and having user establish said size
		int array_size;
		cout << "How large would you like the array to be?" << endl;
		cin >> array_size;

		//creating a pointer to a new array to dynamically allocate the memory based on the desired array size
		int* array1 = new int[array_size];

		//A loop to establish the values of the array
		cout << "Please enter the values of the array:" << endl;
		for (int count = 0; count < array_size; count++)
		{
			cin >> array1[count];
		}
		//Another loop which outputs the values of the array. This is mostly to check that the values were entered properly.
		cout << "The values of the array are:" << endl;
		for (int count = 0; count < array_size; count++)
		{
			cout << array1[count] << endl;
		}

		//Establishing a sum variable, then using a loop to compute the sum of all values in the array
		int array1_sum = 0;
		for (int count = 0; count < array_size; count++)
		{
			array1_sum = array1_sum + array1[count];
		}
		//dividing the sum calculated above by the number of values in the array to determine the average. 
		double average = array1_sum / array_size;
		//Outputting the average
		cout << "The average of the array is: " << average << "." << endl;
		//Determining how many of the values in the array are above the average
		int above_avg_count = 0;
		for (int count = 0; count < array_size; count++)
		{
			if (array1[count] > average)
			{
				above_avg_count++;
			}
		}
		//Outputting the number of above-average values
		cout << above_avg_count << " values in the array were above average." << endl;
	}
	{
		//Code for exercise 11.3
		int list_size_1 = 10;

		int* list = new int[list_size_1];

		doubleCapacity(list, list_size_1);
	}


	{
		//Code for exercise 11.5
		int testArray[8] = { 1,2,3,4,10,100,2,-22 };
		int lowestValue;
		int arraySize = 8;
		lowestValue = findLowest(testArray, arraySize);
	}

	{
		//Code for exercise 11.9

		Rectangle2D r1(2, 2, 5.5, 4.9);
		Rectangle2D r2(4, 5, 10.5, 3.2);
		Rectangle2D r3(3, 5, 2.3, 5.4);
		
		cout << "The area of rectangle 1 is " << r1.getArea() << "." << endl;
		cout << "The perimeter of rectangle 1 is " << r1.getPerimeter() << "." << endl;
		bool r1ContainsPoint;
		r1ContainsPoint = r1.contains(3, 3);
		if (r1ContainsPoint == true)
		{
			cout << "Rectangle 1 contains the point (3,3)." << endl;
		}
		else
			cout << "Rectangle 1 does not contain the point (3,3)." << endl;
		bool r1ContainsR2;
		r1ContainsR2 = r1.contains(r2);
		if (r1ContainsR2 == true)
		{
			cout << "Rectangle 1 contains rectangle 2." << endl;
		}
		else
			cout << "Rectangle 1 does not contain rectangle 2." << endl;
		bool r1OverlapsR3;
		r1OverlapsR3 = r1.overlaps(r3);
		if (r1OverlapsR3 == true)
		{
			cout << "Rectangle 1 overlaps rectangle 3." << endl;
		}
		else
			cout << "Rectangle 1 does not overlap rectangle 3." << endl;
	}

	{
		//Code for exercise 11.13
		Course course1("Data Structures", 10);
		Course course2("Database Systems", 15);

		course1.addStudent("Peter Jones");
		course1.addStudent("Brian Smith");
		course1.addStudent("Anne Kennedy");

		course2.addStudent("Peter Jones");
		course2.addStudent("Steve Smith");

		cout << "Number of students in course1:" << course1.getNumberOfStudents() << endl;
		string* students = course1.getStudents();
		for (int i = 0; i < course1.getNumberOfStudents(); i++)
		{
			cout << students[i] << ", ";
		}

		cout << endl << "Number of students in course2:" << course2.getNumberOfStudents() << endl;
		students = course2.getStudents();
		for (int i = 0; i < course2.getNumberOfStudents(); i++)
		{
			cout << students[i] << ", ";
		}
		course1.dropStudent("Anne Kennedy");
		students = course1.getStudents();
		for (int i = 0; i < course1.getNumberOfStudents(); i++)
		{
			cout << students[i] << ", ";
		}
	}
}

