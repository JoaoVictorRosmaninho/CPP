/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:41:50 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 11:19:59 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

short int Phonebook::total_contacts = 0;

Phonebook::Phonebook() {
}

Phonebook::~Phonebook() {
    
}

void Phonebook::add_contacts() {
    static short int positions = 0;

    this->position = positions % MAX_CONTACTS;
    this->contacts[this->position].initialize(this->position);

    positions++;
    if (total_contacts < MAX_CONTACTS) total_contacts++;
}

void Phonebook::display_list()  {
    if (total_contacts < 1) {
        std::cout << "Empty List" << std::endl;
        return ;
    }
    std::cout << "------------- PHONEBOOK CONTACTS -------------" << std::endl;
    
    for (short int i = 0; i < total_contacts; i++) {
        this->contacts[i].show_sumarize();
    }

    show_contact_info(Input::read_contact_index());
}

void Phonebook::show_contact_info(short int index) {
    this->contacts[index].show();
}

