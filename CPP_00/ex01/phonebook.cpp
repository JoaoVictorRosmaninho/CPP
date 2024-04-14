/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:41:50 by jv                #+#    #+#             */
/*   Updated: 2024/04/14 13:09:33 by jv               ###   ########.fr       */
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
    short int index;
    
    if (total_contacts < 1) {
        std::cout << "Empty List" << std::endl;
        return ;
    }
    std::cout << "------------- PHONEBOOK CONTACTS -------------" << std::endl;
    
    for (short int i = 0; i < total_contacts; i++) {
        this->contacts[i].show_sumarize();
    }

    do {
        index = Input::read_contact_index();
    } while (index > total_contacts - 1) ;
    
    show_contact_info(index);
}

void Phonebook::show_contact_info(short int index) {
    this->contacts[index].show();
}

