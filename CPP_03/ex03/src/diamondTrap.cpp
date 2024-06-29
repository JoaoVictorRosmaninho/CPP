/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:19:22 by joao              #+#    #+#             */
/*   Updated: 2024/06/29 16:37:15 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "diamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FlagTrap(name), ScavTrap(name), name(name) {
    std::cout << "Constructor for " << name << " has called from DiamondTrap" << std::endl;
};

DiamondTrap::DiamondTrap( void ) : ClapTrap("_clap_name"), FlagTrap(""), ScavTrap(""), name("") {
    
};

DiamondTrap::~DiamondTrap( void ) {
    
};


void DiamondTrap::whoAmI( void ) const {
    std::cout << "My Name is: " << this->name << std::endl;
    std::cout << "My GrandFather Name is: " << ClapTrap::name << std::endl;
}

std::string DiamondTrap::toString( void ) const {
    return ClapTrap::toString() + "From DiamondTrap!!!";
}

