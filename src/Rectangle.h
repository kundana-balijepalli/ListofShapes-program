/*
 * Rectangle.h
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
private:
	double length;
	double breadth;

public:
	Rectangle (double l, double b, string color);  //constructor that intiates variables
	virtual ~Rectangle();		//Destructor
	void print();				//Printing shape
};

#endif /* RECTANGLE_H_ */
