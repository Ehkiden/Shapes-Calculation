#pragma once
/*
File: cylinder.h
Purpose: provides the declaration of cylinder class and calls the functions from the cirlce class
Author: Jared Rigdon
*/
#ifndef CYLINDER_H
#define	CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle
{
public:
	Cylinder();	//default
	Cylinder(double r, double h);	//constructor

	virtual double Area();	//calculates the area

	virtual double Volume();	//calculates the volume

	void expand(int factor);

	virtual void display();	//displays the required info

private:
	double radius, height;	//stores the values


};


#endif