#include <iostream>
#pragma once
using namespace std;


#ifndef fan_H_
#define fan_H_
class fan
{
public:
	int speed;
	bool on;
	double radius;
	fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}

	fan(int setSpeed, bool setOnOff, double setRadius)
	{
		speed = setSpeed;
		on = setOnOff;
		radius = setRadius;
	}

	void speedSet(int newspeed)
	{
		speed = newspeed;
	}
	void onOff(bool newOn)
	{
		on = newOn;
	}
	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
	int getSpeed()
	{
		return speed;
	}
	bool getOnOff()
	{
		return on;
	}
	double getRadius()
	{
		return radius;
	}
};
#endif



#ifndef QuadraticEquation_H_
#define QuadraticEquation_H_
class QuadraticEquation
{
public:
	double a;
	double b;
	double c;
	double discriminant;
	double root1;
	double root2;

	QuadraticEquation()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	QuadraticEquation(double enteredA, double enteredB, double enteredC)
	{
		a = enteredA;
		b = enteredB;
		c = enteredC;
	}

	void getA(double enteredA)
	{
		a = enteredA;
	}
	void getB(double enteredB)
	{
		b = enteredB;
	}
	void getC(double enteredC)
	{
		c = enteredC;
	}

	double getDiscriminant(double a, double b, double c)
	{
		discriminant = ((b*b) - (4 * a*c));
		return discriminant;
	}
	double getRoot1()
	{
		if (discriminant >= 0)
			root1 = ((-b) + sqrt(discriminant)) / (2 * a);
		else
			root1 = 0;
		return root1;
	}
	double getRoot2()
	{
		if (discriminant >= 0)
			root2 = ((-b) - sqrt(discriminant)) / (2 * a);
		else
			root2 = 0;
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

}
#endif // !EvenNumber_H_ 
