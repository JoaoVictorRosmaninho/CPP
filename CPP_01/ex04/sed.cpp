/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:27:18 by jv                #+#    #+#             */
/*   Updated: 2024/04/15 00:43:31 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(const std::string& path, const std::string& s1, const std::string& s2) : from(s1), to(s2) {
    this->fin.open(path);
}

Sed::~Sed() {}

void Sed::execute(void) {
    std::string line;

    while (std::getline(this->fin, line)) {
        std::cout << line << std::endl;
    }
}