#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

    class Dog : public Animal {
        public:
             Dog( void );
             Dog( Dog& other );
             Dog( std::string const& type);
            ~Dog( void );

            Animal& operator=(const Animal& other);

            void makeSound( void ) const ;

    };

#endif