/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:49:41 by joao              #+#    #+#             */
/*   Updated: 2024/09/18 00:00:06 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <string>


int main( void ) {   
    {
        std::vector<int> numbers;
        
        numbers.push_back(10);
        numbers.push_back(5);
        numbers.push_back(31);
        numbers.push_back(13);
        numbers.push_back(45);

        easy_find<int>(numbers, 31);
        easy_find<int>(numbers, 13);
        try {
            easy_find<int>(numbers, 50);
        } catch( const NotFoundException& e) {
            std::cout << e.what() << std::endl;
        }
    }
}