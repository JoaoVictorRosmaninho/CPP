/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/07/13 11:19:12 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void ) {
    std::cout << "WrongAnimal: Default Constructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string const & type ) : type(type) {    
    std::cout << "WrongAnimal: Constructor Called!" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal: Default Destructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal& other) : type(other.getType()) { 
    std::cout << "WrongAnimal: Copy Constructor Called!" << std::endl;
};

WrongAnimal::WrongAnimal( const WrongAnimal& other) : type(other.getType()) { 
    std::cout << "WrongAnimal: Copy Constructor Called!" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    this->type = other.getType();
    return *this;
}

std::string WrongAnimal::getType( void ) const {
    return this->type;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal: MakeSound Called!" << std::endl;
}
