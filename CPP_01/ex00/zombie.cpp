/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 09:25:35 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 09:56:02 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name) {
    return new Zombie(name);
}

void Zombie::randomChump(std::string name) {
    Zombie zombie = Zombie(name);

    zombie.announce();
}
