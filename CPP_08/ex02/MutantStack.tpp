/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:18:04 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 23:23:20 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void ) {
  return this->c.begin();  
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void ) {
  return this->c.end();
}

template <typename T>
std::ostream& operator<<( std::ostream& o, MutantStack<T> stack ) {
    
    typename MutantStack<T>::iterator it = stack.begin();
  
    o << "["; 

    do {
        o << *(it++) << ", ";
    } while ( it < --stack.end() );

    o << *it << "]";
    
    return o;
}

