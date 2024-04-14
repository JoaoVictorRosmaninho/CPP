/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:45:11 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 20:27:00 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
    std::string ph      = "HI THIS IS BRAIN";

    std::string* ptrPH  = &ph;

    std::string& ptrREF = ph;

    std::cout << "PH ADDRESS: " << &ph << std::endl;
    std::cout << "PTR_PH ADDRESS HELD: " << ptrPH << std::endl;
    std::cout << "PTR_REF ADDRESS HELD: " << &ptrREF << std::endl;

    std::cout << "Values:"   << std::endl;
    std::cout << "PH: "      << ph     << std::endl;
    std::cout << "PTR_PH: "  << *ptrPH << std::endl;
    std::cout << "PTR_REF: " << ptrREF << std::endl;
}