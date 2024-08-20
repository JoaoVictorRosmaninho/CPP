/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/07/13 11:19:40 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog( void ) : Animal("Dog") {
    std::cout << "Dog: Default Constructor Called!" << std::endl;
}

Dog::Dog( std::string const& type ) : Animal(type) {
    std::cout << "Dog: Constructor Called!" << std::endl;
}

Dog::~Dog( void ) {
    std::cout << "Dog: Default Destructor Called!" << std::endl;
}

Dog::Dog( Dog& other) : Animal(other) { 
    std::cout << "Dog: Copy Constructor Called!" << std::endl;
};

Animal& Dog::operator=(const Animal& other) {
    std::cout << "Dog: Attribution Operator Called!" << std::endl;
    return Animal::operator=(other);
}

void Dog::makeSound( void ) const {
    std::cout << "Dog: AUAUAUAUA" << std::endl;
}
