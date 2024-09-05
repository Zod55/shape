#include "Circle.h"


void Circle::draw(const Canvas& canvas)
{
	canvas.draw_circle(getCenter(), getRadius());
}

void Circle::clearDraw(const Canvas& canvas)
{
	canvas.clear_circle(getCenter(), getRadius());
}

Circle::Circle(Point center, double radius, std::string type, std::string name) : Circle(center,radius,type,name){};

Point getCenter();

double Circle::getRadius(){
	return this->radius;
}

Point Circle::getCenter(){
	return this->center;
}

