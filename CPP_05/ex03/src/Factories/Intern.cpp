/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:27:26 by joao              #+#    #+#             */
/*   Updated: 2024/08/27 23:34:00 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


AForm* Intern::makeForm(std::string type, std::string name) {
    switch (type.at(0))
    {
        case 'P':
            return new PresidentialPardonForm(name);
        case 'R': 
            return new RobotomyRequestForm(name);
        case 'S':
            return new ShrubberyCreationForm(name);  
        default:
            return (NULL);    
    }
}