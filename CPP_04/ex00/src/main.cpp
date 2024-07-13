/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:31:59 by joao              #+#    #+#             */
/*   Updated: 2024/07/13 12:55:20 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
/*
    const Animal* meta = new Animal();
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();
    
    std::cout << "Type: " << j->getType() << " " << std::endl;
    std::cout << "Type: " << i->getType() << " " << std::endl;
    
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
*/  

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongCat*    wi    = new WrongCat();
    std::cout << "Type: " << wi->getType() << " " << std::endl;
    wmeta->makeSound();
    wi->makeSound();
    delete wmeta; delete wi;


    return 0;

}
