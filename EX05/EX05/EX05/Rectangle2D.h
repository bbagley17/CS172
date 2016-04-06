#pragma once
#include <iostream>

using namespace std;

#ifndef Rectangle2D_H_
#define Rectangle2D_H_
class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;

public:
	double getX() const
	{
		return x;
	}
	double setX(double newX)
	{
		x = newX;
	}
	double getY() const
	{
		return y;
	}
	double setY(double newY)
	{
		y = newY;
	}
	double getWidth() const
	{
		return width;
	}
	double setWidth(double newWidth)
	{
		width = newWidth;
	}
	double getHeight() const
	{
		return height;
	}
	double setHeight(double newHeight)
	{
		height = newHeight;
	}
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double setX, double setY, double setWidth, double setHeight)
	{
		x = setX;
		y = setY;
		width = setWidth;
		height = setHeight;
	}
	double getArea() const
	{
		double area = width * height;
		return area;
	}
	double getPerimeter() const
	{
		double perimeter = (2 * width) + (2 * height);
		return perimeter;
	}
	bool contains(double checkX, double checkY) const
	{
		bool contains = true;
		if ((checkX >= (x + (0.5 * width))) || (checkX <= (x - (0.5 * width))))
		{
			contains = false;
		}
		if ((checkY >= (y + (0.5 * height))) || (checkY <= (y - (0.5 * height))))
		{
			contains = false;
		}
		return contains;
	}
	bool contains(const Rectangle2D &r) const
	{
		bool contains = true;
		if (((r.x - (0.5* r.width)) < (x - (0.5 * width))) || ((r.x) + (0.5 * r.width)) > ((x)+(0.5*width)))
		{
			contains = false;
		}
		if (((r.y - (0.5* r.height)) < (y - (0.5 * height))) || ((r.y) + (0.5 * r.height)) > ((y)+(0.5*height)))
		{
			contains = false;
		}
		return contains;
	}
	bool overlaps(const Rectangle2D &r) const
	{
		bool overlaps = false;
		if (((r.x - (0.5* r.width)) > (x - (0.5 * width))) || ((r.x) + (0.5 * r.width)) < ((x)+(0.5*width)))
		{
			overlaps = true;
		}
		if (((r.y - (0.5* r.height)) > (y - (0.5 * height))) && ((r.y - (0.5 * r.height)) < ((y)+(0.5*height)) || ((r.y) + (0.5 * r.height)) < ((y)+(0.5*height))))
		{
			overlaps = true;
		}
		return overlaps;
	}
};
#endif


