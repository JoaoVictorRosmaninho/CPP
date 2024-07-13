/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:31:22 by joao              #+#    #+#             */
/*   Updated: 2024/07/13 16:01:27 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"



Brain::Brain( void ) {
    this->ideas = new std::string[SIZE_OF_IDEAS];

    std::cout << "Brain: Constructor Called!" << std::endl;
}

Brain::Brain( Brain const& other ) : ideas(other.getIdeas()) { 
    
}

Brain::Brain( Brain* other) {
    this->ideas = new std::string[SIZE_OF_IDEAS];

    std::cout << "BRAIN: Deep Copy" << std::endl;

    for (unsigned char i = 0; i < SIZE_OF_IDEAS; i++) 
        this->ideas[i] = other->getIdea(i);
}

Brain::~Brain( void ) {
   delete[] this->ideas; 
}

Brain& Brain::operator=(Brain const& other) {
    this->ideas = other.getIdeas();

    return *this;
}

std::string* Brain::getIdeas( void ) const {
    return this->ideas;
}

std::string Brain::getIdea(unsigned char position) const {
    return this->ideas[position];
}

bool Brain::setIdeia(unsigned char position, std::string ideia) {
    if (position > SIZE_OF_IDEAS) 
        return false;
    
    this->ideas[position] = ideia;
    
    return true;
}
