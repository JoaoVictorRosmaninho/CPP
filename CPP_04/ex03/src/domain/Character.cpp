/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:09:29 by joao              #+#    #+#             */
/*   Updated: 2024/07/27 12:26:40 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( Character const& other) : name(other.getName()), used_slots(0) {

}

Character::Character( std::string const& name) : name(name), used_slots(0) {

}

Character::~Character( void ) {
    for (int i = 0; i < used_slots; i++) 
        delete (this->slots[i]);
}
std::string const& Character::getName( void ) const {
    return this->name;
}

void Character::equip(AMateria* m) {
    if (this->used_slots >= TOTAL_MATERIAS ) {
        std::cout << "ERROR: slots full" << std::endl;
        return ;
    }
    this->slots[used_slots++] = m;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= TOTAL_MATERIAS) {
        std::cout << "Error: index out of range in slots access" << std::endl;
        return ;
    }
    if (this->slots[idx] == 0)
        return;
        
    this->slots[idx] = 0;
}


AMateria* Character::getSlots( void ) const {
    return this->slots[0];
}

// Muito provavelmente, deve-se retornar um ponteiro
// Ver como outras pessoas fizeram
Character const& Character::operator=(Character const& other) {
    
    AMateria* other_slots = other.getSlots();

    for (unsigned char i = 0; i < TOTAL_MATERIAS; i++) {
        this->slots[i] = other_slots[i].clone(); // unsafe
    }

    return *this;
}



void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > used_slots) {
        std::cout << "Error: index out of range in slots access" << std::endl;
        return ;
    }
    
    this->slots[idx]->use(target);
}
