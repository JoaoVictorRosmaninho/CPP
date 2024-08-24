/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:42:54 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 14:43:07 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm(const std::string name, bool is_signed, int signedGrade, int executeGrade) 
            : _name(name),
              _signed(is_signed),
              _signedGrade(signedGrade),
              _executeGrade(executeGrade)  
{
    
    if (signedGrade < 1)   throw GradeToHighException();
    if (signedGrade > 150) throw GradeTooLowException();
    
    if (executeGrade < 1)   throw GradeToHighException();
    if (executeGrade > 150) throw GradeTooLowException();
}

AForm::~AForm( void ) { }

AForm::AForm(const AForm& other) 
            : _name(other._name),
              _signed(other._signed),
              _signedGrade(other._signedGrade),
              _executeGrade(other._executeGrade) { }

const AForm& AForm::operator=(const AForm& other)
{
    this->_name          = other.getName();
    this->_signed        = other._signed;
    this->_signedGrade   = other._signedGrade;
    this->_executeGrade  = other._executeGrade;

    return (*this);
}

std::ostream& operator<<( std::ostream& o, const AForm& someForm ) {
    return o << someForm.toString();
}

std::string AForm::toString( void ) const {
    
    std::stringstream out;
    
    out <<  this->getName() << "#"
        <<  this->getSigned()     << "#"
        <<  this->getSignedGrade() << "#"
        <<  this->getGradeToExecute();

    return out.str();
}


void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > this->_signedGrade ) 
        throw GradeTooLowException();
        
    this->_signed = true;
}

std::string AForm::getName( void ) const {
    return this->_name;
}

bool AForm::getSigned( void ) const {
    return this->_signed;
}

int AForm::getSignedGrade( void ) const {
    return this->_signedGrade;
}

int AForm::getGradeToExecute( void ) const {
    return this->_executeGrade;
}