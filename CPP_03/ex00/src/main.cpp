#include "ClapTrap.hpp"

int main( void ) {

    ClapTrap clap("joao"); 
    
    clap.attack("Pedro");

    std::cout << std::endl;

    ClapTrap clap2("pedro", 10, 5, 10); 
    
    clap2.attack("Pedro");
    
    return 0;
}