#include "Point.hpp"


Point::Point( void ) : x(0), y(0) { };

Point::~Point( void ) {};

Point::Point( Point& point) : x(point.getX()), y(point.getY()) {};

Point::Point ( const Fixed x, const Fixed y) : x(x), y(y) {};


const Fixed Point::getX( void ) const {
    return this->x;
}

const Fixed Point::getY( void ) const {
    return this->y;
}

Point Point::operator=(Point const& other) {
    Point point(point);
    
    return point;
}