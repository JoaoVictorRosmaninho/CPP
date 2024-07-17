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

            Dog& operator=(Animal const& other);

            std::string getType(void) const;
            void   makeSound( void ) const;
            Brain* getBrain ( void ) const;
        private:
            Brain* brain;
    };

#endif