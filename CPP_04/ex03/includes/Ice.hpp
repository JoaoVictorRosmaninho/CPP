/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:11:46 by joao              #+#    #+#             */
/*   Updated: 2024/07/27 11:09:21 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

    class Ice : public AMateria {
        public:
            
            Ice( void );
            Ice( std::string const& type);
            Ice( Ice const& other);

           ~Ice( void );


            std::string const& getType( void ) const;


            Ice* clone( void ) const;
    
            void use(ICharacter& target);

            Ice const& operator=(AMateria const& other);
    };
#endif