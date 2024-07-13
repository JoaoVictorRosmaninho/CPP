#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

    class WrongAnimal {
        public:
              WrongAnimal( void );
              WrongAnimal( WrongAnimal& other);
              WrongAnimal( const WrongAnimal& other);
              WrongAnimal( std::string const& type );

              WrongAnimal& operator=(const WrongAnimal& other);
              ~WrongAnimal( void );


            void makeSound( void ) const;

            std::string getType( void ) const;
        
        protected:
            std::string type;
    };

#endif