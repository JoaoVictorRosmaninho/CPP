#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstring>

    class Animal {
        public:
            Animal( void );
            Animal( Animal& other);
            Animal( const Animal& other);
            Animal( std::string const& type );

            virtual ~Animal( void );


            virtual Animal& operator=(const Animal& other) = 0;

            virtual void makeSound( void ) const  = 0;
        
            virtual std::string getType( void ) const = 0;
        protected:
            std::string type;
    };

#endif