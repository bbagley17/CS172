#include <iostream>
#include <string>

using namespace std;



int* doubleCapacity(const int* list, int size)
{
	int* new_list[] = new int[2 * size];

	for (int count = 0; count < size; count++)
	{
		new_list[count] = list[count];
	}

	return new_list;
}

int* lowestValue(int arrayIn, int size)
{
	int* lowest;
	lowest = arrayIn[0];
	for (int count = 0; count < size; count++)
	{
		if (lowest > arrayIn[count])
			lowest = arrayIn[count];
	}
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

		int* list[] = new int[list_size_1];

		doubleCapacity(list, list_size_1);
	}

	{
		//Code for exercise 11.5
		int testArray[8] = { 1,2,3,4,10,100,2,-22 };
		int* lowestValue;
		int arraySize = 8;
		lowestValue = findLowest(testArray, arraySize);
	}
}