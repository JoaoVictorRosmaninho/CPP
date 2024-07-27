/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:20:34 by joao              #+#    #+#             */
/*   Updated: 2024/07/18 21:33:23 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
    
}

Cure::Cure( std::string const& type) : AMateria(type) {
    
}

Cure::Cure( Cure const& other) : AMateria(other) {
    
}

Cure::~Cure( void ) {
    
}

void Cure::use( ICharacter& target ) {
    std::cout << "* heals  " <<  target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone( void ) const {
    return new Cure(this->type);
}

Cure const& Cure::operator=(AMateria const& other) {
    
    return (*this = other);
}