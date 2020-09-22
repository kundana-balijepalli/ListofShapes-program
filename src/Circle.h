/*
 * Circle.h
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
#define pi 3.14

class Circle : public Shape {
private:
	double radius;

public:
	Circle (double radius, string color);		//Constructor to initiate variables
	virtual ~Circle();			//destructor
	void print();				//Printing shape
};

#endif /* CIRCLE_H_ */
