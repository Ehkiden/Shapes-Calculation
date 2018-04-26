//course: CS215-004
//Project: Programming Assignment 2
//Date: 11/14/16
//Purpose: In this project, you will write a program to represent geometric shapes and some operations that can be performed on them.For each shape, store fundamental data about
//its size, and provide member functions to access and modify the data.In addition, provide
//appropriate functions to compute each shape’s area(note that for 3D shape, the area is the
//surface area) and volume when it applies(for 3D shape only)
//
//Author: Jared Rigdon

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Circle.h"
#include "Cuboid.h"
#include "Cylinder.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Sphere.h"

using namespace std;

void pause_215(bool have_newline);

void expandall(vector<Shape*>& sh);

void maxSurfaceArea(vector<Shape*>& sh);
void maxVolume(vector<Shape*>& sh);

int main() {
	string name, word;
	//create a vector list to store shapes from file
	vector<string> shape_list;

	//ask user to enter the file name
	cout << "Enter filename:" << endl;
	getline(cin, name);

	cout << endl;
	//open the file
	ifstream file;
	file.open(name);

	//checks to see if the file is there
	if (!file.good()) {
		cout << "This file does not exit please try agian." << endl;
		cin.clear();
	}

	//stores the values in the vector
	else {
		while (!file.eof()) {
			while (file >> word) {
				//spereates each value by the whitespace or newline and adds it into the vector
				shape_list.push_back(word);
			}
		}
		//closes the file
		file.close();
	}
	//create a vector list of the object pointers for later use
	vector<Shape*> shapes2;

	//check each element in the vector list to see if the element matches the shape listed below
	for (int i = 0; i < shape_list.size(); i++) {

		Shape* shapes = NULL;
		//create string and double values to be used for converting string to double
		string a, b, c;
		double x, y, z;

		if (shape_list[i] == "Rectangle") {
			//converts the strings to double
			a = shape_list[i + 1];
			x = stod(a);
			b = shape_list[i + 2];
			y = stod(b);

			//calls the class to display the calculations
			shapes = new Rectangle(x, y);
			shapes->display();
			shapes2.push_back(shapes);
		}
		else if (shape_list[i] == "Circle") {
			//converts the strings to double
			a = shape_list[i + 1];
			x = stod(a);

			//calls the class to display the calculations
			shapes = new Circle(x);
			shapes->display();
			shapes2.push_back(shapes);
		}
		else if (shape_list[i] == "Cuboid") {
			//converts the strings to double
			a = shape_list[i + 1];
			x = stod(a);
			b = shape_list[i + 2];
			y = stod(b);
			c = shape_list[i + 3];
			z = stod(c);

			//calls the class to display the calculations
			shapes = new Cuboid(x, y, z);
			shapes->display();
			shapes2.push_back(shapes);
		}
		else if (shape_list[i] == "Cylinder") {
			//converts the strings to double
			a = shape_list[i + 1];
			x = stod(a);
			b = shape_list[i + 2];
			y = stod(b);

			//calls the class to display the calculations
			shapes = new Cylinder(x, y);
			shapes->display();
			shapes2.push_back(shapes);
		}
		else if (shape_list[i] == "Sphere") {
			//converts the strings to double
			a = shape_list[i + 1];
			x = stod(a);

			//calls the class to display the calculations
			shapes = new Sphere(x);
			shapes->display();
			shapes2.push_back(shapes);
		}
	}
	//call the maxSurfaceArea and maxVolume functions to determine which object has the largest area/volume
	maxSurfaceArea(shapes2);
	maxVolume(shapes2);

	//call the expandall function to ask the user to input a positive number to expand all the pointer objects
	expandall(shapes2);

	pause_215(true);
	return 0;
}

//ask the user to input a positive number to expand all the pointer objects
void expandall(vector<Shape*>& sh) {

	int factor;
	//ask the user to input a positive number
	while (true) {
		cout << "Please input a positive integer as the factor to expand : " << endl;
		cin >> factor;
		cout << endl;
		cin.ignore(256, '\n');

		// check if the user input is invalid
		if (cin.fail()) {
			cin.clear();
			cout << "Invalid input, please try again..." << endl;
		}
		else if (factor <= 0) {
			cin.clear();
			cout << "Invalid input, please try again..." << endl;
		}
		else {
			//if valid then call the expand function from the shape class to expand the correct object then display the newly expanded object
			for (int i = 0; i < sh.size(); i++) {
				sh[i]->expand(factor);
				sh[i]->display();
			}
			//call the maxSurfaceArea and maxVolume functions to determine which object has the largest area/volume
			maxSurfaceArea(sh);
			maxVolume(sh);
			//break out of the loop after this
			break;
		}
	}
}
//this will compare the objects from the object pointer list from the vector to see which object has the highest surface area
void maxSurfaceArea(vector<Shape*>& sh) {
	//compare each object to see which has the highest surface area
	int sh_num = 0;
	for (int i = 1; i < sh.size(); i++) {
		if ((sh[sh_num]->Area()) <= (sh[i]->Area())) {
			sh_num = i;
		}
	}
	//display which object has the highest surface area
	cout << "The shape with the largest surface area is: " << endl;
	sh[sh_num]->display();
}
//this will compare the objects from the object pointer list from the vector to see which object has the highest volume
void maxVolume(vector<Shape*>& sh) {
	//compare each object to see which has the highest volume
	int sh_num = 0;
	for (int i = 1; i < sh.size(); i++) {
		if ((sh[sh_num]->Volume()) <= (sh[i]->Volume())) {
			sh_num = i;
		}
	}
	//display which object has the highest volume
	cout << "The shape with the largest volume is: " << endl;
	sh[sh_num]->display();
}

void pause_215(bool have_newline)
{
	if (have_newline) {
		// Ignore the newline after the user's previous input.
		cin.ignore(256, '\n');
	}

	// Prompt for the user to press ENTER, then wait for a newline.
	cout << endl << "Press ENTER to continue." << endl;
	cin.ignore(256, '\n');
}