#include "Arrow.h"

void Arrow::draw(const Canvas& canvas)
{
	canvas.draw_arrow(_source, _destination);
}
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}


Point Arrow::getSource(){
	return _source;
}


Point Arrow::getDestination(){
	return _destination;
}

Arrow::Arrow(Point a, Point b,std::string name , std::string type) : Arrow(a,b,name,type){}; 