/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:03:57 by joao              #+#    #+#             */
/*   Updated: 2024/09/07 16:18:15 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "ScalarConverter.hpp"

    
    class Serializer {
        public:
            typedef struct SData {
                ScalarConverter::Type _type;
                void*                 _content;

                SData(ScalarConverter::Type type, void* content) : _type(type), _content(content) {};
            } Data;
            
            static uintptr_t serialize(Data* ptr);

            static Data*     deserialize(uintptr_t raw);
        private:
            Serializer( void );
        
    };
#endif