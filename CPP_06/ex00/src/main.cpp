/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:48:14 by joao              #+#    #+#             */
/*   Updated: 2024/09/05 08:55:18 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {
    
    if (argc < 2 ) {
        std::cout << "Invalid Input. Try ScalarConverter <n1> <n2> ..." << std::endl;

        return -1;
    }

    std::cout << "----------------------------" << std::endl;
    for ( int i = 1; i < argc; i++ ) {
        ScalarConverter::convert(argv[i]);        
        std::cout << "----------------------------" << std::endl;
    }
}