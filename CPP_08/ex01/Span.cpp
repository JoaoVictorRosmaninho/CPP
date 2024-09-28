/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:21:52 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 21:19:48 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n) : _N(n) {};

Span::Span( const Span& other ) : _N(other._N), _items(other._items) {};

Span::~Span( void ) { }


bool Span::addNumber(int item ) {
    
    if (_items.size() >= _N ) throw MaxOcupationException();

    _items.push_back(item);

    return true;
}

bool Span::addManyNumbers( const int* items, size_t size ) {
    
    if (_items.size() >= _N ) throw MaxOcupationException();
    
    size_t iter = 0;
    
    while ( (_N - this->size()) > 0 && iter < size ) {
      addNumber(items[iter++]);
    }

    return true;
}

const Span& Span::operator=(const Span& other) { 
    _N     = other._N;
    _items = other._items;
    
    return *this;    
}

unsigned int Span::size( void ) {
    return _items.size();
}

unsigned int Span::shortestSpan( void ) {
    if (_items.size() < 2) throw InsuficientInputException();

    /* Sorting Algorithm*/
    
    std::vector<int> temp = _items;

    std::sort(temp.begin(), temp.end());

    /* compute adjacente referente -> X1 - X0 ... */
    std::adjacent_difference(temp.begin(), temp.end(), temp.begin());

    return *std::min_element(temp.begin(), temp.end());

}

unsigned int Span::longestSpan( void ) {
    if (_items.size() < 2) throw InsuficientInputException();

    std::sort(_items.begin(), _items.end());
   
    return _items.back() - _items.front();
}

const std::vector<int>& Span::getItems( void ) const {
    return _items;
}

std::ostream& operator<<(std::ostream &o, Span& span) {
    
    std::vector<int>::const_iterator it  = span.getItems().begin();
    std::vector<int>::const_iterator end = span.getItems().end();
    
    o << "[";
    for ( ; it < --end; ++it ) {         
        o << *it << ", ";
    }
    o << *it << "]";
    return o;
}
