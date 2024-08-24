/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:36:52 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 14:49:16 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) 
                                            : AForm(other) { }

RobotomyRequestForm::RobotomyRequestForm(void)
                                            : AForm("RobotomyRequestForm", false, 72, 45) { }


RobotomyRequestForm::~RobotomyRequestForm( void ) { }

std::string RobotomyRequestForm::toString( void ) const {
    return "RobotomyRequestForm: " + AForm::toString();
}

void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const {
    if (!this->getSigned()) 
        throw NotSignedException();

    if (bureaucrat.getGrade() > this->getGradeToExecute()) 
        throw GradeTooLowException();

    std::srand(std::time(0));

    std::cout << "Make some drilling noises" << std::endl;
    if (std::rand() % 10 < 5) {
        std::cout << "RobotomyRequestForm: " << bureaucrat.getName() << " has robotomized successfully! " << std::endl;
    } else {
        std::cout << "RobotomyRequestForm: " << bureaucrat.getName() << " robotomized failed!" << std::endl;
    }
}