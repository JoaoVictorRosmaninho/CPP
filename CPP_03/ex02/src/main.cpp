/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:13 by joao              #+#    #+#             */
/*   Updated: 2024/06/29 14:44:57 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"
#include "flagTrap.hpp"

int main( void ) {

    FlagTrap ft ( "PlayerOne" );

    std::cout << std::endl; 
    std::cout << "Status: " << ft << std::endl;

    std::cout << std::endl; 
    ft.highFivesGuys();

    std::cout << std::endl; 
    std::cout << "Status: " << ft << std::endl;
    std::cout << std::endl; 
    return 0;
}