/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:20:34 by joao              #+#    #+#             */
/*   Updated: 2024/08/20 22:55:02 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
    
}

Ice::Ice( std::string const& type) : AMateria(type) {
    
}

Ice::Ice( Ice const& other) : AMateria(other) {
    
}

Ice::~Ice( void ) {
    
}

void Ice::use( ICharacter& target ) {
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone( void ) const {
    return new Ice(this->type);
}

Ice const& Ice::operator=(AMateria const& other) {
    if (this == &other) return *this;

    *this = other;

    return *this;
}