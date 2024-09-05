#include "Point.h"
#include<cmath>

Point::Point(){
    m_x = 0;
    m_y =0;

}


Point::Point(double x, double y):Point(x,y){};

		
Point Point::operator+(const Point& other) const{
    Point tmp;
    tmp.m_x = other.getX() + this->getX();
    tmp.m_y = other.getY() + this->getY();
    return tmp;
}
Point& Point::operator+=(const Point& other) {
    this->m_x  += other.getX();
    this->m_y += other.getY();
    return *this;    
};

	// Getters
double Point::getX() const{
    return m_x;
};
double Point::getY() const{
     return m_y;
};

// Methods
double Point::distance(Point& other){
    //distance function
   return sqrt(pow((other.getX() - this->getX()),2) + pow((other.getY() - this->getY()),2));
};