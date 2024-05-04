/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 09:25:35 by jv                #+#    #+#             */
/*   Updated: 2024/05/04 17:33:37 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::Zombie(void) { }

Zombie::~Zombie() {
    std::cout << this->name << ": destroyed!" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name) {
    this->name = name;
}