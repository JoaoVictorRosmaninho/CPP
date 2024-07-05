#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

    class Dog : public Animal {
        public:
             Dog( void );
             Dog( Dog& other );
             Dog( std::string type);
            ~Dog( void );

            Dog operator=(const Dog& other);

            void makeSound( void );
    };

#endif