/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:32:57 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 15:41:08 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( const ShrubberyCreationForm& other);

        virtual ~ShrubberyCreationForm( void );

        virtual       std::string            toString( void ) const;

        virtual       void                   execute(const Bureaucrat& bureaucrat) const;

        void                                 executeForm(void);         
};