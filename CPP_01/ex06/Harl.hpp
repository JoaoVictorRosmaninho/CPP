/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:55:19 by jv                #+#    #+#             */
/*   Updated: 2024/05/04 14:39:51 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

#define N 4

class Harl {
    public:
        
         Harl();
        ~Harl();
        
        void          complain( std::string level );
    private:
        void          debug( void );
        void          info( void );
        void          warning( void );
        void          error( void);

};


#endif