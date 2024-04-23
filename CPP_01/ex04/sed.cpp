/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:27:18 by jv                #+#    #+#             */
/*   Updated: 2024/04/22 23:27:08 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(const std::string& path, const std::string s1, const std::string s2) : from(s1), to(s2) {
    this->in.open(path);
    this->out.open(path + ".replace");
}

Sed::~Sed() {}

void Sed::execute(void) {
    std::string line;

    if (!this->in.is_open() || !this->out.is_open()) {
        std::cout << "Error in open file" << std::endl;
        return ;
    }
    while (std::getline(this->in, line)) {
        if (line.length() < this->from.length()) {
            this->out << line << std::endl;
            continue;
        }
        for (int i = 0; i < (int)line.length(); i++) {
            if (line[i] == this->from[0] && line.substr(i, from.length()) == from) {
                this->out << this->to;
                i += this->from.length() - 1;
            } else {
                this->out << line[i];
            }
        }
        this->out << std::endl;
    }

    this->in.close();
    this->out.close();
}