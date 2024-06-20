
#ifndef CLAPTRAP_H
    #define CLAPTRAP_H

    #include <iostream>
    #include <string>

    class ClapTrap {
        public:
             ClapTrap(unsigned int ht, unsigned int ad, unsigned int ep);
             ClapTrap();
            ~ClapTrap();
             ClapTrap(ClapTrap& other);



             // functions
             void attack(const std::string& target);
             void takeDamage(const std::string& target);
             void beRepaired(const std::string& target);

             //access functions
             unsigned int getHitPoints( void ) const;
             unsigned int getEnergyPoints( void ) const;
             unsigned int getAttackDamage( void ) const;

        private:
            unsigned int hit_points;
            unsigned int energy_points;
            unsigned int attack_damage;

    };

#endif