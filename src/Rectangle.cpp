/*
 * Rectangle.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#ifndef RECTANGLE_CPP_
#define RECTANGLE_CPP_

#include "Rectangle.h"

Rectangle::Rectangle(double l, double b, string color)	//constructor that intiates variables
:Shape (color)
{
	this->length = l;
	this->breadth = b;
}

Rectangle::~Rectangle() {}	//Destructor

void Rectangle::print() {		//Printing shape and its info
	cout << "Rectangle " << "L = " << length;
	cout << ", B = " << breadth;
	cout << ", area = " << length*breadth;
	cout << ", " << getcolor() << endl;
}

#endif /* RECTANGLE_CPP_ */
