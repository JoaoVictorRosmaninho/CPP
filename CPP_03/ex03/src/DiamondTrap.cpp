/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:19:22 by joao              #+#    #+#             */
/*   Updated: 2024/08/13 08:53:32 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("_clap_name"), ScavTrap(""),  FragTrap(""), name("") {
    std::cout << "Default Constructor for " << "DiamondTrap" << " has called" << std::endl;

    this->hit_points    = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), 
                                             ScavTrap(name + "_clap_name"), 
                                             FragTrap(name + "_clap_name"), 
                                             name(name)
{
    std::cout << "Constructor for " << name << " has called from DiamondTrap" << std::endl;
    
    this->hit_points    = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
};

DiamondTrap::DiamondTrap(const DiamondTrap& other) 
	: ClapTrap(other.name + "_clap_trap"), ScavTrap(other.name + "_clap_trap"), FragTrap(other.name + "_clap_trap")
{
	std::cout << "<DiamondTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	this->name = other.name;
	this->hit_points     = FragTrap::hit_points;
	this->energy_points  = ScavTrap::energy_points;
	this->attack_damage  = FragTrap::attack_damage;
}


DiamondTrap::~DiamondTrap( void ) {
    std::cout << "# DiamondTrap # - " << this->name << " is dead." << std::endl;
};


void DiamondTrap::whoAmI( void ) const {
    std::cout << "My Name is: " << this->name << std::endl;
    std::cout << "My GrandFather Name is: " << ClapTrap::name << std::endl;
}

std::string DiamondTrap::toString( void ) const {
    return ClapTrap::toString() + " From DiamondTrap!!!";
}

