/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:48:14 by joao              #+#    #+#             */
/*   Updated: 2024/09/07 17:36:54 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "ScalarConverter.hpp"

int main( void ) {

    int number = 10; 

    Serializer::Data data(ScalarConverter::INTEGER, &number);

    uintptr_t         serializedData =  Serializer::serialize(&data);
    Serializer::Data* dest           =  Serializer::deserialize(serializedData);


    std::cout << "Should two address be the same: " << ( dest == &data ? "true" : "false" ) << std::endl;


    std::cout << "Type: " << dest->_type << std::endl;
    std::cout << "Value: " << *static_cast<int*>(dest->_content) << std::endl;
}