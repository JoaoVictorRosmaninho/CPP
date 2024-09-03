/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:08:59 by joao              #+#    #+#             */
/*   Updated: 2024/09/02 22:44:21 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& pseudoNumber) {

    std::string::size_type dotPosition    = pseudoNumber.find_first_not_of("0123456789");
    std::string::size_type letterPosition = pseudoNumber.find_last_not_of("0123456789");

    bool hasDot = pseudoNumber.at(dotPosition)    == '.';
    bool hasF   = pseudoNumber.at(letterPosition) == 'f';  

    if (dotPosition != pseudoNumber.npos && letterPosition != pseudoNumber.npos && !hasDot && !hasF) {
        std::cout << "char" << std::endl;
        return ;
    }
    std::cout << "number" << std::endl;
}