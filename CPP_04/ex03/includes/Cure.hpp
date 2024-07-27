/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:33:42 by joao              #+#    #+#             */
/*   Updated: 2024/07/27 11:08:21 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

    class Cure : public AMateria {
        public:
            Cure( void );
            Cure( std::string const& type);
            Cure( Cure const& other);

            ~Cure( void );


            std::string const& getType( void ) const;


            virtual Cure* clone( void ) const;
            
            void use(ICharacter& target);
            
            Cure const& operator=(AMateria const& other);

    };
#endif