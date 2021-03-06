#include "Header.h"
#include <iostream>

; using namespace std;

int main()
{
	//Until otherwise noted, this code will relate to exercise 9.2
	//This portion of the code will create the variables to be input into the fan constructor
	int speed1 = 3;
	int speed2 = 2;
	bool onOff1 = true;
	bool onOff2 = false;
	double radius1 = 10;
	double radius2 = 5;
	//Constructing two fan objects using the above settings
	fan fan1(speed1, onOff1, radius1);
	fan fan2(speed2, onOff2, radius2);

	//Accessor functions to display the values of fan 1's properties
	//First, display fan1 speed
	cout << "Fan 1's speed is " << fan1.getSpeed() << "." << endl;
	//If fan1 is on, it informs the user of such
	if (fan1.getOnOff() == true)
	{
		cout << "Fan 1 is on." << endl;
	}
	//If fan1 isn't on, it informs the user
	else
	{
		cout << "Fan 1 is off." << endl;
	}
	//Finally, displaying fan1's radius
	cout << "Fan 1's radius is " << fan1.getRadius() << "." << endl;

	//Accessor functions to display the values of fan 2's properties
	//Display fan2 speed
	cout << "Fan 2's speed is " << fan2.getSpeed() << "." << endl;
	//Display whether fan2 is on or off
	if (fan2.getOnOff() == true)
	{
		cout << "Fan 2 is on." << endl;
	}
	else
	{
		cout << "Fan 2 is off." << endl;
	}
	//Display radius of fan2
	cout << "Fan 2's radius is " << fan2.getRadius() << "." << endl;






	//Code for exercise 9.6

	//Establishing coefficients, and giving them all default values of zero.
	double a = 0;
	double b = 0;
	double c = 0;

	//Allowing user to enter their own quadratic equation.
	cout << "Quadratic functions are of the form ax^2 + bx + c = 0." << endl
		<< "The coefficients of these equations are a, b, and c." << endl
		<< "Please enter three number values for the coefficients, pressing enter between each: ";
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cin >> c;
	cout << endl;

	//Constructing quadratic equation using entered coefficients
	QuadraticEquation Quadratic1(a, b, c);

	//Using functions from QuadraticEquation class which solve for the discriminant and the two roots.
	Quadratic1.solveDiscriminant();
	Quadratic1.solveRoot1();
	Quadratic1.solveRoot2();

	cout << "The discriminant of your quadratic equation is: " << Quadratic1.getDiscriminant() << endl;
	if (Quadratic1.getDiscriminant() > 0)
	{
		cout << "The roots of the quadratic equation are: " << Quadratic1.getRoot1() << " and " << Quadratic1.getRoot2() << "." << endl;
	}
	else if (Quadratic1.getDiscriminant() == 0)
	{
		cout << "This quadratic equation has only one root, which is " << Quadratic1.getRoot1() << "." << endl;
	}
	else
	{
		cout << "The discriminant was less than zero, so the equation has no real roots." << endl;
	}




	//Code for exercise 9.11
	int valueToEnter = 16;
	int nextLarger;
	int nextLower;

	//Creating EvenNumber with the value 16
	EvenNumber EvenNumber1(valueToEnter);

	EvenNumber1.getNext();
	EvenNumber1.getPrevious();


	/* ---Joseph--- The problem here is that with the getNext() and the getPrevious(). They each return an EvenNumber object which is great.
					However, the problem lies in the two lines above. The computer is calling these functions, but when it returns the value 
					back to main(), it doesn't know what to do with them (store them in a variable, print them out...).
	Code: 

	EvenNumber EvenNumber2 = EvenNumber1.getNext();
	EvenNumber EvenNumber3 = EvenNumber1.getPrevious();


					This code works with how you have set up the rest of your code. 


					Oh, and the read squigglies right under here are because they haven't been declared yet. 
					I hope this helps. Because you had the code working, and Dr. Bell had you change the rest of the set up I'm not going to deduct points here.
	*/

	cout << "The value of the first EvenNumber was " << EvenNumber1.getValue() << "." << endl;
	cout << "The next greater EvenNumber is " << EvenNumber2.getValue() << "." << endl;
	cout << "The next lower EvenNumber is " << EvenNumber3.getValue() << "." << endl;



	return 0;
}
