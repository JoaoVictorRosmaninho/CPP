/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:43:56 by joao              #+#    #+#             */
/*   Updated: 2024/09/07 14:17:35 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stddef.h>




    class ScalarConverter {
        public:
            static void  convert(const std::string& s);

            class ConversionError : public std::exception {
                public:
                    const char* what() const throw() {
                        return "impossible";
                    }
            };
            
            typedef enum { CHAR, FLOAT, DOUBLE, INTEGER, NAN, INF } Type;

            typedef void (*func)(const std::string&, Type);
        
        private:
        
            ScalarConverter( void );

            static void  printInteger(const std::string& s, Type type);
            
            static void  printFloat(const std::string& s,  Type type);

            static void  printDouble(const std::string& s, Type type);

            static void  printChar(const std::string& s, Type type);

            static Type  selectType(const std::string& s);
        
    };

#endif