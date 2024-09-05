#include "Shape.h"
Shape::Shape(std::string name, std::string type):Shape(name,type){};

	

	// Getters
std::string Shape::getType() const {
    return _type;
};
std::string Shape::getName() const {
    return _name;
};


double getPerimeter();
void move(Point other); // add the Point to all the points of shape
void printDetails() ;