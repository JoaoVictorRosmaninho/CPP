/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/08/20 22:29:35 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog( void ) : Animal("Dog") {
    
    this->brain = new Brain();
    
    std::cout << "Dog: Default Constructor Called!" << std::endl;
}

Dog::Dog( std::string const& type ) : Animal(type) {
    
    this->brain = new Brain();
    
    std::cout << "Dog: Constructor Called!" << std::endl;
}

Dog::~Dog( void ) {

    delete this->brain;
    
    std::cout << "Dog: Default Destructor Called!" << std::endl;
}

Dog::Dog( Dog& other) : Animal(other), brain(other.getBrain()) { 
    this->brain = new Brain(other.getBrain());
    std::cout << "Dog: Copy Constructor Called!" << std::endl;
};

Dog& Dog::operator=(Animal const& other) {

    if (this == &other) return *this;

    std::cout << "Dog: Attribution Operator Called!" << std::endl;
    
    delete this->brain;

    this->brain = new Brain(dynamic_cast<Dog const&>(other).getBrain());

    return *this;
}

std::string Dog::getType( void ) const {
    return this->type;
}

void Dog::makeSound( void ) const {
    std::cout << "Dog: AUAUAUAUA" << std::endl;
}

Brain* Dog::getBrain ( void ) const {
    return this->brain;
}

