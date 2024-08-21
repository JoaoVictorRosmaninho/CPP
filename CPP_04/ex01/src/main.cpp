/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:31:59 by joao              #+#    #+#             */
/*   Updated: 2024/08/20 22:16:57 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define TOTAL 20

int main(void) {
    Animal** animals = new Animal*[TOTAL];

    for (int i = 0; i < TOTAL / 2; i++) {
        std::cout << "-------------" << i << "-------------" << std::endl;
        if ( i < 3 ) {
            animals[i] = new Cat();
        } else {
            animals[i] = new Dog();
        }
    }

    std::cout << std::endl;
    std::cout << "-------" << " Deep Copy " << "-------" << std::endl;

    Cat cat = dynamic_cast<Cat&>(animals[0][0]);

    std::cout << "Before:" << std::endl;
    
    std::cout << "ideia 0:" << cat.getBrain()->getIdea(0) << std::endl;
    std::cout << "ideia 0:" << dynamic_cast<Cat*>(animals[0])->getBrain()->getIdea(0) << std::endl;

    cat.getBrain()->setIdeia(0, "caçar um  rato!");

    std::cout << "After:" << std::endl;
    std::cout << "ideia 0:" << cat.getBrain()->getIdea(0) << std::endl;
    std::cout << "ideia 0:" << dynamic_cast<Cat*>(animals[0])->getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl;
    std::cout << "-------" << " Destructors " << "-------" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < TOTAL / 2; i++) {
        std::cout << "-------------" << i << "-------------" << std::endl;
        delete animals[i];
    }

    {
        std::cout << "-------" << " 42DeepCopy Test " << "-------" << std::endl;
        Dog basic;
        {
            Dog tmp = basic;
            Dog another(tmp);

            std::cout << "expect brain from basic be different from brain from tmp: " << (basic.getBrain() != tmp.getBrain()) << std::endl;

            std::cout << "expect brain from another be different from brain from tmp: " << (another.getBrain() != tmp.getBrain()) << std::endl;   

        }
        std::cout << std::endl;
    }

    delete[] animals;

    return 0;
}
