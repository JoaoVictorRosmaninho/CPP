#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <string>
# include "WrongAnimal.hpp"

    class WrongCat : public WrongAnimal {
        public:
             WrongCat( void );
             WrongCat( WrongCat& other);
            ~WrongCat( void );
             WrongCat( std::string const& type);


            void makeSound( void ) const;
    };

#endif