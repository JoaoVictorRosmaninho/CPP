/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 09:57:06 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 17:46:52 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void) {
    Zombie zombie = Zombie("Caso numero 1");

    // zumbi infectou  10 pessoas
    zombie.announce();
    Zombie* newZombies = zombie.zombieHorde(10, "zumbi");

    for (int i = 0; i < 10; i++)
        newZombies[i].announce();
    
    delete [] newZombies;
    return (0);
}