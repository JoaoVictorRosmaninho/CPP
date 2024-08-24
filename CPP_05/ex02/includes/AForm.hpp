
#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <sstream>
#include <exception> 

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        std::string _name;

        bool  _signed;

        int _signedGrade;
        int _executeGrade;

    public:
        AForm( void );
        AForm( std::string name, bool is_signed, int signedGrade, int executeGrade );
        AForm( const AForm& other );

        virtual ~AForm();
        
        virtual std::string  getName( void )        const;
        
        virtual bool         getSigned( void )      const;
        
        virtual int          getSignedGrade(void)   const;
        
        virtual int          getGradeToExecute(void) const;

        virtual std::string  toString( void )       const;
        
        virtual const AForm& operator=(const AForm& other);

        virtual void         beSigned(const Bureaucrat& bureaucrat);
        
        virtual void         execute(const  Bureaucrat& bureaucrat) const = 0;

        class GradeToHighException : std::exception {
            public:
                virtual const char* what() const throw() {
                    return "GradeToHighException";
                }       
        };

        class GradeTooLowException : std::exception {
            public:
                virtual const char* what() const throw() {
                    return "GradeTooLowException";
                }       
        };

        class NotSignedException : std::exception {
            public:
                virtual const char* what() const throw() {
                    return "You is not signed";
                }       
        };
};
    std::ostream& operator<<( std::ostream& o, const AForm& AForm );



#endif