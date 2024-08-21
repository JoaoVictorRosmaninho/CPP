/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/08/20 22:21:44 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat") {

    this->brain = new Brain();

    std::cout << "Cat: Default Constructor Called!" << std::endl;
}

Cat::Cat( std::string const& type ) : Animal(type) {
    this->brain = new Brain();
    std::cout << "Cat: Constructor Called!" << std::endl;
}

Cat::~Cat( void ) {
    delete this->brain;
    std::cout << "Cat: Default Destructor Called!" << std::endl;
}

Cat::Cat( Cat& other) : Animal(other) {
    this->brain = new Brain(other.getBrain());
    std::cout << "Cat: Copy Constructor Called!" << std::endl;
};

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat: Attribution Operator Called!" << std::endl;

    delete this->brain;

    this->brain = new Brain(dynamic_cast<Cat const&>(other).getBrain());
    
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "Cat: Meowwwww" << std::endl;
}

Brain* Cat::getBrain ( void ) const {
    return this->brain;
}
