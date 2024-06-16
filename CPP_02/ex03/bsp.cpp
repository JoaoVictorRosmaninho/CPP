#include "Point.hpp"
#include "Fixed.hpp"


Fixed Triangule::area(Point const& a, Point const& b, Point const& c) {
    return a.getX() * ( b.getY() - c.getY()) + b.getX() * ( c.getY() - a.getY() ) + c.getX() * (a.getY() - b.getY());
}

bool Triangule::bsp(Point const& a, Point const& b, Point const& c, Point const& point) {
    Fixed abc = area(a, b, c);
    Fixed pab = area(point, a, b);
    Fixed pbc = area(point, b, c);
    Fixed pac = area(point, a, c);

    return ((pab + pbc + pac) == abc);
}