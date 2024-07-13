/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/07/13 11:19:12 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( void ) {
    std::cout << "Animal: Default Constructor Called!" << std::endl;
}

Animal::Animal( std::string const & type ) : type(type) {    
    std::cout << "Animal: Constructor Called!" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Animal: Default Destructor Called!" << std::endl;
}

Animal::Animal( Animal& other) : type(other.getType()) { 
    std::cout << "Animal: Copy Constructor Called!" << std::endl;
};

Animal::Animal( const Animal& other) : type(other.getType()) { 
    std::cout << "Animal: Copy Constructor Called!" << std::endl;
};

Animal& Animal::operator=(const Animal& other) {
    this->type = other.getType();
    return *this;
}

std::string Animal::getType( void ) const {
    return this->type;
}

void Animal::makeSound( void ) const {
    std::cout << "Animal: MakeSound Called!" << std::endl;
}
