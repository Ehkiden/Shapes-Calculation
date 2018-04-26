#pragma once
/*
File: Sphere.h
Purpose: provides the declaration of sphere class and calls the required functions from the shape class
Author: Jared Rigdon
*/
#ifndef SPHERE_H
#define	SPHERE_H

#include "Circle.h"

class Sphere : public Circle
{
public:
	Sphere();	//default
	Sphere(double r);	//constructor

	double Area();	//calculates the area

	double Volume();	//calculates the volume

	void expand(int factor);

	virtual void display();	//displays the required info

private:
	double radius;	//stores the required info

};
#endif