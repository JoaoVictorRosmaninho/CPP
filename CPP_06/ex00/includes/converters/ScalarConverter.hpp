/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:43:56 by joao              #+#    #+#             */
/*   Updated: 2024/09/02 22:08:15 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <exception>

    class ScalarConverter {
        public:
            static void convert(const std::string& pseudoNumber);

            class ConversionError : public std::exception {
                public:
                    const char* what() const throw() {
                        return "impossible";
                    }
            };
    };

#endif