/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:59:11 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/26 16:13:32 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include "Cat.hpp"

Cat::Cat(const Cat &a)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = a;
}

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->C_Brain = new Brain();
}

Cat::~Cat()
{
	std::cout << " Cat destructor called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Meow!" << std::endl;
}
std::string Cat::get_type()
{
	return(this->type);
}
Cat &Cat::operator=(const Cat &a)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = a.type;
	delete (this->C_Brain);
	this->C_Brain = new Brain(*a.C_Brain);
	return(*this);
}
