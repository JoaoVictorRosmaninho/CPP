/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 09:25:40 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 17:38:05 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
    public:
        void announce ( void );
        void set_name(std::string name);
        Zombie* zombieHorde(int N, std::string name);

        Zombie( std::string name );
        Zombie( void );
        ~Zombie();
    private:
        std::string name;
};

#endif