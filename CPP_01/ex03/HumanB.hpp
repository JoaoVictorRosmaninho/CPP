/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:26:09 by jv                #+#    #+#             */
/*   Updated: 2024/04/15 00:08:11 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
    public:
        void attack(void);
        void setWeapon(Weapon& weapon);

        HumanB(Weapon& weapon);
        HumanB(const std::string& name, Weapon& weapon);
        HumanB(const std::string& name);
        HumanB(void);
        ~HumanB(void);

    private:
        std::string name;
        Weapon* weapon;
    
};

#endif