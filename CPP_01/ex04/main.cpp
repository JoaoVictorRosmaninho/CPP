/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:16:41 by jv                #+#    #+#             */
/*   Updated: 2024/05/04 17:38:24 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sed.hpp"
int main(int argc, char* argv[]) {
    
    if (argc != 4) {
        std::cout << "invalid output, expected: <filename> <s1> <s2>" << std::endl;
        return 0;
    }
    
    Sed sed { argv[1], argv[2], argv[3] };
    sed.execute();
}