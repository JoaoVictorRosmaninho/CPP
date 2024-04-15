/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:20:00 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 23:25:50 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::Weapon(void) { }

Weapon::~Weapon(void) { }

void Weapon::setType(const std::string type) {
    this->type = type;
}

const std::string& Weapon::getType() {
    return this->type;
}