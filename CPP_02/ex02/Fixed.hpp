#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
         Fixed();
         Fixed(const int number, bool shift);
         Fixed(const float number);
         Fixed(const Fixed& fixed);        
        ~Fixed();

        int   getRawBits( void ) const;
        int   toInt( void ) const;
        void  setRawBits( const int raw );
        float toFloat( void ) const; 

        Fixed&  operator=(const Fixed& other);
        bool    operator<(const Fixed& other);
        bool    operator>(const Fixed& other);
        bool    operator==(const Fixed& other);
        bool    operator!=(const Fixed& other);
        bool    operator>=(const Fixed& other);
        bool    operator<=(const Fixed& other);
        
        Fixed   operator+(const Fixed& other);
        Fixed   operator-(const Fixed& other);
        Fixed   operator*(const Fixed& other);
        Fixed   operator/(const Fixed& other);

        Fixed   operator++(const int);
        Fixed&  operator++(void);
        
        Fixed   operator--(const int);
        Fixed&  operator--(void);

        /* Static functions */

        static Fixed& min(Fixed& a, Fixed& b);
        const static Fixed& min(const Fixed& a, const Fixed& b);

        static Fixed& max(Fixed& a, Fixed& b);
        const static Fixed& max(const Fixed& a, const Fixed& b);

    private:
        int _number;
        static const int _precision = 8;

        float round(float n);
    
     std::ostream& operator<<( std::ostream& o,  const Fixed& f );
};
    

#endif