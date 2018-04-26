#pragma once
/*
File: cuboid.h
Purpose: provides the declaration of cuboid class and calls the required functions from the rectangle class
Author: Jared Rigdon
*/
#ifndef CUBOID_H
#define	CUBOID_H

#include "Rectangle.h"

class Cuboid : public Rectangle
{
public:
	Cuboid();	//default constructor
	Cuboid(double l, double w, double h);	//constructor

	virtual double Area();	//calculates the area

	virtual double Volume();	//calculates the volume

	void expand(int factor);

	virtual void display();	//displays the required info

private:
	double length, width, height;	//stores the values


};


#endif