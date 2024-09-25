/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:21:52 by joao              #+#    #+#             */
/*   Updated: 2024/09/24 23:59:04 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n) : _N(n) {};

Span::Span( const Span& other ) : _N(other._N), _items(other._items) {};

Span::~Span( void ) { }


bool Span::addMember(int item ) {
    
    if (_items.size() >= _N ) throw MaxOcupationException();

    std::list<int>::iterator position = std::lower_bound(_items.begin(), _items.end(), item);

    if (*position == item) return false;

    _items.insert(position, item);

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


    std::list<int>::iterator first  = _items.begin();
    std::list<int>::iterator second = _items.begin();

    std::advance(second, 1);

    return  std::abs(*second - *first);
}

unsigned int Span::longestSpan( void ) {
    if (_items.size() < 2) throw InsuficientInputException();

    return _items.back() - _items.front();
}

const std::list<int>& Span::getItems( void ) const {
    return _items;
}

std::ostream& operator<<(std::ostream &o, Span& span) {
    
    std::list<int>::const_iterator begin = span.getItems().begin();
    std::list<int>::const_iterator end   = span.getItems().end();
    
    o << "[";
    for (std::list<int>::const_iterator it = begin; it != end; ++it ) {         
        o << *it << ", ";
    }
    o << "]";
    return o;
}
