/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:54:13 by joao              #+#    #+#             */
/*   Updated: 2024/09/13 21:57:41 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>


class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (const Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
  private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << "Awesome:" << a.get_n(); return o; }


int main( void ) {
    {
        Array<int> numbers(5);

        numbers.push(1);
        numbers.push(2);
        numbers.push(3);
        numbers.push(4);
        numbers.push(5);
        std::cout << numbers << std::endl;

        try {
            std::cout << numbers[6] << std::endl;
        } catch( Array<int>::IndexOutOfRange& e ) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        Array<std::string> names(2);
        
        names.push("joao");
        names.push("pedro");
        
        std::cout << "Names: " << names << std::endl;

        Array<std::string> names_tmp(names);
        std::cout << "NamesTMP: " << names_tmp << std::endl;
        
        names_tmp.pop();
        names_tmp.push("Maria");
        
        std::cout  << "NamesTMP: " << names_tmp << std::endl;
    }
    {
        Array<Awesome> awesomes(2);

        Awesome a(2);
        Awesome b(3);

        awesomes.push(a);
        awesomes.push(b);
        std::cout << awesomes << std::endl;
    }
    {
        Array<int> array;
        Array<int> array2(10);

        std::cout << "Empty Array: " << array << std::endl;
        std::cout << "Empty Array: " << array2 << std::endl;
    }
    {
        // read and write
                Array<Awesome> awesomes(1);

        Awesome a(2);
        Awesome b(3);

        awesomes.push(a);
        std::cout << awesomes[0] << std::endl;

        awesomes[0] = b;

        std::cout << awesomes[0] << std::endl;

    }
}