/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:33:25 by joao              #+#    #+#             */
/*   Updated: 2024/08/27 22:26:02 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"

int main( void ) {
    
    Bureaucrat bob("bob", 3); 
    std::cout << bob << std::endl;

    Bureaucrat mike("mike", 1);
    std::cout << mike << std::endl;

    
    std::cout << "Decrement Mike" << std::endl;
    mike.decrement();
    std::cout << mike << std::endl;
    
    std::cout << "Increment Bob" << std::endl;
    bob.increment();
    std::cout << bob << std::endl;


    try {
        Bureaucrat alice("alice", 0);
    } catch ( Bureaucrat::GradeTooHighException& e ) {
        std::cout << "Caught GradeTooHighException -> " << e.what() << std::endl;

    } catch ( Bureaucrat::GradeTooLowException& e) {
        std::cout << "Caught GradeTooLowException -> " << e.what() <<  std::endl;

        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat alice("alice", 151);
    } catch ( Bureaucrat::GradeTooHighException& e ) {
        std::cout << "Caught GradeTooHighException -> " << e.what() << std::endl;

    } catch ( Bureaucrat::GradeTooLowException& e) {
        std::cout << "Caught GradeTooLowException -> " << e.what() <<  std::endl;

        std::cout << e.what() << std::endl;
    }


    return 0;
}