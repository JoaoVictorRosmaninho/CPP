#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "clapTrap.hpp"

 class FlagTrap : virtual public ClapTrap {

    public:
         FlagTrap( void );
         FlagTrap(std::string name);
         FlagTrap(FlagTrap& other);
         FlagTrap(const FlagTrap& other);
        
        ~FlagTrap( void );
        
        void highFivesGuys(void);
        
        std::string toString( void ) const ;
    private:

 };

#endif