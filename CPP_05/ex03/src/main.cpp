/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:33:25 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 18:14:02 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void ) {


    
    Bureaucrat bob("Bob", 10);

    PresidentialPardonForm* ppFormPtr = dynamic_cast<PresidentialPardonForm*>(Intern::makeForm("PresidentialPardon", "PresidentialPardon"));
    bob.signForm(*ppFormPtr);
    bob.executeForm(*ppFormPtr);
    

    RobotomyRequestForm* rrForm = dynamic_cast<RobotomyRequestForm*>(Intern::makeForm("RobotomyRequest", "RobotomyRequest"));
    bob.signForm(*rrForm);
    bob.executeForm(*rrForm);

    ShrubberyCreationForm* scForm = dynamic_cast<ShrubberyCreationForm*>(Intern::makeForm("ShrubberyCreation", "ShrubberyCreation"));
    bob.signForm(*scForm);
    bob.executeForm(*scForm);
    
    delete ppFormPtr;
    delete rrForm;
    delete scForm;
    
    return 0;
}