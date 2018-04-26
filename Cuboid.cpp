#include "Cuboid.h"
#include <iostream>

using namespace std;

//default constructor
Cuboid::Cuboid():Rectangle()
{
	length = 0;
	width = 0;
	height = 0;
}
//constructor
Cuboid::Cuboid(double l, double w, double h):Rectangle(l,w)
{
	length = l;
	width = w;
	height = h;
}
//calculates the area
double Cuboid::Area()
{
	double area = 2*length*width+2*length*height+2*width*height;
	return area;
}
//calculates the volume
double Cuboid::Volume()
{
	double volume = length * width * height;
	return volume;
}
void Cuboid::expand(int factor)
{
	length = length*factor;
	width = width*factor;
	height = height*factor;
}
//displays the required info
void Cuboid::display()
{
	double area = this->Area();
	double volume = this->Volume();
	cout << "Cubiod: (length = " << length << ", width = " << width << ", height = " << height << ")" << endl;
	cout << "The area is: " << area << endl;
	cout << "The volume is: " << volume << endl;
	cout << endl;
}
