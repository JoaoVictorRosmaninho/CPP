/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 09:57:06 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 13:56:31 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void) {
    // Alocando na STACK
    Zombie z_stack = Zombie("stack zombie");
    z_stack.announce();

    // Alocando na HEAP
    Zombie* z_heap = new Zombie("heap zombie");
    z_heap->announce();
    delete z_heap;

    return (0);
}