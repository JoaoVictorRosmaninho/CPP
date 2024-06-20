#include "clapTrap.hpp"


ClapTrap::ClapTrap() { }

ClapTrap::ClapTrap(unsigned int ht, unsigned int ad, unsigned int ep) : hit_points(ht), energy_points(ep), attack_damage(ad) {

}

ClapTrap::~ClapTrap() {

}

ClapTrap::ClapTrap(ClapTrap& other) : hit_points(other.getHitPoints()), energy_points(other.getEnergyPoints()), attack_damage(other.getAttackDamage()) { 

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
