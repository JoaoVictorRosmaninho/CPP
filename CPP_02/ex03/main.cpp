#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a (Fixed(0), Fixed(0));
    Point b (Fixed(20), Fixed(0));
    Point c (Fixed(10), Fixed(30));
    Point p (Fixed(10), Fixed(15));

    std::cout << (Triangule::bsp(a, b, c,  p) == true ? "Inside" : "Outside") << std::endl;

    Point a1 (Fixed(0), Fixed(0));
    Point b1 (Fixed(10), Fixed(30));
    Point c1 (Fixed(20), Fixed(0));
    Point p1 (Fixed(30), Fixed(15));

    std::cout << (Triangule::bsp(a1, b1, c1,  p1) == true ? "Inside" : "Outside") << std::endl;
}