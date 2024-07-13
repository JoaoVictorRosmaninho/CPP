#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

    class Dog : public Animal {
        public:
             Dog( void );
             Dog( Dog& other );
             Dog( std::string const& type);
            ~Dog( void );

            Animal& operator=(Animal const& other);

            void   makeSound( void ) const;
            Brain* getBrain ( void ) const;
        private:
            Brain* brain;
    };

#endif