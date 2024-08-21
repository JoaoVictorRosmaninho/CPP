#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

    class Cat : public Animal {
        public:
             Cat( void );
             Cat( Cat& other);
             Cat( std::string const& type);
            ~Cat( void );

            Cat& operator=(const Cat& other);

            void   makeSound( void ) const;
            Brain* getBrain ( void ) const;


        private:
            Brain* brain;
    };

#endif