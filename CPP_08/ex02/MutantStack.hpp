/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:35:14 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 23:23:27 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <iterator>


    template <typename T>
    class MutantStack {

        private:
            std::vector<T>*  _stack;
        public:

             MutantStack( void );
            ~MutantStack( void );
             MutantStack( const MutantStack<T>& other);

             const T& operator=(const MutantStack<T>& other);
             const T& operator[](unsigned int index) const;

             T&           push(T& item);
             
             const T&     push(const T& item);
             
             T            pop(void);

             unsigned int size( void ) const;
    };

    template <typename T>
    std::ostream & operator<<( std::ostream & o, const MutantStack<T> & rhs );


    #include "MutantStack.tpp"

#endif
