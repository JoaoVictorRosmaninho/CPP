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
            Animal& operator=(const Animal& other);
            
            virtual ~Animal( void );


            virtual void makeSound( void ) const;

            std::string getType( void ) const;
        
        protected:
            std::string type;
    };

#endif