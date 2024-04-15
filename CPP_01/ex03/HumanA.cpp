/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:31:08 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 23:42:57 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) { }

HumanA::~HumanA() { }

void HumanA::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}