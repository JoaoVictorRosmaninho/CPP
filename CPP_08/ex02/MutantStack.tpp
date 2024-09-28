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

template <typename T>
MutantStack<T>::MutantStack( void ) : _stack(new std::vector<T>()) {}

template <typename T>
MutantStack<T>::~MutantStack( void ) {
    delete _stack;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack& other) : _stack(other._stack) {}


template <typename T>
T& MutantStack<T>::push(T& item) {
    
    typename std::vector<T>::iterator it = _stack->begin();

    _stack->insert(it, item);

    return item;
}


template <typename T>
const T& MutantStack<T>::push(const T& item) {
    
    typename std::vector<T>::iterator it = _stack->begin();

    _stack->insert(it, item);

    return item;
}

template <typename T>
const T& MutantStack<T>::operator[](unsigned int index ) const {
    if (index > size() ) return  _stack->back();

    return _stack->operator[](index);
}

template <typename T>
unsigned int MutantStack<T>::size( void ) const {
    return _stack->size();
}

template <typename T>
const T& MutantStack<T>::top( void ) const {
  return  _stack->front();
}

template <typename T>
bool MutantStack<T>::empty( void ) const {
  return size() == 0;
}

template <typename T>
typename std::vector<T>::iterator MutantStack<T>::begin( void ) const {
    return _stack->begin();
}

template <typename T>
typename std::vector<T>::iterator MutantStack<T>::end( void ) const {
    return   _stack->end();
}

template <typename T>
std::ostream & operator<<( std::ostream & o, const MutantStack<T> & rhs ) {

    unsigned int i = 0;

    o << "[";
    for( ; i < rhs.size() - 1 ; i++) {
        std::cout << rhs[i] << ",";
    }
    std::cout << rhs[i] <<"]";
    return o;
}

