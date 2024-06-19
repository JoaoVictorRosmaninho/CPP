#include "Point.hpp"
#include "Fixed.hpp"


Fixed Triangule::area(Point const& a, Point const& b, Point const& c) {

    Fixed aux = (a.getX() * ( b.getY() - c.getY()) + b.getX() * ( c.getY() - a.getY() ) + c.getX() * (a.getY() - b.getY())) / 2.0;

    return Fixed( aux.toFloat() < 0.0 ? aux.toFloat() * -1.0 : aux.toFloat()); 
}

bool Triangule::bsp(Point const& a, Point const& b, Point const& c, Point const& point) {
    Fixed abc = area(a, b, c);
    Fixed pab = area(point, a, c);
    Fixed pbc = area(point, b, c);
    Fixed pac = area(point, a, b);

    std::cout << "pab: " << pab << std::endl;
    std::cout << "pbc: " << pbc << std::endl;
    std::cout << "pac: " << pac << std::endl;


    return ((pab + pbc + pac) == abc);
}