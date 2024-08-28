/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:36:52 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 14:49:16 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) 
                                            : AForm(other),
                                              _target(other._target) { }


PresidentialPardonForm::PresidentialPardonForm(std::string target)
                                            : AForm("PresidentialPardonForm", false, 25, 5),
                                              _target(target) { }



PresidentialPardonForm::~PresidentialPardonForm( void ) { }

std::string PresidentialPardonForm::toString( void ) const {
    return "PresidentialPardonForm: " + AForm::toString();
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    
    if (!this->getSigned()) 
        throw NotSignedException();

    if (executor.getGrade() > this->getGradeToExecute()) 
        throw GradeTooLowException();
        
    std::cout << "PresidentialPardonForm: " << this->_target << " has  been pardoned by Zaphod Beeblebrox" << std::endl;
}