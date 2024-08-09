/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:23:54 by joao              #+#    #+#             */
/*   Updated: 2024/08/08 22:45:05 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flagTrap.hpp"

FlagTrap::FlagTrap( void ) : ClapTrap() { 
    this->hit_points    = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
    std::cout << "Constructor for " << name << " has called from FlagTrap" << std::endl;
   
    this->hit_points    = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other)
{
	std::cout << "<FlagTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FlagTrap::~FlagTrap( void ) {
    std::cout << "Destructor for " << name << " has called from FlagTrap" << std::endl;
}

void FlagTrap::highFivesGuys(void) {
    if (energy_points < 1 ) {
        std::cout << "| FlagTrap | - " << name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FlagTrap | - " << name << " high fives everybody." << std::endl;
    
    energy_points -= 1;
}

std::string FlagTrap::toString( void ) const {
    return ClapTrap::toString() + "From  FlagTrap!!!";
}