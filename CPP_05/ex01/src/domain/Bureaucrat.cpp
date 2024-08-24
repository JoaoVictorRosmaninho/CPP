/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:40:55 by joao              #+#    #+#             */
/*   Updated: 2024/08/23 23:59:37 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( const std::string& name, unsigned char grade) : name(name) { 
    if ( grade < 1 )
        throw GradeTooHighException();
    
    if ( grade > 150 ) 
        throw GradeTooLowException();

    this->grade = grade;
}

Bureaucrat::~Bureaucrat() { }

void Bureaucrat::increment( void ) {
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement( void ) {
    if (this->grade - 1 < 1)
        throw GradeTooLowException(); 
    this->grade++;
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

void Bureaucrat::signForm( Form& f ) const {
    try {
        f.beSigned( *this );
        std::cout << this->name << " signed " << f.getName() << std::endl;
    } catch(Form::GradeTooLowException& e) {
        std::cout << this->name << " couldn't sign "  << f.getName() << " because: " << e.what() << std::endl; 
    }
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& other ) {
    return o << other.getName() << ", bureaucrat grade " << static_cast<int>(other.getGrade());
}