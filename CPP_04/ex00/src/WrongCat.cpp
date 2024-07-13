/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:24:30 by jv                #+#    #+#             */
/*   Updated: 2024/07/13 11:19:32 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat: Default Constructor Called!" << std::endl;
}

WrongCat::WrongCat( std::string const& type ) : WrongAnimal(type) {
    std::cout << "WrongCat: Constructor Called!" << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat: Default Destructor Called!" << std::endl;
}

WrongCat::WrongCat( WrongCat& other) : WrongAnimal(other) { 
    std::cout << "WrongCat: Copy Constructor Called!" << std::endl;
};

//void WrongCat::makeSound( void ) const {
//    std::cout << "WrongCat: Meowwwww" << std::endl;
//}
