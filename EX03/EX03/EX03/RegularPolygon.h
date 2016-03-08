#include <iostream>
#include <string>


using namespace std;

#ifndef RegularPolygon_H_
#define RegularPolygon_H_
class RegularPolygon
{
private:
	//Number of sides
	int n;
	//Length of side
	double side;
	//X coordinate of polygon center
	double x;
	//Y coordinate of polygon center
	double y;

public:
	//Default no-arg constructor which creates a triangle centered at (0,0) of side length 1
	RegularPolygon()
	{
		n = 3;
		side = 1;
		x = 0;
		y = 0;
	}
	//Constructor which takes in number of sides and length of sides but assumes coordinates to be (0,0)
	RegularPolygon(int numSides, double sideLength)
	{
		n = numSides;
		side = sideLength;
		x = 0;
		y = 0;
	}
	//Constructor which takes in number of sides, length of sides, x-coordinate, and y-coordinate
	RegularPolygon(int numSides, double sideLength, double xCoord, double yCoord)
	{
		n = numSides;
		side = sideLength;
		x = xCoord;
		y = yCoord;
	}
	//Accessor functions for number of sides, side length, x coordinate, and y coordinate
	int getN()
	{
		return n;
	}
	double getSide()
	{
		return side;
	}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	//Mutator functions for number of sides, length of sides, x coordinate, and y coordinate
	void setN(int numSides);
	void setSide(int sideLength);
	void setX(double newX);
	void setY(double newY);
	//Function to calculate and output the perimeter of the polygon
	double getPerimeter();
	//Function to calculate and output the area of the polygon
	double getArea();

};
#endif