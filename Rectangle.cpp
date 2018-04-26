#include "Rectangle.h"
#include <iostream>

using namespace std;

//default constructor
Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}
//constructor
Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
}

//returns nothing but is required by the base class
double Rectangle::Volume()
{
	return 0;
}
//calculates the are
double Rectangle::Area()
{
	double area = length*width;
	return area;
}
void Rectangle::expand(int factor)
{
	length = length*factor;
	width = width*factor;
}
//displays the required info
void Rectangle::display()
{
	double volume = this->Volume();
	double area = this->Area();
	cout << "Rectangle: (Length = " << length << ", width = " << width << endl;
	cout << "The area is: " << area << endl;
	cout << endl;
}
