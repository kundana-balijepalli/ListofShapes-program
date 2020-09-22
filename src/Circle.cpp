/*
 * Circle.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#include "Circle.h"

Circle::Circle(double radius, string color):Shape (color)	//Constructor to initiate variables
{
	this->radius = radius;
}

Circle::~Circle() {}		//destructor

void Circle::print() {		//Printing shape
	cout << "Circle " << "r = " << radius;
	cout << ", area = " << pi*radius*radius;
	cout << ", " << getcolor() << endl;
}


