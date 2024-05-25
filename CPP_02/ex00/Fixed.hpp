#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
         Fixed();
         Fixed(const Fixed& fixed);        
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( const int raw );

        Fixed& operator=(const Fixed& other);
    private:
        int n;
        static const int precision = 8;
};

#endif