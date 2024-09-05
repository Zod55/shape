#include "Rectangle.h"



void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}

void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}


myShapes::Rectangle::Rectangle(Point a, double length, double width, std::string type, std::string name) : myShapes::Rectangle(a,length,width,type,name){};

