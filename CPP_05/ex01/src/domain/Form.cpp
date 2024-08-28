/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:06:34 by joao              #+#    #+#             */
/*   Updated: 2024/08/27 22:43:50 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) 
          : _name(""),
            _signed(false),
            _signedGrade(150),
            _executeGrade(150) { }

Form::~Form( void ) { }

Form::Form(const std::string name, bool is_signed, const int signedGrade, const int executedGrade) 
          : _name(name),
            _signed(is_signed),
            _signedGrade(signedGrade),
            _executeGrade(executedGrade) 
{
    
    if ( signedGrade < 1 || executedGrade < 1 ) 
        throw GradeToHighException();
    
    if (signedGrade > 150 || executedGrade > 150) 
        throw GradeTooLowException();
}


Form::Form(const Form& other) 
          :  _name(other._name),
             _signed(other.getSigned()),
             _signedGrade(other.getSignedGrade()),
             _executeGrade(other.getExecutedGrade()) { }


const Form& Form::operator=(const Form& other) {
    if (this == &other) 
        return (*this);

    this->_signed = other.getSigned();

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
