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
#include <stack>

    template <typename T>
    class MutantStack : public std::stack<T> {
        public:
             typedef typename std::stack<T>::container_type::iterator iterator; 
              
             MutantStack::iterator begin();
             MutantStack::iterator end();

    };

    #include "MutantStack.tpp"

#endif
