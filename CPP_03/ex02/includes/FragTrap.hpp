#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

 class FragTrap : public ClapTrap {

    public:
         FragTrap(std::string name);
         FragTrap(FragTrap& other);
        
        ~FragTrap( void );
        
        void highFivesGuys(void);
        
        std::string toString( void ) const ;
    private:
         FragTrap( void );

 };

#endif