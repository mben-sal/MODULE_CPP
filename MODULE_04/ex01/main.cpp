/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:27:46 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 15:23:42 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main( void )
{
	const Animal *t[2];
	t[0] = new Dog();
	t[1] =  new Cat();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
	int i = 0;
	while (i < 2)
	{
		std::cout << t[i]->get_type() << std::endl;
		t[i]->makeSound();
    	delete t[i];
		i++;
	}
	

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }

    // const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    // for ( int i = 0; i < 4; i++ ) {
    //     delete animals[i];
    // }

    return 0;
}