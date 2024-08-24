/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:06:34 by joao              #+#    #+#             */
/*   Updated: 2024/08/23 23:49:24 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) {
    this->_name          = "";
    this->_signed        = false;
    this->_signedGrade   = 150;
    this->_executeGrade  = 150;
}

Form::~Form( void ) {
    
}

Form::Form(const std::string name, bool is_signed, int signedGrade, int executedGrade) {
    
    if (signedGrade < 1)   throw GradeToHighException();
    if (signedGrade > 150) throw GradeTooLowException();
    
    if (executedGrade < 1)   throw GradeToHighException();
    if (executedGrade > 150) throw GradeTooLowException();
    
    this->_name          = name;
    this->_signed        = is_signed;
    this->_signedGrade   = signedGrade;
    this->_executeGrade  = executedGrade;
}


Form::Form(const Form& other) :  _name(other._name) {
    this->_signed        = other._signed;
    this->_signedGrade   = other._signedGrade;
    this->_executeGrade  = other._executeGrade;
}


const Form& Form::operator=(const Form& other) {
    this->_name          = other.getName();
    this->_signed        = other._signed;
    this->_signedGrade   = other._signedGrade;
    this->_executeGrade  = other._executeGrade;

    return (*this);
}

std::ostream& operator<<( std::ostream& o, const Form& form ) {
    const std::string signedStatus = static_cast<const std::string>(form.getSigned() == true ? "true" : "false");

    return o <<  form.getName()        << "#"
             <<  signedStatus          << "#"
             <<  form.getSignedGrade() << "#"
             <<  form.getExecutedGrade();
}


void Form::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > this->_signedGrade ) 
        throw GradeTooLowException();
        
    this->_signed = true;
}

std::string Form::getName( void ) const {
    return this->_name;
}

bool Form::getSigned( void ) const {
    return this->_signed;
}

int Form::getSignedGrade( void ) const {
    return this->_signedGrade;
}

int Form::getExecutedGrade( void ) const {
    return this->_executeGrade;
}
