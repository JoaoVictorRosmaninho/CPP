/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:32:06 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 22:56:54 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main( void ) {
    MutantStack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << stack << std::endl;
}

