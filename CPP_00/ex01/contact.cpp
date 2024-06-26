/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:53:13 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 10:51:59 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


Contact::Contact() {
    
}

Contact::~Contact() {
    
}

std::string Contact::to_string() {
    std::string representation = "";

    representation += "{name: ";
    representation += this->name;
    representation += ", last_name: ";
    representation += this->last_name;
    representation += "}";


    return representation;
}

void Contact::initialize(short int index) {
    this->index          = index;
    this->name           = Input::read_contact_info("Please enter your first name: ");
    this->last_name      = Input::read_contact_info("Please enter your last name: ");
    this->nickname       = Input::read_contact_info("Please enter your nickname: ");
    this->phone_number   = Input::read_contact_info("Please enter your phone number: ");
    this->darkest_secret = Input::read_contact_info("Please enter your darkest secret: ");
}

void Contact::show() {
        std::cout << "name:"           << this->name  << std::endl;
        std::cout << "last name:"      << this->last_name << std::endl;
        std::cout << "nickname:"       << this->nickname   << std::endl;
        std::cout << "phone number:"   << this->phone_number << std::endl;
        std::cout << "darkest secret:" << this->darkest_secret << std::endl;
        std::cin.clear();
}

void Contact::show_sumarize() {
        std::cout << "| " << std::setw(10) << this->index             << std::flush;
        std::cout << "| " << std::setw(10) << format(this->name)      << std::flush;
        std::cout << "| " << std::setw(10) << format(this->last_name) << std::flush;
        std::cout << "| " << std::setw(10) << format(this->nickname)  << "|" << std::flush;
        std::cout << std::endl;
}

std::string Contact::format(std::string text) {
    return text.length() > 10 ? text.substr(0,  9) + "." : text;
}