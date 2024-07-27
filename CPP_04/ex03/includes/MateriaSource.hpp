/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:45:37 by joao              #+#    #+#             */
/*   Updated: 2024/07/26 21:08:45 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "IMateria.hpp"


#define TOTAL_MATERIA 4 
    class MateriaSource : public IMateriaSource {
        public:
             MateriaSource( void );
            ~MateriaSource( void );

             MateriaSource( const MateriaSource& other);

             MateriaSource& operator=(const MateriaSource& other);

             void      learnMateria(AMateria* materia);
             
             AMateria* createMateria(std::string const& type);
             AMateria* getSlots( void ) const;
             AMateria* getSlotsAt( unsigned char position) const;

             unsigned char getLearnedMats( void ) const; 

        private:

            AMateria* slots[TOTAL_MATERIA];

            unsigned char learnedMats;
    };

#endif