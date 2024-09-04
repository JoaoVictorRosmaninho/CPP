/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:43:56 by joao              #+#    #+#             */
/*   Updated: 2024/09/04 08:21:47 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <stddef.h>


typedef enum {
    CHAR,
    FLOAT,
    DOUBLE,
    INTEGER,
    NAN,
    INF
} Type;

typedef void (*func)(const std::string&, Type);

    class ScalarConverter {

        private:
            static void  printInteger(const std::string& s, Type type);
            
            static void  printFloat(const std::string& s,  Type type);

            static void  printDouble(const std::string& s, Type type);

            static void  printChar(const std::string& s, Type type);

            static Type  selectType(const std::string& s);
        public:
            static void  convert(const std::string& s);

            class ConversionError : public std::exception {
                public:
                    const char* what() const throw() {
                        return "impossible";
                    }
            };
    };

#endif