/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:08:30 by joao              #+#    #+#             */
/*   Updated: 2024/06/29 15:43:58 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
 #define SCAVTRAP_H
 
 #include "clapTrap.hpp"


 class ScavTrap : virtual public ClapTrap {
    public:
         ScavTrap(std::string name, unsigned int ht, unsigned int ad, unsigned int ep);
         ScavTrap(std::string name);
         ScavTrap(ScavTrap& other);
        ~ScavTrap( void );


        void attack(const std::string& target);
        void guardGate( void ) const;


   protected:
        std::string toString( void ) const ;
    private:
         ScavTrap( void );


 };

#endif