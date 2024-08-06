/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:40:55 by joao              #+#    #+#             */
/*   Updated: 2024/08/05 23:51:46 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( const std::string& name, unsigned char grade) : grade(grade), name(name) {
    
}

Bureaucrat::~Bureaucrat() {
    
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    this->grade = other.getGrade();
    return *this;
}

const std::string& Bureaucrat::getName( void ) const {
    return this->name;
}

unsigned char Bureaucrat::getGrade( void ) const {
    return this->grade;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& other ) {
    return o << other.getName() << ",  bureaucrat grade " << other.getGrade() << std::endl;
}