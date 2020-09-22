/*
 * ListOfShapes.h
 *
 *  Created on: Nov 16, 2017
 *      Author: kbalijep
 */

#ifndef LISTOFSHAPES_H_
#define LISTOFSHAPES_H_
#include <vector>
#include "Shape.h"

class ListOfShapes {
private:
vector<Shape*> shapes;

public:
	~ListOfShapes();	//destructor that deletes all objects in list
	void addShape(Shape* shape);		//Adding a shape to the vector
	void removeShape();				// Removing shape from the list
	void displayShapes();			//Printing info of current shapes in list
	int sizeOf();					//Finding size of the list

};

#endif /* LISTOFSHAPES_H_ */
