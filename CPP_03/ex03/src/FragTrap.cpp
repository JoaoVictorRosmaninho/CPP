/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:23:54 by joao              #+#    #+#             */
/*   Updated: 2024/08/13 08:53:40 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() { 
    this->hit_points    = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "Constructor for " << name << " has called from FragTrap" << std::endl;
   
    this->hit_points    = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "<FragTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
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
    return ClapTrap::toString() + "From  FragTrap!!!";
}