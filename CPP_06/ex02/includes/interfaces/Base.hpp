/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:44:33 by joao              #+#    #+#             */
/*   Updated: 2024/09/09 01:38:27 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP 
#define BASE_HPP

#include <cstdlib> 
#include <ctime>
#include <exception>
#include <iostream>

class A;
class B;
class C;

    class Base {
        public:
            virtual ~Base();

            static Base*   generate( void );
            
            static void    identify(Base* p);

            static void    identify(Base& p);
    };

#endif