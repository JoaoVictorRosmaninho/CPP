#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
         Fixed();
         Fixed(const int number);
         Fixed(const float number);
         Fixed(const Fixed& fixed);        
        ~Fixed();

        int   getRawBits( void ) const;
        int   toInt( void ) const;
        void  setRawBits( const int raw );
        float toFloat( void ) const; 


        
        Fixed& operator=(const Fixed& other);
    private:
        int _number;
        static const int _precision = 8;

        float round(float n);
    
    friend std::ostream& operator<<( std::ostream& o,  const Fixed& f );
};
    

#endif