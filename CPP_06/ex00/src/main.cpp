/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:48:14 by joao              #+#    #+#             */
/*   Updated: 2024/09/02 22:38:46 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void) {
    

    ScalarConverter::convert("Ola mundo !!");
    ScalarConverter::convert("teste");
    ScalarConverter::convert("a");
    ScalarConverter::convert("5");
    ScalarConverter::convert("42.42f");
    ScalarConverter::convert("42.42");
}