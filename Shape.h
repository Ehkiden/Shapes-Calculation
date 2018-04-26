#pragma once
/*
File: Shape.h
Purpose: provides the declaration of shapes class
Author: Jared Rigdon
*/

#ifndef SHAPE_H
#define	SHAPE_H

class Shape
{
public:
	Shape() {}	//constructor
	//pure virtual functions that reference to the correct class according to the pointer
	virtual double Area() = 0;	
	virtual double Volume() = 0;
	virtual void display() = 0;
	virtual void expand(int factor) = 0;
	//deconstructor
	virtual ~Shape() {};
};

#endif