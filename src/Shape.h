/*
 * Shape.h
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#include <iostream>

#ifndef SHAPE_H_
#define SHAPE_H_
using namespace std;

class Shape {
private:
	string color;
public:
	 Shape();				//Default constructor
	 Shape(string color);	///Constructor that initiates variable colo
	 virtual ~Shape();		//Default destructor
	 const string& getcolor();	//function to get the color from class
	 virtual void print() = 0; // Abstract class as this function will be replaced by derived classes
};

#endif /* SHAPE_H_ */
