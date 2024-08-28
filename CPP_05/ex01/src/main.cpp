/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:33:25 by joao              #+#    #+#             */
/*   Updated: 2024/08/27 22:49:12 by joao             ###   ########.fr       */
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

    return 0;
}