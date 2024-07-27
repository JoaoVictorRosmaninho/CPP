/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:40:36 by joao              #+#    #+#             */
/*   Updated: 2024/07/27 12:24:48 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
    
}

AMateria::AMateria( std::string const& type) : type(type) {
    
}

AMateria::AMateria( AMateria const& other) : type(other.getType()) {
    
}

AMateria::~AMateria( void ) {
    
}

AMateria const& AMateria::operator=(AMateria const& other) {
    this->type = other.getType();

    return *this;
}

std::string const& AMateria::getType( void ) const {
    return this->type;
}

void AMateria::use(ICharacter& target) {
    (void) target;

    std::cout << "Amateria use called!" << std::endl;
}