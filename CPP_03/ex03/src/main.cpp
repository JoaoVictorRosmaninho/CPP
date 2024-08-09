/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:13 by joao              #+#    #+#             */
/*   Updated: 2024/08/08 22:12:00 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "diamondTrap.hpp"

int main( void ) {

    DiamondTrap dt ( "PlayerOne" );
    

    std::cout << std::endl; 
    std::cout << "Status: " << dt << std::endl;

    std::cout << std::endl; 
    dt.highFivesGuys();

    std::cout << std::endl; 
    dt.guardGate();

    std::cout << std::endl; 
    std::cout << "Status: " << dt << std::endl;
    std::cout << std::endl; 

    std::cout << std::endl; 
    std::cout << "Attack: " << std::endl;


    dt.attack("TESTE");

    std::cout << std::endl; 


    dt.whoAmI();

    std::cout << std::endl; 
    return 0;
}