#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "clapTrap.hpp"

 class FlagTrap : public ClapTrap {

    public:
         FlagTrap(std::string name);
         FlagTrap(FlagTrap& other);
        
        ~FlagTrap( void );
        
        void highFivesGuys(void);
        
    protected:
        std::string toString( void ) const ;
    private:
         FlagTrap( void );

 };

#endif