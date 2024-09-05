#include "Triangle.h"

void Triangle::draw(const Canvas& canvas)
{
	canvas.draw_triangle(_points[0], _points[1], _points[2]);
}

void Triangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_triangle(_points[0], _points[1], _points[2]);
}
Triangle::Triangle(Point a, Point b, Point c, std::string type, std::string name) : Triangle(a,b,c,type,name){};
