/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:55:58 by jv                #+#    #+#             */
/*   Updated: 2024/05/04 14:40:06 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl() {
    this->call[0] = &Harl::debug;
    this->call[1] = &Harl::info;
    this->call[2] = &Harl::warning;
    this->call[3] = &Harl::error;
}

Harl::~Harl() { }


void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"  << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"  << std::endl;
}

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."  << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
}

void Harl::complain( std::string level ) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    unsigned char i      = 0;

    while (i < N && levels[i].compare(level)) ++i;

    (this->*call[i])();
}