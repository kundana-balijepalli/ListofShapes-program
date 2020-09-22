/*
 * Shape.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#include "Shape.h"

Shape::Shape(string color) {  ///Constructor that initiates variable color
	this-> color = color;
}

Shape::Shape() {			//Default constructor
	color = "none";
}

Shape::~Shape () {}			//Default destructor

const string& Shape::getcolor() {		//function to get the color from class
	return color;
}
