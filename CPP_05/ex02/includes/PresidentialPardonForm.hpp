/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:32:57 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 14:46:08 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib> 

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( const PresidentialPardonForm& other);

        virtual ~PresidentialPardonForm( void );

        virtual       std::string            toString( void ) const;

        virtual       void                   execute(const Bureaucrat& bureaucrat) const;

        void                                 executeForm(void);         
};