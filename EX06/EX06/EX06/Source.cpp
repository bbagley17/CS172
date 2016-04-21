#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include "Account.h"


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



template<typename T>
void shuffle(vector<T>& v)
{
	//The lame shuffling program which really just reverses the order of the values. 
	stack<T> tempStorage;
	for (int n = 0; n < v.size(); n++)
	{
		tempStorage.push(v[n]);
	}
	vector<T> temp;
	for (int n = 0; n < v.size(); n++)
	{
		temp.push_back(tempStorage.top());
		tempStorage.pop();
	}
	v.swap(temp);

	//This was a truly random shuffling function that I was trying to implement, but it wouldn't behave itself.
	//In the interest of time, I've replaced it with a boring shuffle program.

	/*
	vector<bool> used;
	for (int n = 0; n < v.size(); n++)
	{
		used.push_back(false);
	}

	stack<T> storage;
	int target;
	//A variable for whether or not the loop has finished shuffling the vector items into the stack. If continue = true,
	// the vector has not been fully shuffled. If continue = false, the vector is fully shuffled into the stack. 
	bool cont;
	do
	{
		target = rand() % v.size();
		//Variable for temporarily storing values for transfer from the vector to the stack.
		int temp;
		//Variable for whether or not a new item has actually been added to the stack.
		bool success;
		//Until a new variable is added to stack, keep selecting a new location in the vector. 
		while (success = false)
		{
			if (used[target] = false)
			{
				//If the selected address in the vector was unused, add the value at that address to the stack
				temp = v[target];
				storage.push(temp);
				//Declare that address as used.
				used[target] = true;
				//Stop this iteration of the loop 
				success = true;
			}
			//If the selected address was already used, pick a new address at random and reiterate the array. 
			else 
			{
				target = rand() % v.size();
				success = false;
			}
		}
		cont = false;
		//If there are any remaining unused addresses in the vector, keep iterating the do-while loop. Otherwise, the loop ends.
		for (int n = 0; n < used.size(); n++)
			{
				if (used[n] = false)
					cont = true;
			}
	} while (cont = true);

	for (int n = 0; n < used.size(); n++)
	{
		v[n] = storage.top();
	}
	*/
}


int main()
{
	{
		//Code for exercise 12.2

		//Creating test arrays of ints, doubles, and strings for the searchSmallest function to operate on
		int intTest[10] = { 2,7,10,5,8,9,3,4,1,6 };
		double doubleTest[10] = { 6.1, 2.9, 3.2, 4.7, 8.0, 10.3, 5.4, 5.6, 0.9, 1.7 };
		string stringTest[5] = { "goober", "gooberfish", "Putin", "Vladimir", "bumpkin" };

		//Searching each array for the smallest element
		cout << "The smallest element of the int array is: " << searchSmallest(intTest, 10) << endl;
		cout << "The smallest element of the double array is: " << searchSmallest(doubleTest, 10) << endl;
		cout << "The smallest element of the string array is: " << searchSmallest(stringTest, 5) << endl;
	}

	{
		//Code for exercise 12.4
		
		//Once again, creating three test arrays of ints, doubles, and strings, respectively. 
		int intTest[10] = { 2,7,10,5,8,9,3,4,1,6 };
		double doubleTest[10] = { 6.1, 2.9, 3.2, 4.7, 8.0, 10.3, 5.4, 5.6, 0.9, 1.7 };
		string stringTest[5] = { "goober", "gooberfish", "Putin", "Vladimir", "bumpkin" };

		//Using the "checkSorted" function to see if the test arrays are sorted, and setting a bool for each array
		// as true if the array is sorted, and false if it is not. 
		bool intTestIsSorted = checkSorted(intTest, 10);
		bool doubleTestIsSorted = checkSorted(doubleTest, 10);
		bool stringTestIsSorted = checkSorted(stringTest, 5);

		//Outputting whether or not each array is sorted. 
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

		//Creating a test vector
		vector<int> testVector;
		//Allowing the user to determine how many values they want to enter into the test vector
		cout << "How many values would you like to enter?" << endl;
		//Variable for how many values the user wants to enter
		int desiredSpots;
		cin >> desiredSpots;
		cout << "Please enter that many values: " << endl;

		//Allowing the user to enter the aforementioned desired number of items 
		for (int n = 0; n < desiredSpots; n++)
		{
			int temp;
			cin >> temp;
			testVector.push_back(temp);
		}
		
		//Outputting the values of the test vector to double-check they were entered correctly
		cout << "The values of the vector are: " << endl;
		for (int n = 0; n < testVector.size(); n++)
		{
			cout << testVector[n] << endl;
		}
		
		//Sending the vector to the shuffle function
		shuffle(testVector);
		cout << "Shuffling the vector..." << endl;

		//Outputting the values of the shuffled vector
		for (int n = 0; n < testVector.size(); n++)
		{
			cout << testVector[n] << endl;
		}

	}


	{
		//Code for exercise 12.25

		//Creating account as per instructions in exercise, with the name, ID#, and initial balance respectively
		Account George_Bowman("George", 1122, 1000);
		//Setting interest rate at 1.5%
		George_Bowman.setAnnualInterestRate(1.5);
		//Depositing three sums into the account, and subsequently withdrawing three sums
		George_Bowman.deposit(30);
		George_Bowman.deposit(40);
		George_Bowman.deposit(50);
		George_Bowman.withdraw(5);
		George_Bowman.withdraw(4);
		George_Bowman.withdraw(2);
		//Printing the full account history
		George_Bowman.printHistory();
	}
}
