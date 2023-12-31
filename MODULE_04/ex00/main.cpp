/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:59:57 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/27 14:21:29 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"Animal.hpp"
int main( void )
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->get_WrongAnimal() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->get_WrongAnimal() << " " << std::endl;
    wrong->makesound();
    wrongCat->makesound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}
