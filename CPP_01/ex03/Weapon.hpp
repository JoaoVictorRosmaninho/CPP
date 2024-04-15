/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:23:35 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 23:25:45 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include "string"

class Weapon {

    private:
        std::string type;
    public:
        const std::string& getType();
        void setType(const std::string type);

        Weapon(std::string type);
        Weapon(void);
        ~Weapon(void);
};

#endif