/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:08:59 by joao              #+#    #+#             */
/*   Updated: 2024/09/07 14:45:34 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::printInteger(const std::string& s, Type type) {

    if (type == NAN || type == INF) {
        std::cout << "int: impossible" << std::endl;
        return ;
    }

    int number = static_cast<int>(std::atoi(s.c_str()));

    std::cout << "int: " << number << std::endl; 
}

void ScalarConverter::printFloat(const std::string& s, Type type) {

    if (type == NAN || type == INF) {
        std::cout << "float: " << s << "f" << std::endl;
        return ;
    }

    float number = static_cast<float>(std::atof(s.c_str()));
    
    std::cout << "float: " << std::fixed <<  std::setprecision(1) << number << "f" << std::endl;
}

void ScalarConverter::printDouble(const std::string& s, Type type) {
    
    if (type == NAN || type == INF) {
        std::cout << "double: " << s << std::endl;
        return ;
    }

    double number = static_cast<double>(std::atof(s.c_str()));

    std::cout << "double: " << std::setprecision(1) << number << std::endl;

}

void ScalarConverter::printChar(const std::string& s, Type type) {

    if (type != CHAR) {

        if (type == INTEGER && std::atoi(s.c_str()) < 32) {
            std::cout << "char: " << "Non displayable" << std::endl;
            return ;
        }

        std::cout << "char: " << "impossible" << std::endl;
        return ;
    }

    std::cout << "char: " << "'*'" << std::endl; 
}

ScalarConverter::Type ScalarConverter::selectType(const std::string& s) {
    std::string::size_type dotPosition    = s.find_first_not_of("0123456789");
    std::string::size_type letterPosition = s.find_last_not_of("0123456789");

    if (dotPosition != s.npos && letterPosition != s.npos) {
        if (s.at(dotPosition) != '.' && s.at(letterPosition) != 'f') {           
            
            if (!s.compare("nan"))
                return NAN;
         
            return CHAR;
        }
    }

    if (!s.compare("inf") || !s.compare("-inf"))
        return INF;

    if (dotPosition != letterPosition )
        return FLOAT;

    if (dotPosition != s.npos)
        return DOUBLE;

    return INTEGER;
}

void ScalarConverter::convert(const std::string& s) {
    
    func functions[] = {
        printChar,
        printInteger,
        printFloat,
        printDouble
    };

    Type type = selectType(s);
    
    for (unsigned char index = 0; index < 4; index++) {
        functions[index](s, type);
    }
}