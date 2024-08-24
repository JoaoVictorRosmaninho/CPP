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
                                            : AForm(other) { }

PresidentialPardonForm::PresidentialPardonForm(void)
                                            : AForm("PresidentialPardonForm", false, 25, 5) { }


PresidentialPardonForm::~PresidentialPardonForm( void ) { }

std::string PresidentialPardonForm::toString( void ) const {
    return "PresidentialPardonForm: " + AForm::toString();
}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const {
    
    if (!this->getSigned()) 
        throw NotSignedException();

    if (bureaucrat.getGrade() > this->getGradeToExecute()) 
        throw GradeTooLowException();
        
    std::cout << "PresidentialPardonForm: " << bureaucrat.getName() << " has  been pardoned by Zaphod Beeblebrox" << std::endl;
}