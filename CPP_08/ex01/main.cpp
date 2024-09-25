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

        span.addMember(7);
        span.addMember(1);
        span.addMember(1);
        span.addMember(3);

        std::cout << "size must be 3: " << span.size() << std::endl;
        std::cout << "longestSpan: " << span.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;

        try {
            span.addMember(4);
        } catch( Span::MaxOcupationException& e) {
            std::cout << "expect to raise a exception" << e.what() << std::endl;
        }
    } 

     
    {
        Span span(7);

        span.addMember(5);
        span.addMember(6);
        span.addMember(11);
        span.addMember(9);
        span.addMember(3);
        span.addMember(15);
        span.addMember(1);


        std::cout << "LongestSpan: " << span.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;

    }

    {
        Span span(40000);
        std::cout << "testando com 40k de números" << std::endl;

        std::srand(static_cast<unsigned int>(13));
    
        for ( unsigned int i = 0; i < 40000; i++) {
            span.addMember( std::rand() % 100000 + 1);
        }

        std::cout << "LongestSpan: " << span.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
    }

    
}