/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:31:08 by jv                #+#    #+#             */
/*   Updated: 2024/04/15 00:10:35 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {}

HumanB::HumanB(const std::string& name) : name(name) {
    this->weapon = nullptr;
}

HumanB::~HumanB() {}

void HumanB::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}