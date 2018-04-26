#include "Cylinder.h"
#include <cmath>
#include <iostream>

using namespace std;

//default constructor
Cylinder::Cylinder():Circle()
{
	radius = 0;
	height = 0;
}
//constructor
Cylinder::Cylinder(double r, double h):Circle(r)
{
	radius = r;
	height = h;
}
//computes the area
double Cylinder::Area()
{
	double area = (pow(radius, 2) * (atan(1) * 4)) * 2 + 2 * (atan(1) * 4)*radius*height;
	return area;
}
//calculates the volume
double Cylinder::Volume()
{
	double volume = (atan(1) * 4)*(pow(radius,2))*height;
	return volume;
}
void Cylinder::expand(int factor)
{
	radius = radius*factor;
	height = height*factor;
}
//displays the required info
void Cylinder::display()
{
	double area = this->Area();
	double volume = this->Volume();
	cout << "Cylinder: (radius = " << radius << ", height = " << height << ")" << endl;
	cout << "The area is: " << area << endl;
	cout << "The volume is: " << volume << endl;
	cout << endl;
}
