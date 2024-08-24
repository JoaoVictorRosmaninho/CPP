/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:27:26 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 18:13:10 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


AForm* Intern::makeForm(std::string type, std::string name) {

    static std::string names[] = {
        "PresidentialPardon",
        "RobotomyRequest",
        "ShrubberyCreation"
    };

    unsigned char index = 0;
    for ( ; index < 3; index++) {
        if (names[index] == type)
            break;
    }

    switch (index)
    {
        case 0:
            return new PresidentialPardonForm(name);
        case 1: 
            return new RobotomyRequestForm(name);
        case 2:
            return new ShrubberyCreationForm(name);  
        default:
            return (NULL);    
    }
}