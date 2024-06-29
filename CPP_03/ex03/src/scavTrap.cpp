/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:24 by joao              #+#    #+#             */
/*   Updated: 2024/06/29 16:39:45 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavTrap.hpp"


ScavTrap::ScavTrap( void ) : ClapTrap() { }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 20, 50) {
    std::cout << "Constructor for " << name << " has called from ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "Destructor for " << name << " has called From ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name, unsigned int ht, unsigned int ad, unsigned int ep) : ClapTrap(name, ht, ep, ad) { 
    std::cout << "Constructor for " << name << "has called from ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other.getName(), other.getHitPoints(), other.getEnergyPoints(), other.getAttackDamage()) { 
    std::cout << "Constructor for " << name << "has called From ScavTrap" << std::endl;
 }

void ScavTrap::attack(const std::string& target) {
    ClapTrap::attack(target);

    std::cout << "ClapTrap " <<  name <<  " attacks " << target << ", causing " << attack_damage <<  " points of damage! From ScavTrap"  << std::endl << std::flush;
}


void ScavTrap::guardGate( void ) const  {
    std::cout << "| ScavTrap | - is now in Gate keeper mode" << std::endl;
}

std::string ScavTrap::toString( void ) const {    
    return ClapTrap::toString() + " From ScavTrap!!";
}