/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:02:10 by joao              #+#    #+#             */
/*   Updated: 2024/08/13 08:53:32 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
 #define DIAMONDTRAP_HPP

 #include "ScavTrap.hpp"
 #include "FragTrap.hpp"
 
 
  class DiamondTrap : virtual public ScavTrap, virtual public FragTrap { 
     public:
         DiamondTrap(std::string name);
         DiamondTrap(const DiamondTrap& other);
        ~DiamondTrap( void );
         DiamondTrap( void );
         
         void whoAmI() const;

         std::string toString( void ) const;
 
     private:
         std::string name;
 
  };
 
#endif