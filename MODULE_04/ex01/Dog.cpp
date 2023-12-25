/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:11:53 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 15:38:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Brain.hpp"
#include"Animal.hpp"

Dog::Dog(/* args */)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Dog";
	this->D_Brain = new Brain();
}

Dog::~Dog()
{
	std::cout << " Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &a)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = a;
}

void Dog::makeSound()const
{
	std::cout << "Woef" << std::endl;

}

Dog &Dog::operator=(const Dog &a)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = a.type;
	delete (this->D_Brain);
	this->D_Brain = new Brain(*a.D_Brain);
	return(*this);
}
std::string Dog::get_type()
{
	return(this->type);
}