/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:26:02 by joao              #+#    #+#             */
/*   Updated: 2024/07/25 21:45:33 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource( void ) : learnedMats(0) { 
}

MateriaSource::~MateriaSource( void ) { 
     for (unsigned char i = 0; i < this->learnedMats; i++)
        delete (this->slots[i]);
}

MateriaSource::MateriaSource(const MateriaSource& other) : learnedMats(0) {

    if (this == &other) return ;

    for (unsigned char i = 0; i < other.getLearnedMats(); i++, learnedMats++)
        this->slots[i] = (other.getSlots() + i)->clone();
}


MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    
    if (this == &other) return *this;

    for (unsigned char i = 0; i < TOTAL_MATERIA; i++ ) {
        AMateria* tmp = other.getSlotsAt(i);
        
        if (tmp != 0) {

            delete (*this->slots + i);

            this->slots[i] = tmp->clone();
        } 
    }

    return *this;
}

AMateria* MateriaSource::getSlots( void ) const {
    return *this->slots;
}

AMateria* MateriaSource::getSlotsAt(unsigned char position) const {
    
    if (position > TOTAL_MATERIA)
        return 0;

    return (*this->slots + position);
}

unsigned char MateriaSource::getLearnedMats( void ) const {
    return this->learnedMats;
}

void MateriaSource::learnMateria(AMateria* materia) {

    if (this->learnedMats > TOTAL_MATERIA)
        return ;
    
    this->slots[this->learnedMats++] = materia; 
}

AMateria* MateriaSource::createMateria(std::string const& type) {
   for (unsigned char i = 0; i < this->learnedMats; i++) {
        if (this->slots[i]->getType() == type) 
            return this->slots[i]->clone();
   }
   return 0;
}