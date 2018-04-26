#include "Sphere.h"
#include <cmath>
#include <iostream>

using namespace std;

//default constructor
Sphere::Sphere():Circle()
{
	radius = 0;
}
//constructor
Sphere::Sphere(double r):Circle(r)
{
	radius = r;
}
//compute the area
double Sphere::Area()
{
	double area = (pow(radius, 2) * (atan(1) * 4)) * 4;
	return area;
}
//calculated the volume
double Sphere::Volume()
{
	double volume = (4.0/3.0)*(atan(1)*4)*(pow(radius,3));
	return volume;
}
void Sphere::expand(int factor)
{
	radius = radius*factor;
}
//displays the required info
void Sphere::display()
{
	double area = this->Area();
	double volume = this->Volume();
	cout << "Sphere: (radius = " << radius << ")" << endl;
	cout << "The area is: " << area << endl;
	cout << "The volume is: " << volume << endl;
	cout << endl;
}
