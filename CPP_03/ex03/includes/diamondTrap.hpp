/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:02:10 by joao              #+#    #+#             */
/*   Updated: 2024/08/08 22:47:13 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
 #define DIAMONDTRAP_HPP

 #include "scavTrap.hpp"
 #include "flagTrap.hpp"
 
 
  class DiamondTrap : virtual public ScavTrap, virtual public FlagTrap { 
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