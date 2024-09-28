/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:32:06 by joao              #+#    #+#             */
/*   Updated: 2024/09/25 22:56:54 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include "MutantStack.hpp"


int main( void ) {
    
    {

        std::stack<int> std_stack;    

        MutantStack<int> my_stack;

        std::cout << "stack is empty: " << my_stack.empty() << std::endl; 

        my_stack.push(1);
        my_stack.push(2);
        my_stack.push(3);

        std::cout << "stack is empty: " << my_stack.empty() << std::endl; 

        std::cout << "iterando na stack" << std::endl;

        for ( MutantStack<int>::iterator it = my_stack.begin() ; it != my_stack.end(); it++ ) {
          std::cout <<  "Iterator: " << *it << std::endl;  
        }

        std::cout << "ultimo elemento da stack: "  << my_stack.top() << std::endl;

        std::cout << my_stack << std::endl;
    
    }
    {
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        
        std::cout << "42 main top: " << mstack.top() << std::endl;
        
        mstack.pop();
        
        std::cout << "42 main size: " << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
       
        ++it;
        --it;
      
        while (it != ite)
        {
          std::cout << "42 main: " << *it << std::endl;
          ++it;
        }
        std::stack<int> s(mstack);
        return 0;
    }
}

