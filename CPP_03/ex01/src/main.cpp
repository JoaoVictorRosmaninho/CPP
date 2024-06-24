/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:13 by joao              #+#    #+#             */
/*   Updated: 2024/06/23 23:24:26 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"
#include "scavTrap.hpp"

int main( void ) {

    ScavTrap scav("joao"); 

    std::cout << "\n";
    std::cout << "Status: " << scav << std::endl;
    std::cout << "\n";
    scav.attack("Pedro");
    std::cout << "\n";
    std::cout << "Status: " << scav << std::endl;
    std::cout << "\n";
    scav.guardGate();
    std::cout << "\n";
    return 0;
}