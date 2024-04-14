/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:20:38 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 17:39:29 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return zombies;
}