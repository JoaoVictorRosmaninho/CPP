/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/07/13 11:19:32 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat") {
    std::cout << "Cat: Default Constructor Called!" << std::endl;
}

Cat::Cat( std::string const& type ) : Animal(type) {
    std::cout << "Cat: Constructor Called!" << std::endl;
}

Cat::~Cat( void ) {
    std::cout << "Cat: Default Destructor Called!" << std::endl;
}

Cat::Cat( Cat& other) : Animal(other) { 
    std::cout << "Cat: Copy Constructor Called!" << std::endl;
};

Animal& Cat::operator=(const Animal& other) {
    std::cout << "Cat: Attribution Operator Called!" << std::endl;
    return Animal::operator=(other);
}

void Cat::makeSound( void ) const {
    std::cout << "Cat: Meowwwww" << std::endl;
}
