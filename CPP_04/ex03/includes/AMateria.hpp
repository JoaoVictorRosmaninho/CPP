/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:27:04 by joao              #+#    #+#             */
/*   Updated: 2024/07/27 12:24:01 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;
    
    class AMateria {
        protected:
            std::string type;
        public:
            AMateria( void );
            AMateria( std::string const& type );
            AMateria( AMateria const& other );

            virtual ~AMateria( void );


            std::string const& getType( void ) const;
            

            virtual AMateria* clone( void ) const = 0;
            virtual void      use(ICharacter& target);
            virtual AMateria const& operator=(AMateria const& other);
    };
#endif