#pragma once
/*
File: circle.h
Purpose: provides the declaration of circle class and calls the functions from the shape class
Author: Jared Rigdon
*/
#ifndef CIRCLE_H
#define	CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
public:
	Circle();  //default constructor
	Circle(double r);	//constructor

	virtual double Volume();	//required to be called but returns no value

	virtual double Area();		//calculates the area of the circle

	void expand(int factor);

	virtual void display();		//displays the required info

private:
	double radius;	//stores the radius
};


#endif
