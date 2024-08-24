/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:33:25 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 16:38:21 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {
    {
        std::cout << "------------- ShrubberyCreationForm::execute  --------------" << std::endl; 
        ShrubberyCreationForm scForm;

        Bureaucrat mike("mike", 1);
        std::cout << mike << std::endl;
        
        // shoud print be successfull
        mike.signForm(scForm);
        mike.executeForm(scForm);

    } 
    {
        ShrubberyCreationForm scForm;
        
        Bureaucrat bob("bob", 150); 
        std::cout << bob << std::endl;
        
        // shoud print a error
        bob.executeForm(scForm);
        std::cout << "------------- ShrubberyCreationForm::execute  --------------" << std::endl << std::endl; 
    }

    {
        std::cout << "------------- RobotomyRequestForm::execute  --------------" << std::endl; 

        Bureaucrat alice("alice", 74);
        
        RobotomyRequestForm rrForm;

        alice.signForm(rrForm);

        alice = Bureaucrat("alice", 40);
        
        alice.signForm(rrForm);

        alice.executeForm(rrForm);
        std::cout << "------------- RobotomyRequestForm::execute  --------------" << std::endl << std::endl; 
    }
    {
        std::cout << "------------- PresidentialPardonForm::execute  --------------" << std::endl; 


        PresidentialPardonForm ppForm;

        Bureaucrat alice("alice", 26);
        
        alice.signForm(ppForm);
        alice.executeForm(ppForm);

        alice  = Bureaucrat("alice", 4);

        alice.signForm(ppForm);
        alice.executeForm(ppForm);
        
        std::cout << "------------- PresidentialPardonForm::execute  --------------" << std::endl; 
    }

    return 0;
}