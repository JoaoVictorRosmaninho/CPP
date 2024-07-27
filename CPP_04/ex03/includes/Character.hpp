#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <string>
#include <iostream>

#include "ICharacter.hpp"

#define TOTAL_MATERIAS 4

class Character : public ICharacter {
    public:
         Character( void );
         Character( Character const& other );
         Character( std::string const& name );
       
        ~Character( void );

        std::string const& getName( void ) const;

        void equip(AMateria* m);

        void unequip(int idx);

        void use(int idx, ICharacter& target);

        AMateria* getSlots( void ) const;


        Character const& operator=(Character const& other);

    private:
        std::string const& name;
        
        int used_slots;

        AMateria* slots[TOTAL_MATERIAS];
};

#endif