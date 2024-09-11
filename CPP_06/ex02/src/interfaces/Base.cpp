/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:56:33 by joao              #+#    #+#             */
/*   Updated: 2024/09/10 22:15:07 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "Base.hpp"

Base::~Base() { }

Base* Base::generate( void ) {        

    std::srand(static_cast<unsigned int>(std::time(NULL)));
    
    int n = std::rand() % 3 ;

    if ( n == 1 ) 
        return  new A();
    if ( n == 2 )
        return new B();
    
    return new C();
}


void Base::identify(Base* p) {
    if (dynamic_cast<A*>(p)) 
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type is C" << std::endl;
    else
        std::cout << "undefined type" << std::endl;
}

void Base::identify(Base& p) {
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "Type is A" << std::endl;
        return;
    } catch(std::exception& e) { }

    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "Type is B" << std::endl;
        return;
    } catch (std::exception& e) {}

    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "Type is C" << std::endl;
    } catch (std::exception& e) { }
}


