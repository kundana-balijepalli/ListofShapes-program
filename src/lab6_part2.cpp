//============================================================================
// Name        : lab6_part2.cpp
// Author      : Kundana B
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Rectangle.h"
#include "Circle.h"
#include "ListOfShapes.h"

int main() {
	ListOfShapes* list = new ListOfShapes;
	bool leave = false;
	int choice;
	double length, breadth, radius;
	string color;
	while(!leave) {

		//Main menu that displays the options
		cout << "==================" << endl;
		cout << "[Shape List]" << endl;
		cout << "There are currently " << list->sizeOf() << " shape(s) in the list"<< endl;

		cout << endl << "Please choose an option:" << endl;
		cout << "1. Add Rectangle" << endl;
		cout << "2. Add Circle" << endl;
		cout << "3. Remove Shape" << endl;
		cout << "4. Display Shapes" << endl;
		cout << "5. Quit" << endl;

		cin >> choice;  // option selected from the menu provided above

		switch(choice) {
		case 1: { //Option 1: Add Rectangle
			cout << "====================" << endl;
			cout << "[Add Rectangle]" << endl;
			cout << "Enter Color: ";
			cin >> color;
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter breadth: ";
			cin >> breadth;
			cout << ".. [Adding Rectangle]" << endl;
			Rectangle* rect = new Rectangle(length, breadth, color);
			list->addShape(rect);
			break;
		}
		case 2: { //Option 2: Add Circle
			cout << "====================" << endl;
			cout << "[Add Circle]" << endl;
			cout << "Enter Color: ";
			cin >> color;
			cout << "Enter radius: ";
			cin >> radius;
			cout << ".. [Adding Circle]" << endl;
			Circle* circle = new Circle(radius, color);
			list->addShape(circle);
			break;
		}
		case 3: { // Option 3: Remove a shape from the list
			cout << "====================" << endl;
			cout << ".. [Removing Shape]" << endl;
			list->removeShape();
			cout << endl;
			break;
		}
		case 4: { //Option 4: Display # of shapes and its info from the list
			cout << "====================" << endl;
			cout << "[Display Shapes]" << endl << endl;
			list->displayShapes();
			cout << endl;
			break;
		}
		default: {
			leave = true;
			break;
		}
		}
	}

	delete list;  //deleting entire list and freeing memory before terminating the program
	list = 0;
	return(0);
}
