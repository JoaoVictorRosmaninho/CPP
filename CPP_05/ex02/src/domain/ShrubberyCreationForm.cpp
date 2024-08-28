/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:36:52 by joao              #+#    #+#             */
/*   Updated: 2024/08/27 23:25:31 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
                                            : AForm(other),
                                              _target(other._target) { }


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
                                            : AForm("ShrubberyCreationForm", false, 145, 137),
                                              _target(target) { }


ShrubberyCreationForm::~ShrubberyCreationForm( void ) { }

std::string ShrubberyCreationForm::toString( void ) const {
    return "ShrubberyCreationForm: " + AForm::toString();
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    
    if (!this->getSigned()) 
        throw NotSignedException();

    if (executor.getGrade() > this->getGradeToExecute()) 
        throw GradeTooLowException();


    std::ofstream fout( (this->_target + "_shrubbery").c_str());    

    fout << "                      ___" << std::endl;
    fout << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    fout << "             ,-'          __,,-- \\" << std::endl;
    fout << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    fout << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    fout << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    fout << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    fout << "     (     ,-'                  `." << std::endl;
    fout << "      `._,'     _   _             ;" << std::endl;
    fout << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    fout << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    fout << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    fout << "                \"Hb HH dF" << std::endl;
    fout << "                 \"HbHHdF" << std::endl;
    fout << "                  |HHHF" << std::endl;
    fout << "                  |HHH|" << std::endl;
    fout << "                  |HHH|" << std::endl;
    fout << "                  |HHH|" << std::endl;
    fout << "                  |HHH|" << std::endl;
    fout << "                  dHHHb" << std::endl;
    fout << "                .dFd|bHb.               o" << std::endl;
    fout << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    fout << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    fout << "##########################################" << std::endl;
}