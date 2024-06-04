#include "Fixed.hpp"

Fixed::Fixed( void ) : _number ( 0 ) {
}

Fixed::Fixed( const int number, bool shift = true ) {
    if (shift) 
        this->_number = number << _precision;
    else
        this->_number = number;
    
}

Fixed::Fixed( const float number ) : _number ( this->round(number * ( 1 << _precision ))) { 
}

Fixed::Fixed(const Fixed& other) : _number ( other.getRawBits() ) {
};

Fixed::~Fixed( void) {
}

Fixed  Fixed::operator+(const Fixed& other) {
    Fixed result ( this->_number + other.getRawBits(), false );

    return result; 
}
Fixed  Fixed::operator-(const Fixed& other) {
    return Fixed ( this->_number - other.getRawBits(), false );
}
Fixed  Fixed::operator*(const Fixed& other) {
    return Fixed ( (this->_number * other.getRawBits()) / ( 1 << _precision ), false );
}
Fixed  Fixed::operator/(const Fixed& other) {
    return Fixed ( this->_number / other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other) {
    this->_number = other.getRawBits();
    return *this;
}

Fixed Fixed::operator++(const int) {
    Fixed tmp ( *this );
    tmp.setRawBits(this->_number + 1);
    return tmp;
}

Fixed& Fixed::operator++( void ) {
    ++this->_number;

    return *this;
}

Fixed Fixed::operator--(const int) {
    Fixed tmp ( *this );
    tmp.setRawBits(this->_number - 1);
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_number;

    return *this;
}

std::ostream& operator<<( std::ostream& o,  const Fixed& f ) {
    return o << f.toFloat();
}

bool Fixed::operator<(const Fixed& other) {
    return (this->_number < other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) {
    return !(*this < other);
}

bool Fixed::operator==(const Fixed& other) {
    return (this->_number == other.getRawBits());
}
bool Fixed::operator!=(const Fixed& other) {
    return !(*this == other);
}

bool Fixed::operator<=(const Fixed& other) {
    return ((*this < other) || (*this == other));
}

bool Fixed::operator>=(const Fixed& other) {
    return ((*this > other) || (*this == other));
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


Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return ( a < b ) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)  {
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return ( a > b ) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)  {
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}