/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:39:43 by joao              #+#    #+#             */
/*   Updated: 2024/07/24 22:49:45 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
#define IMATERIA_HPP

#include "AMateria.hpp"
#include <string>

    class IMateriaSource {
        public:
            virtual ~IMateriaSource() { };
            virtual void learnMateria(AMateria*) = 0;
            virtual AMateria* createMateria(std::string const& type) = 0;
    };

#endif