/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:20:49 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 00:02:05 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <algorithm>

int main( void ) {
    {
        Span span(4);

        span.addNumber(7);
        span.addNumber(1);
        span.addNumber(1);
        span.addNumber(3);

        std::cout << "size must be 3: " << span.size() << std::endl;
        std::cout << "longestSpan: " << span.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;

        try {
            span.addNumber(4);
        } catch( Span::MaxOcupationException& e) {
            std::cout << "expect to raise a exception" << e.what() << std::endl;
        }
    } 

     
    {
        Span span(7);

        span.addNumber(5);
        span.addNumber(6);
        span.addNumber(11);
        span.addNumber(9);
        span.addNumber(3);
        span.addNumber(15);
        span.addNumber(1);


        std::cout << "LongestSpan: " << span.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;

    }

    {
        Span span(40000);
        std::cout << "testando com 40k de números" << std::endl;

        std::srand(static_cast<unsigned int>(13));
    
        for ( unsigned int i = 0; i < 40000; i++) {
            span.addNumber( std::rand() % 100000 + 1);
        }

        std::cout << "LongestSpan: " << span.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
    }
    {
        Span sp          = Span(5);

        const int arr[] =  { 6, 3, 17, 9, 11 };

        sp.addManyNumbers( arr, sizeof(arr) / sizeof(const int) ); 
  
        std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan: "  <<  sp.longestSpan() << std::endl;

        std::cout << "items: " << sp << std::endl;

    }

    
}
