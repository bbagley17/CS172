#pragma once
#include <iostream>

using namespace std;

#ifndef Rectangle2D_H_
#define Rectangle2D_H_
class Rectangle2D
{
	//Establishing variables for the x and y coordinates of the rectangle's center, along with its height and width
private:
	double x;
	double y;
	double width;
	double height;

public:
	//Function which returns the x coordinate of the rectangle's center
	double getX() const
	{
		return x;
	}
	//Function for modifying the x coordinate of the rectangle's center
	double setX(double newX)
	{
		x = newX;
	}
	//Function which returns the y coordinate of the rectangle's center
	double getY() const
	{
		return y;
	}
	//Function for modifying the y coordinate of the rectangle's center
	double setY(double newY)
	{
		y = newY;
	}
	//Function which returns the width of the rectangle
	double getWidth() const
	{
		return width;
	}
	//Function for modifying the width of the rectangle
	double setWidth(double newWidth)
	{
		width = newWidth;
	}
	//Function which returns the height of the rectangle
	double getHeight() const
	{
		return height;
	}
	//Function for modifying the height of the rectangle
	double setHeight(double newHeight)
	{
		height = newHeight;
	}
	//Default constructor for Rectangle2D objects
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	//Rectangle2D object which takes X and Y coordinates of the center along with a width and height for the rectangle
	Rectangle2D(double setX, double setY, double setWidth, double setHeight)
	{
		x = setX;
		y = setY;
		width = setWidth;
		height = setHeight;
	}
	//Function which computes and returns the area of the rectangle
	double getArea() const
	{
		double area = width * height;
		return area;
	}
	//Function which computes and returns the perimeter of the rectangle
	double getPerimeter() const
	{
		double perimeter = (2 * width) + (2 * height);
		return perimeter;
	}
	//Function which determines whether the rectangle contains a particular point
	bool contains(double checkX, double checkY) const
	{
		//Variable for whether or not the point is contained. Assume true until determined false. 
		bool contains = true;
		//If the X-coord to be checked is beyond either horizontal border of the rectangle, set contains to false
		if ((checkX >= (x + (0.5 * width))) || (checkX <= (x - (0.5 * width))))
		{
			contains = false;
		}
		//If the Y-coord to be checked is beyond either vertical border of the rectangle, set contains to false
		if ((checkY >= (y + (0.5 * height))) || (checkY <= (y - (0.5 * height))))
		{
			contains = false;
		}
		return contains;
	}
	//Function which determines whether the rectangle contains another rectangle
	bool contains(const Rectangle2D &r) const
	{
		//Variable for whether second rectangle is contained by the first. Assume yes, as it is simpler to prove the opposite. 
		bool contains = true;
		//Calculates whether either verticale edge of the second rectangle falls outside the first rectangle
		if (((r.x - (0.5* r.width)) < (x - (0.5 * width))) || ((r.x) + (0.5 * r.width)) > ((x)+(0.5*width)))
		{
			contains = false;
		}
		//Calculates whether either horizontal edge of the second rectangle falls outside the first rectangle
		if (((r.y - (0.5* r.height)) < (y - (0.5 * height))) || ((r.y) + (0.5 * r.height)) > ((y)+(0.5*height)))
		{
			contains = false;
		}
		return contains;
	}

	//Function which determines whether the rectangle overlaps with a second rectangle
	bool overlaps(const Rectangle2D &r) const
	{
		//This time, assume they do not overlap unless proven to do so.
		bool overlaps = false;
		//Calculates whether either vertical edge of the second rectangle falls within the first rectangle
		if ((((r.x - (0.5* r.width)) > (x - (0.5 * width))) && ((r.x - (0.5* r.width)) < (x + (0.5 * width)))) || ((r.x + (0.5 * r.width)) < (x+(0.5*width)) && (r.x + (0.5 * r.width)) > (x - (0.5*width))))
		{
			overlaps = true;
		}
		//Calculates whether either horizontal edge of the second rectangle falls within the first rectangle
		if ((((r.y - (0.5* r.height)) > (y - (0.5 * height))) && ((r.y - (0.5 * r.height)) < ((y)+(0.5*height)))) || (((r.y) + (0.5 * r.height)) < ((y)+(0.5*height)) && ((r.y) + (0.5 * r.height)) > ((y)-(0.5*height))))
		{
			overlaps = true;
		}
		//If either of the above was true, there is at least some overlap.

		//Return whether or not there was overlap
		return overlaps;
	}
};
#endif


