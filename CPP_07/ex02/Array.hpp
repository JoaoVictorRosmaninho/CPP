/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:57:27 by joao              #+#    #+#             */
/*   Updated: 2024/09/13 22:00:05 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <iostream>

    template <typename T>
    class Array {
        private:
            unsigned int _n;
            unsigned int _size;
            T*           _content;
       
        public:
             Array( void );
             Array(unsigned int n);
             Array(const Array& other);
            ~Array( void );

            T&           operator[](unsigned int index) const;

            const T&     operator=(const Array<T>& item);

            bool         push(const T& item);

            const T&     pop( void );

            unsigned int size( void ) const;

            class IndexOutOfRange : std::exception {
                public:
                     virtual const char* what() const throw() {
                        return "Error: Index out of Range";
                    }      
            };
    };


#include "Array.tpp"

#endif