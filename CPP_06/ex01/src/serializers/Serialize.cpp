/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:33:48 by joao              #+#    #+#             */
/*   Updated: 2024/09/07 14:46:03 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) { };


uintptr_t Serializer::serialize( Data* ptr ) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Serializer::Data* Serializer::deserialize( uintptr_t raw ) {
    return reinterpret_cast<Data*>(raw);
}