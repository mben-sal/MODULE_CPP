/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:33:41 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 11:22:11 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->type << " constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << "destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = a.type;
	return(*this);
}

Dog::Dog(const Dog &a)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = a.type;
}

void Dog::makeSound()const
{
	std::cout << "Woef" << std::endl;

}

std::string Dog::get_type()
{
	return(this->type);
}