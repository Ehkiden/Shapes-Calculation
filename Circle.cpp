#include "Circle.h"
#include <cmath>
#include <iostream>

using namespace std;

//default constructor
Circle::Circle()
{
	radius = 0;
}

//constructor
Circle::Circle(double r)
{
	radius = r;
}
//returns no value
double Circle::Volume()
{
	return 0;
}
//calculates the area
double Circle::Area()
{
	double area = pow(radius,2) * (atan(1)*4);
	return area;
}
void Circle::expand(int factor)
{
	radius = radius * factor;
}
//displays the required info
void Circle::display()
{
	double volume = this->Volume();//returns nothing
	double area = this->Area();
	cout << "Circle: (radius = " << radius<< ")" << endl;
	cout << "The area is: " << area << endl;
	cout << endl;
}
