#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

template <typename T>
T searchSmallest(T input[], int size)
{
	T lowest = input[0];
	for (int n = 1; n < size; n++)
	{
		if (input[n] < input[n - 1])
			lowest = input[n];
	}
	return lowest;
}

template<typename T>
bool checkSorted(T input[], int size)
{
	bool isSorted = true;
	for (int n = 1; n < size; n++)
	{
		if (input[n] < input[n - 1])
			isSorted = false;
	}
	return isSorted;
}


int main()
{
	{
		//Code for exercise 12.2
		int intTest[10] = { 2,7,10,5,8,9,3,4,1,6 };
		double doubleTest[10] = { 6.1, 2.9, 3.2, 4.7, 8.0, 10.3, 5.4, 5.6, 0.9, 1.7 };
		string stringTest[5] = { "goober", "gooberfish", "Putin", "Vladimir", "bumpkin" };

		cout << "The smallest element of the int array is: " << searchSmallest(intTest, 10) << endl;
		cout << "The smallest element of the double array is: " << searchSmallest(doubleTest, 10) << endl;
		cout << "The smallest element of the string array is: " << searchSmallest(stringTest, 5) << endl;
	}

	{
		//Code for exercise 12.4
		int intTest[10] = { 2,7,10,5,8,9,3,4,1,6 };
		double doubleTest[10] = { 6.1, 2.9, 3.2, 4.7, 8.0, 10.3, 5.4, 5.6, 0.9, 1.7 };
		string stringTest[5] = { "goober", "gooberfish", "Putin", "Vladimir", "bumpkin" };

		bool intTestIsSorted = checkSorted(intTest, 10);
		bool doubleTestIsSorted = checkSorted(doubleTest, 10);
		bool stringTestIsSorted = checkSorted(stringTest, 5);

		if (intTestIsSorted == true)
			cout << "The int array is sorted." << endl;
		else
			cout << "The int array is not sorted." << endl;

		if (doubleTestIsSorted == true)
			cout << "The double array is sorted." << endl;
		else
			cout << "The double array is not sorted." << endl;

		if (stringTestIsSorted == true)
			cout << "The string array is sorted." << endl;
		else
			cout << "The string array is not sorted." << endl;
	}

	{
		//Code for exercise 12.8


	}

	{
		//Code for exercise 12.20
	}
}
