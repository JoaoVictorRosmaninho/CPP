
#include "Base.hpp"
#include <iostream>
#include <stddef.h>



int main( void ) {
    Base *	p;
	std::srand(std::time(NULL));

	for (int i = 0; i < 25; i++)
	{
		std::cout << "Test [" << i << "]:\t";
		p = Base::generate();
		std::cout << ", ";
		Base::identify(p);
		std::cout << ", ";
		Base::identify(*p);
		delete (p);
		std::cout << std::endl;
	}
	return (0);
}