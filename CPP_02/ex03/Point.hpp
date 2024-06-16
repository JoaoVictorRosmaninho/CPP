#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
    public:
         Point( void );
        ~Point( void );
         Point( Point const& point);
         Point ( const Fixed x, const Fixed y);

         Point operator=(Point const& other);

         const Fixed getX( void ) const;
         const Fixed getY( void ) const;

    private:
        const Fixed x;
        const Fixed y;
};


namespace Triangule {
    Fixed area(Point const& a, Point const& b, Point const& c);
    bool bsp(Point const& a, Point const& b, Point const& c, Point const& point);
}


#endif