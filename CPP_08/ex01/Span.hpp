/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:21:06 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 21:17:47 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <exception>
#include <iostream>
#include <algorithm>

class Span {

    private:
        unsigned int            _N;
        
        std::vector<int> _items;

        bool    addNumber(unsigned int number);

    public:
         Span( unsigned int n );
         Span( const Span& other );
        ~Span( void );

         class MaxOcupationException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Error: Max Size Reached";
                } 
         };

         class IndexOutOfRangeException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Error: Index out of range";
                }    
         };

         class InsuficientInputException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Error: number of elements less than 2";
                }    
         };

         const Span&               operator=( const Span& other );

         bool                      addMember( int item );

         const std::vector<int>&   getItems( void ) const;

         unsigned int              shortestSpan( void );

         unsigned int              longestSpan( void );
         
         unsigned int              size( void );
};


std::ostream& operator<<(std::ostream &o, Span& span);


#endif