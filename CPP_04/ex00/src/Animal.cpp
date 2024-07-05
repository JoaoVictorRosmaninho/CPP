/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/07/03 23:38:32 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( void ) {
    std::cout << "Animal: Default Constructor Called!" << std::endl;
}

Animal::Animal( std::string type ) : type(type) {
    std::cout << "Animal: Constructor Called!" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Animal: Default Destructor Called!" << std::endl;
}

Animal::Animal( Animal& other) : Animal(other) { };
