/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:32:57 by joao              #+#    #+#             */
/*   Updated: 2024/08/27 23:25:44 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include <fstream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {

    private:
        std::string _target;
        
    public:
        ShrubberyCreationForm( std::string name );
        ShrubberyCreationForm( const ShrubberyCreationForm& other);

        virtual ~ShrubberyCreationForm( void );

        virtual       std::string            toString( void ) const;

        virtual       void                   execute(const Bureaucrat& bureaucrat) const;

        void                                 executeForm(void);         
};

#endif