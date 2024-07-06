/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:31:59 by joao              #+#    #+#             */
/*   Updated: 2024/07/05 22:48:25 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"



int main(void) {
    
    Animal animal;
    Cat cat;
    Dog dog;


    animal.makeSound();
    cat.makeSound();
    dog.makeSound();

    std::cout << "Finalizando!" << std::endl;
}