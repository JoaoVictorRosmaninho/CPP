/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:26:09 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 23:41:49 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
    public:
        void attack(void);

        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

    private:
        std::string name;
        Weapon&      weapon;
    
};

#endif