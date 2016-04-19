#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <stack>


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


//Work in progress. If it can't be salvaged, come up with a different version on Thursday...
//
//
//
//
//
//
//
////////////////////////////////////////////////////////////////////////////
template<typename T>
void shuffle(vector<T>& v)
{
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
		vector<int> testVector;
		cout << "How many values would you like to enter?" << endl;
		int desiredSpots;
		cin >> desiredSpots;
		cout << "Please enter that many values: " << endl;
		for (int n = 0; n < desiredSpots; n++)
		{
			int temp;
			cin >> temp;
			testVector.push_back(temp);
		}
		
		cout << "The values of the vector are: " << endl;
		for (int n = 0; n < testVector.size(); n++)
		{
			cout << testVector[n] << endl;
		}
		cout << "Shuffling the vector..." << endl;
		shuffle(testVector);

		for (int n = 0; n < testVector.size(); n++)
		{
			cout << testVector[n] << endl;
		}

	}


	{
		//Code for exercise 12.25


	}
}
