/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 09:25:40 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 09:51:47 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
    public:
        void announce ( void );
        void randomChump ( std::string name );
        Zombie* newZombie( std::string name );

        Zombie( std::string name );
        ~Zombie();
    private:
        std::string name;
};

#endif