#include "clapTrap.hpp"

int main( void ) {

    ClapTrap clap("joao"); 

    clap.attack("Pedro");

    std::cout << "Status: " << clap << std::endl;
    return 0;
}