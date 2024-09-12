/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:26:45 by joao              #+#    #+#             */
/*   Updated: 2024/09/11 22:42:43 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(T item) {
    std::cout << item;
}

template <typename T>
void iter(T* array, unsigned int size, void(*f)(T)) {
    
    std::cout << "[";
    for (unsigned int index = 0; index < size; index++) {
        f(array[index]); 
        
        if (index < size - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}


#endif