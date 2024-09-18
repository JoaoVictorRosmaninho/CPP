/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:49:52 by joao              #+#    #+#             */
/*   Updated: 2024/09/18 00:00:14 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class NotFoundException : public std::exception {
    public:
         const char* what() const throw() {
            return "Element not found";
         }  
};


template <typename T>
void easy_find(std::vector<T>& vector, int value) {
    
    typename std::vector<T>::iterator it = std::find(vector.begin(), vector.end(), value);

    if ( it != vector.end() )
        std::cout << "Element was found: " << *it << std::endl;
    else
        throw NotFoundException();
}
#endif