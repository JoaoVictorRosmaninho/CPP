/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:33:25 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 00:02:28 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {
    
    Bureaucrat bob("bob", 150); 
    std::cout << bob << std::endl;

    Bureaucrat mike("mike", 1);
    std::cout << mike << std::endl;

    Form form("Login", false, 30, 40);
    

    bob.signForm(form);
    mike.signForm(form);

    try {
        Bureaucrat alice("alice", 0);
    } catch ( Bureaucrat::GradeTooHighException& e ) {
        std::cout << "Caught GradeTooHighException" << std::endl;

        std::cout << e.what() << std::endl;    
    } catch ( Bureaucrat::GradeTooLowException& e) {
        std::cout << "Caught GradeTooLowExcpetion" << std::endl;

        std::cout << e.what() << std::endl;
    }


    return 0;
}