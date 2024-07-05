#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

    class Animal {
        public:
             Animal( void );
             Animal( std::string type );
             Animal( Animal& other);
            ~Animal( void );

            Animal& operator=(const Animal& other);
        
        protected:
            std::string type;
    };

#endif