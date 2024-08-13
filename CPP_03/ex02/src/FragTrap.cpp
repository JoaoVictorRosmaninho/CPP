/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:23:54 by joao              #+#    #+#             */
/*   Updated: 2024/08/13 08:43:59 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
  //iniciar valores 
 }

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 30, 100) {
    std::cout << "Constructor for " << name << " has called from FragTrap" << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "Destructor for " << name << " has called from FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    if (energy_points < 1 ) {
        std::cout << "| FragTrap | - " << name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | - " << name << " high fives everybody." << std::endl;
    
    energy_points -= 1;
}

std::string FragTrap::toString( void ) const {
    return ClapTrap::toString() + " From  FragTrap!!!";
}