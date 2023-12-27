/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:27:46 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/27 14:12:26 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main( void )
{
	
    Cat basic;
    {
        Cat tmp = basic;
    }

    // const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    // for ( int i = 0; i < 4; i++ ) {
    //     delete animals[i];
    // }

    return 0;
}