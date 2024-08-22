/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:33:25 by joao              #+#    #+#             */
/*   Updated: 2024/08/21 22:30:49 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"

int main( void ) {
    
    Bureaucrat bob("bob", 150); 
    std::cout << bob << std::endl;

    Bureaucrat mike("mike", 1);
    std::cout << mike << std::endl;

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