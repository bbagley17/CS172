#include <iostream>
#include <string>
#include "RegularPolygon.h"

using namespace std;

//Function to check if an entered string is a palindrome
bool isPalindrome(const string& s)
{
	//Variable to identify whether or not string is a palindrome. Assume true.
	bool palindrome = true;
	int length;
	length = s.length();
	//I've elected to sweep from both ends of the string, checking to see if each
	// char is the same at opposite ends (essentially demonstrating symmetry in the string).
	//This seemed to me a more elegant option than using stacks.
	for (int n = 0; n < length; n++)
	{
		//If at any point/s the string is assymmetrical, palindrome is set to false. 
		//If the string is symmetrical at all points, palindrome remains true. 
		if (s.at(length-(1+n)) != s.at(n))
			palindrome = false;
	}
	return palindrome;
}

int main()
{
	//Code for exercise 10.5

	//string to be tested
	string s; 
	//Prompting user for string
	cout << "Please entere a string: ";
	cin >> s;
	cout << "The program will now check to see if " << s << " is a palindrome." << endl;
	//bool set based on whether or not the string is a palindrome
	bool palindrome;
	//Set palindrome equal to the output of isPalindrome
	palindrome = isPalindrome(s);
	//If the string is a palindrome, inform the user of this
	if (palindrome == true)
	{
		cout << s << " is a palindrome." << endl;
	}
	//Otherwise, inform the user that the string is not a palindrome
	else
	{
		cout << s << " is not a palindrome." << endl;
	}



	//Code for exercise 10.13

	//Creating the three polygons
	RegularPolygon boringPolygon;
	RegularPolygon polygonOne(6, 4);
	RegularPolygon polygonTwo(10, 4, 5.6, 7.8);

	//Outputting the perimeter and area of each polygon
	cout << "The perimeter of the first polygon is " << boringPolygon.getPerimeter() << "." << endl;
	cout << "The area of the first polygon is " << boringPolygon.getArea() << "." << endl;
	cout << "The perimeter of the second polygon is " << polygonOne.getPerimeter() << "." << endl;
	cout << "The area of the second polygon is " << polygonOne.getArea() << "." << endl;
	cout << "The perimeter of the third polygon is " << polygonTwo.getPerimeter() << "." << endl;
	cout << "The area of the third polygon is " << polygonTwo.getArea() << "." << endl;


}

