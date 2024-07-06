#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

    class Animal {
        public:
             Animal( void );
             Animal( std::string type );
             Animal( Animal& other);
             Animal( const Animal& other);
            ~Animal( void );

            virtual Animal& operator=(const Animal& other);


            virtual void makeSound( void );

            std::string getType( void ) const;
        
        protected:
            std::string type;
    };

#endif