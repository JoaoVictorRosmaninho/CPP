/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:27:18 by jv                #+#    #+#             */
/*   Updated: 2024/04/15 23:03:54 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(const std::string& path, const std::string& s1, const std::string& s2) : from(s1), to(s2) {
    this->file = std::fstream(path, std::ios::in | std::ios::out);
}

Sed::~Sed() {}

void Sed::execute(void) {
    std::string line;

    if (!this->file.is_open()) {
        std::cout << "Error in open file" << std::endl;
        return ;
    }
    std::streampos begin = this->file.tellg();
    while (std::getline(this->file, line)) {
        if (line.length() < this->from.length())
            continue;
        for (int i = 0; i < (int)line.length(); i++) {
            if (line[i] == from[0] && line.substr(i, from.length()) == from) {
                file.seekp(begin);
                this->file.write(this->to.c_str(), this->to.length());
                
                int diff = (int)this->from.length() - this->to.length();
                for (int i = this->to.length() + diff; i < (int)line.length(); i++) 
                    this->file.put(line[i]);
                
                begin += this->from.length();
                i     += this->from.length();
            } 
        }

        begin = this->file.tellg();
    }

    this->file.close();
}