/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:34:34 by joao              #+#    #+#             */
/*   Updated: 2024/08/24 14:05:47 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception> 
#include "AForm.hpp"
    
    class AForm;
    
    class Bureaucrat {
        public:
             Bureaucrat( const std::string& name, unsigned char grade );
             Bureaucrat( const Bureaucrat& other );
             Bureaucrat( void );

            ~Bureaucrat( void );

            void               increment( void );
            
            void               decrement( void );

            const Bureaucrat&  operator=(const Bureaucrat& other);

            const std::string& getName( void ) const;
            
            unsigned char      getGrade( void ) const;

            void               signForm( AForm& f ) const;

            void               executeForm( const AForm& f) const;

            class GradeTooHighException : public std::exception {
                public:
                    const char* what() const throw() {
                        return "Grade too high";
                    }
             };

            class GradeTooLowException : public std::exception {
                public:
                    const char* what() const throw() {
                        return "Grade too low";
                    }
             };
            
        private:

            unsigned char grade;
            const std::string& name;    
    };

    std::ostream& operator<<( std::ostream& o, const Bureaucrat& other );
    
#endif