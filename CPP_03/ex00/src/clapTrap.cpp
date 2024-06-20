#include "clapTrap.hpp"


ClapTrap::ClapTrap() {

}

ClapTrap::~ClapTrap() {

}

ClapTrap::ClapTrap(ClapTrap& other) : attack_damage(other.getAttackDamage()), energy_points(other.getEnergyPoints()), hit_points(other.getHitPoints()) { }



unsigned int ClapTrap::getAttackDamage( void ) const {
    return this->attack_damage;
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
    return this->energy_points;
}

unsigned int ClapTrap::getHitPoints( void ) const {
    return this->hit_points;
}
