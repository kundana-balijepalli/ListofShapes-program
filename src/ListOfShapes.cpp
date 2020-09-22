/*
 * ListOfShapes.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */


#include "ListOfShapes.h"

ListOfShapes::~ListOfShapes() {                  //destructor that deletes all objects in list
	int s = shapes.size();
	for (int i = 0; i < s; i++) {
		delete shapes[i];
		shapes[i] = 0;
	}
}

void ListOfShapes::addShape(Shape* shape) {		//Adding a shape to the vector
	shapes.push_back(shape);
}

void ListOfShapes::removeShape() {				// Removing shape from the list
	int s = shapes.size();
	Shape* rip = shapes.at(s-1);
	shapes.pop_back();
	delete rip;
}

void ListOfShapes::displayShapes() {			//Printing info of current shapes in list
	int s = shapes.size();
	for (int i = 0; i < s; i++) {
		shapes[i]->print();
	}
}

int ListOfShapes::sizeOf() {					//Finding size of the list
	return shapes.size();
}
