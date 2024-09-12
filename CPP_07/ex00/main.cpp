/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:38:59 by joao              #+#    #+#             */
/*   Updated: 2024/09/11 22:17:53 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main( void ) { 

    {
        std::cout <<  "Max: " << max<int>(10, 5) << std::endl;
        std::cout <<  "Max: " << max<int>(5, 5) << std::endl;
        std::cout <<  "Max: " << max<int>(4, 5) << std::endl;
    }

    {
        std::cout <<  "Min: " << min<int>(10, 5) << std::endl;
        std::cout <<  "Min: " << min<int>(5, 5) << std::endl;
        std::cout <<  "Min: " << min<int>(4, 5) << std::endl;
    }
    {
        std::cout <<  "Should return A: " << (::min<std::string>("A", "B") == "A" ? "true" : "false ") << std::endl;
        std::cout <<  "Should return A: " << (::min<std::string>("A", "A") == "A" ? "true" : "false ") << std::endl;
        std::cout <<  "Should return A: " << (::min<std::string>("B", "A") == "A" ? "true" : "false ") << std::endl;
    }
    {
        std::cout <<  "Should return B: " << (max<std::string>("A", "B") == "B" ? "true" : "false ") << std::endl;
        std::cout <<  "Should return A: " << (max<std::string>("A", "A") == "A" ? "true" : "false ") << std::endl;
        std::cout <<  "Should return B: " << (max<std::string>("B", "A") == "B" ? "true" : "false ") << std::endl;
    }
    {
        std::cout <<  "Should return B: " << (min<float>(4.5f, 4.5f) == 4.5f ? "true" : "false ") << std::endl;
        std::cout <<  "Should return A: " << (min<float>(4.4f, 4.5f) == 4.4f ? "true" : "false ") << std::endl;
        std::cout <<  "Should return A: " << (min<float>(4.5f, 4.6f) == 4.5f ? "true" : "false ") << std::endl;
    }
    {
        std::cout <<  "Should return A: " << (max<double>(4.5f, 4.5f) == 4.5f ? "true" : "false ") << std::endl;
        std::cout <<  "Should return A: " << (max<double>(4.4f, 4.5f) == 4.5f ? "true" : "false ") << std::endl;
        std::cout <<  "Should return B: " << (max<double>(4.5f, 4.6f) == 4.6f ? "true" : "false ") << std::endl;
    }
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
}