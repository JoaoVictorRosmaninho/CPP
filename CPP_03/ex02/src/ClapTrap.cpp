#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : hit_points(10), energy_points(10), attack_damage(0)  {

}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Constructor for " << name << " has called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor for " << name << " has called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int ht, unsigned int ad, unsigned int ep) : name(name), hit_points(ht), energy_points(ep), attack_damage(ad) { 
    std::cout << "Constructor for " << name << " has called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) : name(other.getName()), hit_points(other.getHitPoints()), energy_points(other.getEnergyPoints()), attack_damage(other.getAttackDamage()) { 
    std::cout << "Constructor for " << name << " has called" << std::endl;
 }


ClapTrap& ClapTrap::operator=(ClapTrap& other) {
    this->name          = other.getName();
    this->attack_damage = other.getAttackDamage();
    this->hit_points    = other.getHitPoints();
    this->energy_points = other.getEnergyPoints();

    return *this;
}


std::ostream& operator<<(std::ostream& out, ClapTrap& clap) {
    return out << clap.getName() << "#" << clap.getEnergyPoints();
}

std::string ClapTrap::getName( void ) const {
    return this->name;
}

unsigned int ClapTrap::getAttackDamage( void ) const {
    return this->attack_damage;
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
    return this->energy_points;
}

unsigned int ClapTrap::getHitPoints( void ) const {
    return this->hit_points;
}

void ClapTrap::attack(const std::string& target) {

    (void) target;

   if ( energy_points < 1 ) {
     std::cout << "No Energy" << std::endl << std::flush;
     return ;
   } 
   energy_points -= 1;

   std::cout << "ClapTrap " <<  this->name <<  " attacks " << target << ", causing " << this->attack_damage << " points of damage!"  << std::endl << std::flush;
}

void ClapTrap::takeDamage(unsigned int amount) {
   std::cout << "ClapTrap " <<  name <<  "get " << amount << "points of damage!"  << std::endl << std::flush;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if ( energy_points < 1 ) {
        std::cout << "No Energy" << std::endl << std::flush;
        return ;
    }  
   energy_points -= 1;
   hit_points    += amount;
   std::cout << "ClapTrap " <<  name <<  "get " << amount << "points of repair!"  << std::endl << std::flush;
}

std::string ClapTrap::toString( void ) const {
    std::stringstream out;

    out << name
        << "#energy_poits:" << energy_points
        << "#attack_damage:" << attack_damage
        << "#hit_points:" << hit_points;

    return out.str();
}
