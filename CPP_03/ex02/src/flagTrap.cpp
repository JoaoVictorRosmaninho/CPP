/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:23:54 by joao              #+#    #+#             */
/*   Updated: 2024/08/08 21:03:36 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flagTrap.hpp"

FlagTrap::FlagTrap( void ) : ClapTrap() { }

FlagTrap::FlagTrap(std::string name) : ClapTrap(name, 100, 30, 100) {
    std::cout << "Constructor for " << name << " has called from FlagTrap" << std::endl;
}

FlagTrap::~FlagTrap( void ) {
    std::cout << "Destructor for " << name << " has called from FlagTrap" << std::endl;
}

void FlagTrap::highFivesGuys(void) {
    if (energy_points < 1 ) {
        std::cout << "| FragTrap | - " << name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | - " << name << " high fives everybody." << std::endl;
    
    energy_points -= 1;
}

std::string FlagTrap::toString( void ) const {
    return ClapTrap::toString() + " From  FlagTrap!!!";
}