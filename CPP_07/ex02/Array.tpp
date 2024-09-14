/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:56:08 by joao              #+#    #+#             */
/*   Updated: 2024/09/13 21:59:48 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP


template <typename T>
Array<T>::Array( void ) : _n(0), _size(0), _content( new T() ) { 
    
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n), _size(0), _content( new T[n] ) { }   

template <typename T>
Array<T>::~Array( void ) {
    delete [] _content;
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _n(other._n), _size(0), _content( new T[other._n] ) {
    for (unsigned int index = 0; index < _n; index++)
        push(other[index]);
} 

template <typename T>
bool Array<T>::push(const T& item) {
    if ( ( _size + 1 ) > _n ) return false;

    _content[_size++] = item;

    return true;
}

template <typename T>
const T& Array<T>::pop( void ) {
    if (_size < 1 ) throw IndexOutOfRange();

    return _content[_size--];
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const {
    if ( index >= _n ) throw IndexOutOfRange();

    return _content[index];
} 

template <typename T>
const T& Array<T>::operator=(const Array<T>& other) {
    delete [] _content;

    _n       = other._n;
    _size    = 0;
    _content = new T[_n];

    for (unsigned int index = 0; index < _n; index++)
        push(other[index]);
} 

template <typename T>
unsigned int Array<T>::size( void ) const {
    return _size;   
}

template <typename T>
std::ostream& operator<<( std::ostream& o, const Array<T>& array) {
    
    o << "[";
    for (unsigned int index = 0; index < array.size(); index++) {
        o << array[index];
         
        if (index < array.size() - 1)
            o << ", ";
    }
    o << "]";  

    return o;
}

#endif