/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:10:53 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 11:22:01 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include "Cat.hpp"

Cat::Cat(const Cat &a)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = a.type;
}

Cat::Cat(void) : Animal("Cat")
{
	std::cout << this->type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << "destructor called" << std::endl;
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
	return(*this);
}


