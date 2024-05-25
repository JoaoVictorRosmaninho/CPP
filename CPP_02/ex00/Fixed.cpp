#include "Fixed.hpp"


Fixed::Fixed( void ) : n ( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : n ( other.getRawBits() ) {
    std::cout << "Copy constructor called" << std::endl;
};

Fixed::~Fixed( void) {
   std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->n = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const  {
   std::cout << "getRawBits member function called" << std::endl;
   return this->n;
}

void Fixed::setRawBits( const int raw ) {
   this->n = raw;
} 