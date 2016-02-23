#include <iostream>
#pragma once
using namespace std;

//Fan class for exercise 9.2
#ifndef fan_H_
#define fan_H_
class fan
{
public:
	//The fan class will have three properties. Speed, radius, and on (on will be true if the fan is on, and false if the fan is off
	int speed;
	bool on;
	double radius;
	//No-arg constructor for fan class
	fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}

	//Arg constructor for fan class
	fan(int setSpeed, bool setOnOff, double setRadius)
	{
		if (setSpeed >=0 && setSpeed <= 3)
			speed = setSpeed;
		else
		{
			cout << "The entered speed value is beyond the acceptable range. Please enter a new speed value using the speedSet function."
				<< endl;
		}
		on = setOnOff;
		radius = setRadius;
	}

	//Mutator function for speed
	void speedSet(int newspeed)
	{
		speed = newspeed;
	}
	//Mutator function for on
	void onOff(bool newOn)
	{
		on = newOn;
	}
	//Mutator function for radius
	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
	//Accessor function for speed
	int getSpeed()
	{
		return speed;
	}
	//Accessor function for on
	bool getOnOff()
	{
		return on;
	}
	//Accessor function for radius
	double getRadius()
	{
		return radius;
	}
};
#endif


//QuadraticEquation class for exercise 9.6
#ifndef QuadraticEquation_H_
#define QuadraticEquation_H_
class QuadraticEquation
{
public:
	//Establishing coefficient variables for quadratic
	double a;
	double b;
	double c;
	//Establishing values to be solved for
	double discriminant;
	double root1;
	double root2;

	//No-arg constructor for QuadraticEquation
	QuadraticEquation()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	//Arg constructor for QuadraticEquation which takes in the three coefficient values
	QuadraticEquation(double enteredA, double enteredB, double enteredC)
	{
		a = enteredA;
		b = enteredB;
		c = enteredC;
	}

	//Mutator function for coefficient a
	void setA(double enteredA)
	{
		a = enteredA;
	}
	//Mutator function for coefficient b
	void setB(double enteredB)
	{
		b = enteredB;
	}
	//Mutator function for coefficient c
	void setC(double enteredC)
	{
		c = enteredC;
	}

	//Function which takes entered coefficients and solves for the discriminant (b^2 -4ac) portion of quadratic equation 
	double solveDiscriminant()
	{
		discriminant = ((b*b) - (4 * a*c));
		return discriminant;
	}
	//Function which solves for the quadratic equation's first root
	double solveRoot1()
	{
		if (discriminant >= 0)
			root1 = ((-b) + sqrt(discriminant)) / (2 * a);
		else
		{
			root1 = 0;
		}
		return root1;
	}
	//Function which solves for the second root
	double solveRoot2()
	{
		if (discriminant >= 0)
			root2 = ((-b) - sqrt(discriminant)) / (2 * a);
		else
			root2 = 0;
		return root2;
	}
	//Accessor function to output discriminant
	double getDiscriminant()
	{
		return discriminant;
	}
	//Accessor for root1
	double getRoot1()
	{
		return root1;
	}
	//Accessor for root2
	double getRoot2()
	{
		return root2;
	}
};
#endif

#ifndef EvenNumber_H_
#define EvenNumber_H_
class EvenNumber
{
public:
	int storedValue;
	EvenNumber()
	{
		storedValue = 0;
	}
	EvenNumber(int enteredValue)
	{
		storedValue = enteredValue;
	}
	int getValue()
	{
		return storedValue;
	}
	int getNext()
	{
		;
	}

};
#endif // !EvenNumber_H_ 
