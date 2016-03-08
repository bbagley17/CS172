#include <iostream>
#include <string>
#include "RegularPolygon.h"

using namespace std;

//Mutator functions for number of sides, length of sides, x coordinate, and y coordinate
void RegularPolygon::setN(int numSides)
{
	n = numSides;
}
void RegularPolygon::setSide(int sideLength)
{
	side = sideLength;
}

void RegularPolygon::setX(double newX)
{
	x = newX;
}
void RegularPolygon::setY(double newY)
{
	y = newY;
}

//Function to calculate and output the perimeter of the polygon
double RegularPolygon::getPerimeter()
{
	double perimeter;
	perimeter = n * side;
	return perimeter;
}
//Function to calculate and output the area of the polygon
double RegularPolygon::getArea()
{
	double area;
	area = (n * side * side) / (4 * tan(3.14159 / n));
	return area;
}