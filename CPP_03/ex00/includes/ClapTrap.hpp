
#ifndef CLAPTRAP_H
    #define CLAPTRAP_H

    #include <iostream>
    #include <string>

    class ClapTrap {
        public:
             ClapTrap(std::string name, unsigned int ht, unsigned int ad, unsigned int ep);
             ClapTrap(std::string name);
             ClapTrap();
             ClapTrap(ClapTrap& other);
            
            ~ClapTrap( void );

             // functions
             void attack(const std::string& target);
             void takeDamage(unsigned int amount);
             void beRepaired(unsigned int amount);

             //access functions
             unsigned int getHitPoints( void ) const;
             unsigned int getEnergyPoints( void ) const;
             unsigned int getAttackDamage( void ) const;
             std::string getName( void ) const;

             //operators 
            ClapTrap& operator=(ClapTrap& other);


        private:


            std::string  name;
            unsigned int hit_points;
            unsigned int energy_points;
            unsigned int attack_damage;

    };

    std::ostream& operator<<(std::ostream& out,  ClapTrap& other);
#endif