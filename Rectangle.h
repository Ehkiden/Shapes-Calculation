#pragma once
/*
File: rectangle.h
Purpose: provides the declaration of rectangle class and calls the required functions from shape class
Author: Jared Rigdon
*/
#ifndef RECTANGLE_H
#define	RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();	//default constructor
	Rectangle(double l, double w);	//constructor

	virtual double Volume();	//required to be called but returns no value

	virtual double Area();	//calculates the area with the guven values

	void expand(int factor);

	virtual void display();	//displays the required info

private:
	double length, width;	//stores the values

};

#endif
