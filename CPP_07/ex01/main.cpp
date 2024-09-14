/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:26:30 by joao              #+#    #+#             */
/*   Updated: 2024/09/13 21:28:15 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
/*
int main( void ) {

    {
        int numbers[] = { 1, 2, 3, 4, 5 };
        iter<int>(numbers, 5, print<int>);
    }
    
    {
        float numbers[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
        iter<float>(numbers, 5, print<float>);
    }

    {
        std::string numbers[] = { "bola", "bola", "bola", "bola", "bola" };
        iter<std::string>(numbers, 5, print<std::string>);
    }
    
    {
        char numbers[] = { 'a', 'b', 'c', 'd', 'e' };
        iter<char>(numbers, 5, print<char>);
    }

}
*/

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}