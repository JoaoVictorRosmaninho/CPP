#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

    class Cat : public Animal {
        public:
             Cat( void );
             Cat( Cat& other);
             Cat( std::string type);
            ~Cat( void );

            Cat operator=(const Cat& other);

            void makeSound( void );
    };

#endif