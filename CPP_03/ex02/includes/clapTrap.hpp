/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:41 by joao              #+#    #+#             */
/*   Updated: 2024/06/29 17:45:02 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
    #define CLAPTRAP_H

    #include <iostream>
    #include <string>
    #include <sstream>

    class ClapTrap {
        public:
             ClapTrap(std::string name, unsigned int ht, unsigned int ad, unsigned int ep);
             ClapTrap(std::string name);
            ~ClapTrap( void );
             ClapTrap(ClapTrap& other);

             // functions
             virtual void attack(const std::string& target);
             void takeDamage(unsigned int amount);
             void beRepaired(unsigned int amount);

             //access functions
             unsigned int getHitPoints( void ) const;
             unsigned int getEnergyPoints( void ) const;
             unsigned int getAttackDamage( void ) const;
             std::string getName( void ) const;

             //operators 
            ClapTrap& operator=(ClapTrap& other);
            
             std::ostream& operator<<(std::ostream& out,  const ClapTrap& other);

        protected:

            ClapTrap();

            std::string  name;
            unsigned int hit_points;
            unsigned int _hit_points;
            unsigned int energy_points;
            unsigned int attack_damage;

            virtual std::string toString( void ) const ;
        private:
        


        
    };

#endif