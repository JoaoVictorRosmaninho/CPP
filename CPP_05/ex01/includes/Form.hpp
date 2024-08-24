
#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <sstream>
#include <exception> 

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
    private:
        std::string _name;

        bool  _signed;

        int _signedGrade;
        int _executeGrade;
    public:
         Form();
         Form(const Form& other);
         Form(std::string name, bool is_signed, int signedGrade, int executeGrade);
        ~Form();


        const Form& operator=(const Form& other);

        std::string getName( void ) const;
        
        bool  getSigned( void ) const;
        
        int getSignedGrade(void) const;
        int getExecutedGrade(void) const;

        void beSigned(const Bureaucrat& bureaucrat);

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
};

    std::ostream& operator<<( std::ostream& o, const Form& form );


#endif