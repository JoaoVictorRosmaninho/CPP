/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:13 by joao              #+#    #+#             */
/*   Updated: 2024/08/08 20:59:31 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"
#include "scavTrap.hpp"

int main( void ) {

    ScavTrap scav("joao"); 

    scav.attack("Pedro");

    scav.guardGate();
    
    return 0;
}