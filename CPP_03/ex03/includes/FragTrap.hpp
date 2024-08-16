#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

 class FragTrap : virtual public ClapTrap {

    public:
         FragTrap( void );
         FragTrap(std::string name);
         FragTrap(FragTrap& other);
         FragTrap(const FragTrap& other);
        
        ~FragTrap( void );
        
        void highFivesGuys(void);
        
        std::string toString( void ) const ;
 };

#endif