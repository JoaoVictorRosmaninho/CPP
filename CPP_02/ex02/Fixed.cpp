#include "Fixed.hpp"

Fixed::Fixed( void ) : _number ( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int number ) : _number ( number << _precision ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float number ) : _number ( this->round(number * ( 1 << _precision ))) { 
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _number ( other.getRawBits() ) {
    std::cout << "Copy constructor called" << std::endl;
};

Fixed::~Fixed( void) {
   std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_number = other.getRawBits();
    return *this;
}

std::ostream& operator<<( std::ostream& o,  const Fixed& f ) {
    return o << f.toFloat();
}

float Fixed::toFloat( void ) const {
    return ( static_cast<float>(this->_number) / static_cast<float>(( 1 << _precision)));
}

int Fixed::toInt( void ) const {
    return static_cast<int>(this->toFloat());
}

float Fixed::round(float n) {
    return floor(n + 0.5);
}

int Fixed::getRawBits( void ) const  {
   return this->_number;
}

void Fixed::setRawBits( const int raw ) {
   this->_number = raw;
} 